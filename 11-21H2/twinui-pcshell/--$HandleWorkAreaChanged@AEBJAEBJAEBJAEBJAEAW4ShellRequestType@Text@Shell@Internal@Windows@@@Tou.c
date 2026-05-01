/*
 * XREFs of ??$HandleWorkAreaChanged@AEBJAEBJAEBJAEBJAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEBJ000AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800C0230
 * Callers:
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BE2F0 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestT.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleWorkAreaChanged<long const &,long const &,long const &,long const &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        char *a5)
{
  __int64 v9; // rax
  __int64 v10; // r10
  char v11; // cl
  char v13; // [rsp+38h] [rbp-51h] BYREF
  int v14; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v15; // [rsp+40h] [rbp-49h] BYREF
  int v16; // [rsp+44h] [rbp-45h] BYREF
  int v17; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-31h] BYREF
  int *v19; // [rsp+78h] [rbp-11h]
  __int64 v20; // [rsp+80h] [rbp-9h]
  int *v21; // [rsp+88h] [rbp-1h]
  __int64 v22; // [rsp+90h] [rbp+7h]
  int *v23; // [rsp+98h] [rbp+Fh]
  __int64 v24; // [rsp+A0h] [rbp+17h]
  int *v25; // [rsp+A8h] [rbp+1Fh]
  __int64 v26; // [rsp+B0h] [rbp+27h]
  char *v27; // [rsp+B8h] [rbp+2Fh]
  __int64 v28; // [rsp+C0h] [rbp+37h]

  v9 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v9 + 8) > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn(*(_QWORD *)(v9 + 8), 16LL);
    if ( (_BYTE)v9 )
    {
      v28 = 1LL;
      v26 = 4LL;
      v24 = 4LL;
      v11 = *a5;
      v14 = *a4;
      v15 = *a3;
      v16 = *a2;
      v17 = *a1;
      v27 = &v13;
      v25 = &v14;
      v23 = &v15;
      v21 = &v16;
      v19 = &v17;
      v13 = v11;
      v22 = 4LL;
      v20 = 4LL;
      LOBYTE(v9) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1806BD02A, 0LL, 0LL, 7u, &v18);
    }
  }
  return v9;
}
