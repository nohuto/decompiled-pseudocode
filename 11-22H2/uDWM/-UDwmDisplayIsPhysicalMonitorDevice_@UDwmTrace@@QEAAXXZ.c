/*
 * XREFs of ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ @ 0x1800A62E8
 * Callers:
 *     _lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator() @ 0x1800A4CE4 (_lambda_5d2a0d57000e9a8e56f274d64107aadc_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180008020 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800A66B4 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall UDwmTrace::UDwmDisplayIsPhysicalMonitorDevice_(UDwmTrace *this)
{
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v3[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  v1 = *(_QWORD *)(wil::details::static_lazy<UDwmTrace>::get(
                     this,
                     _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v1 > 4u
    && (*(_QWORD *)(v1 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x200000000000LL) == *(_QWORD *)(v1 + 24) )
  {
    v6 = 0;
    v4 = &v2;
    v2 = 0x2000000LL;
    v5 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer(v1, byte_180125157, 0LL, 0LL, 3, (__int64)v3);
  }
}
