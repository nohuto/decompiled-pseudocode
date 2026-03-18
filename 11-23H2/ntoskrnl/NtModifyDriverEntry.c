/*
 * XREFs of NtModifyDriverEntry @ 0x1409FF2B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FD900 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C31B10 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
