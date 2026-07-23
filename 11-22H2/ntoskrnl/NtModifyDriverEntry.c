/*
 * XREFs of NtModifyDriverEntry @ 0x1409FF360
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FD9B0 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140C31AF0 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
