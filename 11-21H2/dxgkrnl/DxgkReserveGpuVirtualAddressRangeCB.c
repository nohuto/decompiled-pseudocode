/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01C9150
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGADAPTER *DxgAdapter; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int128 *v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int128 v15; // [rsp+50h] [rbp-29h] BYREF
  __int128 v16; // [rsp+60h] [rbp-19h]
  __int128 v17; // [rsp+70h] [rbp-9h]
  _BYTE v18[8]; // [rsp+80h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v18);
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v5, v4, v6, v7) + 106) & 0x80) != 0 )
  {
    WdLogSingleEntry1(2LL, 331LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"KMD should not reserve GPU VA for the VM worker process",
      331LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v13 = -1073741811;
  }
  else
  {
    DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1);
    Global = DXGGLOBAL_GetGlobal();
    if ( *((_BYTE *)Global + 1722)
      && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)Global + 1716),
           DxgAdapter) )
    {
      v13 = -1073741637;
    }
    else
    {
      v10 = *((_QWORD *)DxgAdapter + 350);
      v11 = a2;
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL) + 40LL) + 28LL);
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      if ( v12 <= 0x5003 )
      {
        v11 = &v15;
        LODWORD(v16) = *((_DWORD *)a2 + 4);
        v15 = *a2;
        *(_QWORD *)&v17 = 0LL;
        *((_QWORD *)&v16 + 1) = 0LL;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(*(_QWORD *)(v10 + 648) + 8LL) + 840LL))(
              *(_QWORD *)(v10 + 656),
              v11);
      *((_QWORD *)a2 + 3) = *((_QWORD *)v11 + 3);
    }
  }
  if ( v18[0] )
    KeUnstackDetachProcess(&ApcState);
  return v13;
}
