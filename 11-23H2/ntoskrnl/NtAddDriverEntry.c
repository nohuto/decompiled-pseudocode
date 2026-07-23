/*
 * XREFs of NtAddDriverEntry @ 0x1409FEB00
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FDB90 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  if ( dword_140C31AB0 == 2 )
    return ExpSetDriverEntry(1, DriverEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
