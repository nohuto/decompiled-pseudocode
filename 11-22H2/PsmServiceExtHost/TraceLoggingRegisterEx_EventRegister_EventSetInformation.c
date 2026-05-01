/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180043D28
 * Callers:
 *     TraceLoggingRegister_EventRegister_EventSetInformation @ 0x180001008 (TraceLoggingRegister_EventRegister_EventSetInformation.c)
 *     PsmInitializeServiceExtension4 @ 0x1800439F0 (PsmInitializeServiceExtension4.c)
 *     TlgRegisterAggregateProviderEx @ 0x180043C50 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        ULONGLONG *CallbackContext,
        ULONGLONG a2,
        ULONGLONG a3)
{
  ULONGLONG *v3; // rsi
  bool v4; // zf
  signed int v6; // eax
  unsigned int v7; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = CallbackContext + 4;
  v4 = CallbackContext[4] == 0;
  ProviderId = *(GUID *)(CallbackContext[1] - 16);
  if ( !v4 )
    __fastfail(5u);
  CallbackContext[5] = a2;
  CallbackContext[6] = a3;
  v6 = EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, CallbackContext, v3);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      return (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      *v3,
      2LL,
      CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1],
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
  }
  return v7;
}
