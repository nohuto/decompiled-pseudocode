/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800546B4
 * Callers:
 *     _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x180001640 (_dynamic_initializer_for__g_SarmTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x180001690 (_dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__.c)
 *     _dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x180001930 (_dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(ULONGLONG *CallbackContext)
{
  ULONGLONG *v1; // rsi
  bool v2; // zf
  signed int v4; // eax
  unsigned int v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = CallbackContext + 4;
  v2 = CallbackContext[4] == 0;
  ProviderId = *(GUID *)(CallbackContext[1] - 16);
  if ( !v2 )
    __fastfail(5u);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  v4 = EventRegister(&ProviderId, tlgEnableCallback, CallbackContext, v1);
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
