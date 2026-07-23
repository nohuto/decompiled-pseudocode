/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x1402BFFF0
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C000C (KeFlushProcessWriteBuffers.c)
 */

NTSTATUS NtFlushProcessWriteBuffers(void)
{
  KeFlushProcessWriteBuffers(0LL);
  return 0;
}
