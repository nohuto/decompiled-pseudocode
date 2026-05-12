/*
 * XREFs of sub_1C0040378 @ 0x1C0040378
 * Callers:
 *     sub_1C0006C10 @ 0x1C0006C10 (sub_1C0006C10.c)
 * Callees:
 *     sub_1C00417B0 @ 0x1C00417B0 (sub_1C00417B0.c)
 *     sub_1C0043430 @ 0x1C0043430 (sub_1C0043430.c)
 */

__int64 __fastcall sub_1C0040378(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax

  a2->IoStatus.Information = 0LL;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122436 )
  {
    v4 = sub_1C00417B0();
    goto LABEL_6;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122440 )
  {
    v4 = sub_1C0043430();
LABEL_6:
    v3 = v4;
    goto LABEL_7;
  }
  v3 = -1073741808;
LABEL_7:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
