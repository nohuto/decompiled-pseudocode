/*
 * XREFs of NtModifyDriverEntry @ 0x1409FF540
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FDB90 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140C31AB0 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
