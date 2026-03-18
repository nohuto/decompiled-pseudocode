/*
 * XREFs of IopSystemControlDispatch @ 0x140963EE0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9980 (IofCompleteRequest.c)
 */

__int64 __fastcall IopSystemControlDispatch(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  Status = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
