/*
 * XREFs of sub_1409991F0 @ 0x1409991F0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall sub_1409991F0(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  return KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
}
