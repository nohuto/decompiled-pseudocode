/*
 * XREFs of ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x1C006F3E0
 * Callers:
 *     DxgkAllocateAdlCB @ 0x1C00546B0 (DxgkAllocateAdlCB.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02BC600 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmAllocateAdl @ 0x1C006EDB8 (SmmAllocateAdl.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x1C006EF84 (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 *     SmmDetermineAdlType @ 0x1C006F090 (SmmDetermineAdlType.c)
 *     SmmSetAdlBaseAddress @ 0x1C006F130 (SmmSetAdlBaseAddress.c)
 *     SmmSetAdlPageArray @ 0x1C006F208 (SmmSetAdlPageArray.c)
 *     SmmValidateParameters @ 0x1C006F2C0 (SmmValidateParameters.c)
 */

__int64 __fastcall SysMmCreateAdl(
        struct SYSMM_ADAPTER_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _DXGK_ADL **a5)
{
  PHYSICAL_ADDRESS *v5; // rbp
  char v7; // r14
  unsigned int v10; // edi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r13
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // r9
  struct SYSMM_ADL *Adl; // rax
  struct SYSMM_ADL *v21; // r14
  PHYSICAL_ADDRESS v22; // rcx
  PHYSICAL_ADDRESS *v23; // rax
  PHYSICAL_ADDRESS **v24; // rdx

  v5 = (PHYSICAL_ADDRESS *)((char *)a1 - 64);
  v7 = a4;
  v10 = 0;
  if ( !SmmValidateParameters((__int64)a1 - 64, a2, a3, a4) )
    return 3221225485LL;
  v12 = a2 >> 12;
  v13 = a3 >> 12;
  ExAcquirePushLockExclusiveEx(&v5[4], 0LL);
  if ( (v5[5].HighPart & 1) != 0 || v5[6].LowPart )
  {
    v17 = SmmDetermineAdlType((__int64)a1, (__int64)v5, v7);
    Adl = (struct SYSMM_ADL *)SmmAllocateAdl(v13, v17, v18, v19);
    v21 = Adl;
    if ( Adl )
    {
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          SmmSetAdlBaseAddress((__int64)a1, (__int64)v5, (__int64)Adl, v12);
        }
        else if ( v17 == 2 )
        {
          SmmSetAdlPageArray((__int64)v5, (__int64)Adl, v12);
        }
      }
      else
      {
        SmmBuildAdl(a1, v5, Adl, v12, v13);
      }
      ++*((_DWORD *)a1 + 8);
      if ( (dword_1C0130B08 & 0x20) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)v21 + 16LL) = a1;
        v22 = v5[3];
        v23 = *(PHYSICAL_ADDRESS **)v21;
        v24 = *(PHYSICAL_ADDRESS ***)(v22.QuadPart + 8);
        if ( *v24 != (PHYSICAL_ADDRESS *)v22.QuadPart )
          __fastfail(3u);
        *v23 = v22;
        v23[1].QuadPart = (LONGLONG)v24;
        *v24 = v23;
        *(_QWORD *)(v22.QuadPart + 8) = v23;
      }
      *a5 = (struct SYSMM_ADL *)((char *)v21 + 8);
    }
    else
    {
      *a5 = 0LL;
      v10 = -1073741801;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v15,
          v14,
          v16,
          0LL,
          0,
          -1,
          L"Creating ADL against unlocked memory",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    v10 = -1073741811;
  }
  ExReleasePushLockExclusiveEx(&v5[4], 0LL);
  return v10;
}
