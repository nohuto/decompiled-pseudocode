/*
 * XREFs of sub_1C00A353C @ 0x1C00A353C
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0020598 @ 0x1C0020598 (sub_1C0020598.c)
 *     sub_1C0020728 @ 0x1C0020728 (sub_1C0020728.c)
 *     sub_1C00207F8 @ 0x1C00207F8 (sub_1C00207F8.c)
 *     sub_1C002095C @ 0x1C002095C (sub_1C002095C.c)
 */

__int64 __fastcall sub_1C00A353C(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG Length; // r9d
  ULONG v5; // r9d
  ULONG v6; // r9d
  unsigned int v7; // eax
  unsigned int Status; // r8d
  ULONG_PTR v10; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v10 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v5 = Length - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          Status = a2->IoStatus.Status;
          goto LABEL_7;
        }
        v7 = sub_1C0020728(a1, (__int64 *)&v10);
      }
      else
      {
        v7 = sub_1C00207F8(a1, (__int64 *)&v10);
      }
    }
    else
    {
      v7 = sub_1C002095C(a1, (__int64 *)&v10);
    }
  }
  else
  {
    v7 = sub_1C0020598(a1, (__int64 *)&v10);
  }
  Status = v7;
LABEL_7:
  a2->IoStatus.Information = v10;
  return sub_1C0003440(a2, 0, Status);
}
