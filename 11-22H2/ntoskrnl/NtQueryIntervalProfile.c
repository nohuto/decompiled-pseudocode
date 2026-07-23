/*
 * XREFs of NtQueryIntervalProfile @ 0x140A04600
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryIntervalProfile @ 0x140975100 (KeQueryIntervalProfile.c)
 */

NTSTATUS __cdecl NtQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  __int64 v2; // r8

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Interval < 0x7FFFFFFF0000LL )
      v2 = (__int64)Interval;
    *(_DWORD *)v2 = *(_DWORD *)v2;
  }
  *Interval = KeQueryIntervalProfile(ProfileSource);
  return 0;
}
