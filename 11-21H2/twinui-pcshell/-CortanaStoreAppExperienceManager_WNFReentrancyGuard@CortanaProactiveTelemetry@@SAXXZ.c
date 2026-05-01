/*
 * XREFs of ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x180386D44
 * Callers:
 *     _lambda_67f1862805ee8077baf0f70ad7f386d7_::operator() @ 0x180197F54 (_lambda_67f1862805ee8077baf0f70ad7f386d7_--operator().c)
 *     _lambda_bd25e2ba6f0ad956a34c66bf3060a154_::operator() @ 0x180198238 (_lambda_bd25e2ba6f0ad956a34c66bf3060a154_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x18012AF8C (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = (_DWORD *)wil::details::static_lazy<CortanaProactiveLogging>::get(
                   a1,
                   _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1806AA767, 0LL, 0LL, 3u, &v4);
    }
  }
}
