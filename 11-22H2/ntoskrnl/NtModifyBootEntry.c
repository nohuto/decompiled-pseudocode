/*
 * XREFs of NtModifyBootEntry @ 0x1409FF330
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140C31AF0 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
