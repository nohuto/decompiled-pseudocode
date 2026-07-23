/*
 * XREFs of HalpIoDelay @ 0x14041AA30
 * Callers:
 *     HalMakeBeep @ 0x140506B50 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x140506C28 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x140515D00 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140515D40 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1405281C0 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x1405282C0 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x1405282EC (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140A962C0 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
