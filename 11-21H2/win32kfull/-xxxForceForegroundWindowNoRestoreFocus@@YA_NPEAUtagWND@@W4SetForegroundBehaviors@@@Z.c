/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C011E5AC
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0004560 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01CEBA0 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     NtUserNavigateFocus @ 0x1C01FA6F0 (NtUserNavigateFocus.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 */

bool __fastcall xxxForceForegroundWindowNoRestoreFocus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v6; // rbx

  v4 = a2;
  v6 = 0LL;
  if ( !(unsigned __int8)IsInputThread(a1, a2, a3, a4) && gptiRit != gptiCurrent )
    v6 = gptiCurrent;
  return (unsigned int)xxxSetForegroundWindow2(a1, v6, v4 | 0x40u) != 0;
}
