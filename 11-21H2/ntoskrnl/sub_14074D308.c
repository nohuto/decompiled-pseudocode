/*
 * XREFs of sub_14074D308 @ 0x14074D308
 * Callers:
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 *     sub_1403770A8 @ 0x1403770A8 (sub_1403770A8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 */

void __fastcall sub_14074D308(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 184));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
