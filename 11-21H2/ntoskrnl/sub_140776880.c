/*
 * XREFs of sub_140776880 @ 0x140776880
 * Callers:
 *     sub_1406E5854 @ 0x1406E5854 (sub_1406E5854.c)
 *     sub_1407735A0 @ 0x1407735A0 (sub_1407735A0.c)
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

void __fastcall sub_140776880(IRP *a1, int a2, unsigned int a3, _OWORD *a4)
{
  ULONG_PTR v4; // rax
  _OWORD *UserBuffer; // rax

  v4 = 0LL;
  if ( a2 >= 0 )
  {
    if ( a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063 )
      UserBuffer = a1->UserBuffer;
    else
      UserBuffer = &a1->AssociatedIrp.MasterIrp->Type;
    *UserBuffer = *a4;
    v4 = a3;
  }
  a1->IoStatus.Information = v4;
  a1->IoStatus.Status = a2;
  IofCompleteRequest(a1, 0);
}
