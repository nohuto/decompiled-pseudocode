/*
 * XREFs of NtAddDriverEntry @ 0x1409FE870
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FD900 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtAddDriverEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C31B10 == 2 )
    return ExpSetDriverEntry(1, a1, a2);
  else
    return 3221225474LL;
}
