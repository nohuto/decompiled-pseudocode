/*
 * XREFs of RawDeleteVcb @ 0x1407918D0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1403220D8 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1405A712C (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 184));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
