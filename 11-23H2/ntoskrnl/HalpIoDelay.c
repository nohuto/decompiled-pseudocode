/*
 * XREFs of HalpIoDelay @ 0x14041A6A0
 * Callers:
 *     HalMakeBeep @ 0x140506600 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1405066D8 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x1405157B0 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x1405157F0 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x140527C70 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x140527D70 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x140527D9C (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140A96450 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
