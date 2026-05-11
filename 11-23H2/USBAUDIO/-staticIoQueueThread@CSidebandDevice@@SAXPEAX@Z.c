/*
 * XREFs of ?staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z @ 0x1C0012B90
 * Callers:
 *     <none>
 * Callees:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000689C (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 */

void __fastcall CSidebandDevice::staticIoQueueThread(struct _LIST_ENTRY *StartContext)
{
  CSidebandDevice::IoQueueThread(StartContext);
}
