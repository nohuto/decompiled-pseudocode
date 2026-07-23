/*
 * XREFs of sub_14092E8B0 @ 0x14092E8B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

void __fastcall sub_14092E8B0(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
