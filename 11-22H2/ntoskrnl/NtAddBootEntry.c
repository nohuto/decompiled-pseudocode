/*
 * XREFs of NtAddBootEntry @ 0x1409FE8F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  if ( dword_140C31AF0 == 2 )
    return ExpSetBootEntry(1, BootEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
