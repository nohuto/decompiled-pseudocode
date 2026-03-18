/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x14055F588
 * Callers:
 *     VfPacketCreateAndLock @ 0x140ADD03C (VfPacketCreateAndLock.c)
 *     VfPacketFree @ 0x140ADD134 (VfPacketFree.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
