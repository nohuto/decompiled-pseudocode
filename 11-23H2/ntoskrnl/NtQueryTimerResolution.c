/*
 * XREFs of NtQueryTimerResolution @ 0x1407E36E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryTimerResolution(PULONG MaximumTime, PULONG MinimumTime, PULONG CurrentTime)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MaximumTime < 0x7FFFFFFF0000LL )
      v6 = (__int64)MaximumTime;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MinimumTime < 0x7FFFFFFF0000LL )
      v7 = (__int64)MinimumTime;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    if ( (unsigned __int64)CurrentTime < 0x7FFFFFFF0000LL )
      v5 = (__int64)CurrentTime;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    *MaximumTime = KeMaximumIncrement;
    *MinimumTime = KeMinimumIncrement;
    *CurrentTime = KePseudoHrTimeIncrement;
  }
  else
  {
    *MaximumTime = KeMaximumIncrement;
    *MinimumTime = KeMinimumIncrement;
    *CurrentTime = KePseudoHrTimeIncrement;
  }
  return 0;
}
