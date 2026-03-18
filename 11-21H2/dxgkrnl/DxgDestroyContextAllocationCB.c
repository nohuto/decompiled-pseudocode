/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C01C9360
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 DxgAdapter; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+50h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 235LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      235LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  v5 = *(_QWORD *)(DxgAdapter + 2800);
  if ( !v5 )
  {
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
    v5 = *(_QWORD *)(DxgAdapter + 2800);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v5 + 648) + 8LL) + 672LL))(
         *(_QWORD *)(v5 + 656),
         a2);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
  return v6;
}
