/*
 * XREFs of sub_140A83200 @ 0x140A83200
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140A83264 @ 0x140A83264 (sub_140A83264.c)
 *     sub_140A83400 @ 0x140A83400 (sub_140A83400.c)
 */

__int64 __fastcall sub_140A83200(__int64 a1, IRP *a2)
{
  UCHAR MinorFunction; // dl
  NTSTATUS v4; // eax
  unsigned int Status; // ebx

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( MinorFunction )
  {
    if ( MinorFunction != 11 )
      goto LABEL_6;
    v4 = sub_140A83400(a1, a2);
  }
  else
  {
    v4 = sub_140A83264(a1, a2);
  }
  Status = v4;
  if ( v4 != -1073741637 )
  {
    a2->IoStatus.Status = v4;
    goto LABEL_8;
  }
LABEL_6:
  Status = a2->IoStatus.Status;
LABEL_8:
  IofCompleteRequest(a2, 0);
  return Status;
}
