/*
 * XREFs of ??$HandleInvocationBySystemButton@AEB_NAEB_NAEAU?$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N0AEAU?$atomic@_N@std@@1AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180530850
 * Callers:
 *     ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180533190 (-HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleInvocationBySystemButton<bool const &,bool const &,std::atomic<bool> &,std::atomic<bool> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        char *a1,
        char *a2,
        char *a3,
        char *a4,
        char *a5)
{
  __int64 *v9; // rax
  __int64 v10; // r10
  char v11; // al
  char v13; // [rsp+38h] [rbp-51h] BYREF
  char v14; // [rsp+39h] [rbp-50h] BYREF
  char v15; // [rsp+3Ah] [rbp-4Fh] BYREF
  char v16; // [rsp+3Bh] [rbp-4Eh] BYREF
  char v17; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-41h] BYREF
  char *v20; // [rsp+68h] [rbp-21h]
  __int64 v21; // [rsp+70h] [rbp-19h]
  char *v22; // [rsp+78h] [rbp-11h]
  __int64 v23; // [rsp+80h] [rbp-9h]
  char *v24; // [rsp+88h] [rbp-1h]
  __int64 v25; // [rsp+90h] [rbp+7h]
  char *v26; // [rsp+98h] [rbp+Fh]
  __int64 v27; // [rsp+A0h] [rbp+17h]
  char *v28; // [rsp+A8h] [rbp+1Fh]
  __int64 v29; // [rsp+B0h] [rbp+27h]
  __int64 *v30; // [rsp+B8h] [rbp+2Fh]
  __int64 v31; // [rsp+C0h] [rbp+37h]

  v9 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v9[1] > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn(v9[1], 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v18 = 0x1000000LL;
      v11 = *a4;
      v13 = *a5;
      v14 = v11;
      v15 = *a3;
      v16 = *a2;
      v17 = *a1;
      v30 = &v18;
      v28 = &v13;
      v26 = &v14;
      v24 = &v15;
      v22 = &v16;
      v20 = &v17;
      v31 = 8LL;
      v29 = 1LL;
      v27 = 1LL;
      v25 = 1LL;
      v23 = 1LL;
      v21 = 1LL;
      LOBYTE(v9) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1808648EB, 0LL, 0LL, 8u, &v19);
    }
  }
  return (char)v9;
}
