/*
 * XREFs of ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x180577070
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x1801BA2E0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1801BA2E0.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall WindowTabHostTelemetry::WindowTabHostTimestampUpdateCanceled<bool &,bool &,bool &>(
        char *a1,
        char *a2,
        char *a3)
{
  _QWORD *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  char v10; // [rsp+38h] [rbp-29h] BYREF
  char v11; // [rsp+39h] [rbp-28h] BYREF
  char v12; // [rsp+3Ah] [rbp-27h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-19h] BYREF
  char *v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  char *v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  char *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]
  __int64 *v21; // [rsp+98h] [rbp+37h]
  __int64 v22; // [rsp+A0h] [rbp+3Fh]

  v6 = wil::details::static_lazy<WindowManagementLogging>::get(
         (__int64)a1,
         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v10 = *a3;
      v11 = *a2;
      v12 = *a1;
      v21 = &v13;
      v19 = &v10;
      v17 = &v11;
      v15 = &v12;
      v13 = 0x1000000LL;
      v22 = 8LL;
      v20 = 1LL;
      v18 = 1LL;
      v16 = 1LL;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1806C83AB, 0LL, 0LL, 6u, &v14);
    }
  }
  return (char)v6;
}
