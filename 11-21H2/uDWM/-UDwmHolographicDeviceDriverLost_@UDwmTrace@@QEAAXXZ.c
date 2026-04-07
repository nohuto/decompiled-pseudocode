/*
 * XREFs of ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x18009DF10
 * Callers:
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x18009C810 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18009E190 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall UDwmTrace::UDwmHolographicDeviceDriverLost_(UDwmTrace *this)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v4[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<UDwmTrace>::get(
                      this,
                      _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 4u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x2000000LL;
      v6 = 8;
      tlgWriteTransfer_EtwEventWriteTransfer(v2, byte_18011E6D1, 0LL, 0LL, 3, (__int64)v4);
    }
  }
}
