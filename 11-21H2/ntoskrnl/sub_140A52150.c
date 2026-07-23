/*
 * XREFs of sub_140A52150 @ 0x140A52150
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_14039693C @ 0x14039693C (sub_14039693C.c)
 *     sub_1403B4174 @ 0x1403B4174 (sub_1403B4174.c)
 */

__int64 __fastcall sub_140A52150(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Status; // ebx
  unsigned __int8 v6; // dl
  int v7; // eax
  unsigned int v8; // esi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  v6 = CurrentStackLocation->MinorFunction - 2;
  if ( **(_DWORD **)(a1 + 64) != 193 )
  {
    if ( v6 <= 1u )
    {
      Status = 0;
      a2->IoStatus.Status = 0;
    }
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( v6 > 1u )
    return (unsigned int)sub_1403B4174(a1, a2);
  if ( CurrentStackLocation->Parameters.Create.Options || (v7 = sub_14039693C((__int64)a2), v8 = v7, v7 >= 0) )
  {
    a2->IoStatus.Status = 0;
    return (unsigned int)sub_1403B4174(a1, a2);
  }
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return v8;
}
