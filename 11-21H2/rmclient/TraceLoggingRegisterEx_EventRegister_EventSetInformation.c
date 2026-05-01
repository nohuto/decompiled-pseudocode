/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180005840
 * Callers:
 *     DllMain @ 0x18000BDCC (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

signed int TraceLoggingRegisterEx_EventRegister_EventSetInformation()
{
  signed int result; // eax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  ProviderId = (GUID)*((_OWORD *)off_180032008 - 1);
  if ( RegHandle )
    __fastfail(5u);
  xmmword_180032028 = 0LL;
  result = EventRegister(&ProviderId, tlgEnableCallback, &dword_180032000, &RegHandle);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    EventSetInformation(
      RegHandle,
      2LL,
      off_180032008,
      *(unsigned __int16 *)off_180032008,
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
    return 0;
  }
  return result;
}
