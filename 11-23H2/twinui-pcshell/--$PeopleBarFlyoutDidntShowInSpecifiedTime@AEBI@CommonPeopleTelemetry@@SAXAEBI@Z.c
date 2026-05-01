/*
 * XREFs of ??$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z @ 0x18043D78C
 * Callers:
 *     _lambda_ceba1895e0fcd893f245352aa899c78d_::_lambda_invoker_cdecl_ @ 0x18043D530 (_lambda_ceba1895e0fcd893f245352aa899c78d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x180440660 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 */

char __fastcall CommonPeopleTelemetry::PeopleBarFlyoutDidntShowInSpecifiedTime<unsigned int const &>(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
         a1,
         _lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
  v2 = *(_DWORD **)(v1 + 8);
  if ( *v2 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v9 = 0;
      v7 = &v5;
      v5 = 5000;
      v8 = 4;
      LOBYTE(v1) = tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18084E3EE, 0LL, 0LL, 3u, &v6);
    }
  }
  return v1;
}
