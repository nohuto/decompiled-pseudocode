/*
 * XREFs of ??$HandleShellRequestedHide@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18047F558
 * Callers:
 *     ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481DC0 (-HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@S.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleShellRequestedHide<enum Windows::Internal::Shell::Text::ShellRequestType &>(
        char *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  char v5; // al
  char v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  char *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 16LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v11 = 0;
      v7 = v5;
      v10 = 1;
      v9 = &v7;
      LOBYTE(v2) = tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1806BD24A, 0LL, 0LL, 3u, &v8);
    }
  }
  return (char)v2;
}
