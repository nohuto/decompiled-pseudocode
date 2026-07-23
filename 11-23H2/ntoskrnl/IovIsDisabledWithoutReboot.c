/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x14055FC48
 * Callers:
 *     VfPacketCreateAndLock @ 0x140ADD02C (VfPacketCreateAndLock.c)
 *     VfPacketFree @ 0x140ADD124 (VfPacketFree.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
