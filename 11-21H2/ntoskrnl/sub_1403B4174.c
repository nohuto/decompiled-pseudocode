/*
 * XREFs of sub_1403B4174 @ 0x1403B4174
 * Callers:
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 *     sub_140865090 @ 0x140865090 (sub_140865090.c)
 *     sub_140A52150 @ 0x140A52150 (sub_140A52150.c)
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 */

NTSTATUS __fastcall sub_1403B4174(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 32), a2);
}
