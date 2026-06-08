/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C002ADC4
 * Callers:
 *     ProcLibRegisterEtw @ 0x1C0047728 (ProcLibRegisterEtw.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EtwRegister_EtwSetInformation()
{
  unsigned int v0; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  ProviderId = (GUID)*((_OWORD *)EventInformation - 1);
  if ( RegHandle )
    __fastfail(5u);
  xmmword_1C0015060 = 0LL;
  v0 = EtwRegister(&ProviderId, tlgEnableCallback, &dword_1C0015038, &RegHandle);
  if ( !v0 )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, (ULONG)*(unsigned __int16 *)EventInformation);
  return v0;
}
