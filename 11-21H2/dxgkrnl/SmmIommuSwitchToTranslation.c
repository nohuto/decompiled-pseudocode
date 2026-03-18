/*
 * XREFs of SmmIommuSwitchToTranslation @ 0x1C03C028C
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C08B4 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     SmmAssignDomain @ 0x1C006D784 (SmmAssignDomain.c)
 *     SmmMapAdapterObjectsToDomain @ 0x1C006E000 (SmmMapAdapterObjectsToDomain.c)
 *     SmmIommuDeleteDomain @ 0x1C03C01B0 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x1C03C04D4 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToTranslation(__int64 a1)
{
  __int64 v1; // r15
  char v2; // r14
  __int64 v4; // rcx
  int v5; // eax
  int v6; // esi
  __int64 v7; // rbp
  const wchar_t *v8; // r9
  __int64 v9; // rdx
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  v11 = 0LL;
  if ( SmmUseIommuV2Interface() )
  {
    v5 = qword_1C0130A50(0LL, 0LL);
  }
  else
  {
    LOBYTE(v4) = 1;
    v5 = qword_1C0130A50(v4, &v11);
  }
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = v5;
    WdLogSingleEntry2(2LL, a1, v5);
    v8 = L"Failed to create IOMMU domain. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
LABEL_14:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, a1, v7, 0LL, 0LL, 0LL);
    if ( v2 )
    {
      v9 = *(_QWORD *)(a1 + 336);
      if ( !v9 )
      {
        WdLogSingleEntry1(1LL, 2053LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->Iommu.CallbackContext != nullptr",
          2053LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v9 = *(_QWORD *)(a1 + 336);
      }
      (*(void (__fastcall **)(__int64, __int64))(a1 + 312))(a1, v9);
    }
    goto LABEL_18;
  }
  SmmAssignDomain(a1, v11, 0);
  v6 = SmmMapAdapterObjectsToDomain(a1);
  if ( v6 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 336) )
    {
LABEL_9:
      if ( (dword_1C0130B0C & 1) != 0 )
      {
        WdLogSingleEntry1(2LL, a1);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Verifier fault: Fail to attach to translation domain. SysMmAdapter=0x%.16I64x",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = -1073741823;
      }
      else
      {
        v6 = SmmSwapDomains(a1, *(_QWORD *)(a1 + 96), v1);
        if ( v6 >= 0 )
          return (unsigned int)v6;
      }
      v7 = v6;
      WdLogSingleEntry2(2LL, a1, v6);
      v8 = L"Failed to swap/attach IOMMU domains. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
      goto LABEL_14;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 304))(a1);
    if ( v6 >= 0 )
    {
      v2 = 1;
      goto LABEL_9;
    }
  }
LABEL_18:
  if ( v11 )
  {
    SmmAssignDomain(a1, v1, 1);
    SmmIommuDeleteDomain();
  }
  return (unsigned int)v6;
}
