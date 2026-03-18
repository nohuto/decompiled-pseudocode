/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x14078E3A0
 * Callers:
 *     SmKmFileInfoCleanup @ 0x1409D8980 (SmKmFileInfoCleanup.c)
 *     SbpWaitForVmbus @ 0x140B9BF2C (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x1403205FC (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
