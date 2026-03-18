/*
 * XREFs of _UnregisterHotKey @ 0x1C009DD7C
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C009DCF0 (NtUserUnregisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00F1804 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C009DF10 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 __fastcall UnregisterHotKey(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx

  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, a1, a2, 3LL) )
  {
    qword_1C0335C80 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL, v2);
    return 0LL;
  }
}
