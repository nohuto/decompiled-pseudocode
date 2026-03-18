/*
 * XREFs of NtModifyDriverEntry @ 0x140A004C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FDC88 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C15C70 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
