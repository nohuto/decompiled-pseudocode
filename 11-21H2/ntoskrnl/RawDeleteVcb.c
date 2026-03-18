/*
 * XREFs of RawDeleteVcb @ 0x14074D308
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402D2BD8 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1403770A8 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 184));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
