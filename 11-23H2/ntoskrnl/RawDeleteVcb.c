/*
 * XREFs of RawDeleteVcb @ 0x1407916E0
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140321E48 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1405A6BBC (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 184));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
