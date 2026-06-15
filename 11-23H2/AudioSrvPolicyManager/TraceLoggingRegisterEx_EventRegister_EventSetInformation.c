/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001B60
 * Callers:
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18001BFC4 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(_QWORD *CallbackContext)
{
  _QWORD *v1; // rsi
  bool v2; // zf
  signed int v4; // eax
  unsigned int v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = CallbackContext + 4;
  v2 = CallbackContext[4] == 0LL;
  ProviderId = *(GUID *)(CallbackContext[1] - 16LL);
  if ( !v2 )
    __fastfail(5u);
  CallbackContext[6] = 0LL;
  CallbackContext[5] = AudioSrvPolicyManagerTelemetryProvider::Callback;
  v4 = EventRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      *v1,
      2LL,
      CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1],
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
  }
  return v5;
}
