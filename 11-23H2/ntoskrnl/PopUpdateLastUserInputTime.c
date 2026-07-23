/*
 * XREFs of PopUpdateLastUserInputTime @ 0x1407A7520
 * Callers:
 *     PopSystemIdleWorker @ 0x1407A6F90 (PopSystemIdleWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x140873AD4 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x1407A872C (PopPulseSystemIdleEvent.c)
 */

__int64 PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  __int64 result; // rax
  int v2; // edx
  int *v3; // r8

  v0 = 0LL;
  result = MEMORY[0xFFFFF780000002E4];
  if ( dword_140C09810 )
  {
    v2 = dword_140C0980C;
    v3 = &dword_140C0980C;
    v0 = 1LL;
  }
  else
  {
    v2 = dword_140C09808;
    v3 = &dword_140C09808;
  }
  if ( v2 != MEMORY[0xFFFFF780000002E4] )
  {
    *v3 = MEMORY[0xFFFFF780000002E4];
    return PopPulseSystemIdleEvent(v0);
  }
  return result;
}
