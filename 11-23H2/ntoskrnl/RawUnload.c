/*
 * XREFs of RawUnload @ 0x1409B84A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 */

LONG_PTR RawUnload()
{
  ObfDereferenceObject(RawDeviceTapeObject);
  ObfDereferenceObject(RawDeviceCdRomObject);
  return ObfDereferenceObject(RawDeviceDiskObject);
}
