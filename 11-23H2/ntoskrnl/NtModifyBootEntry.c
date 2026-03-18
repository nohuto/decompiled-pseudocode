/*
 * XREFs of NtModifyBootEntry @ 0x1409FF280
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409FD170 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtModifyBootEntry(const void *a1)
{
  if ( dword_140C31B10 == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
