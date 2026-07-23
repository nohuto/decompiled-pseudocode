/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1406E78B0
 * Callers:
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 *     sub_140B55A38 @ 0x140B55A38 (sub_140B55A38.c)
 * Callees:
 *     sub_14025AA04 @ 0x14025AA04 (sub_14025AA04.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return sub_14025AA04(NotificationEntry, 0);
}
