/*
 * XREFs of IopPnPCompleteRequest @ 0x14036F398
 * Callers:
 *     IopPnPDispatch @ 0x1407EB2F0 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
