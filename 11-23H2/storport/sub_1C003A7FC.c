/*
 * XREFs of sub_1C003A7FC @ 0x1C003A7FC
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003DB80 @ 0x1C003DB80 (sub_1C003DB80.c)
 */

__int64 __fastcall sub_1C003A7FC(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdx
  int v4; // edx
  int v5; // eax
  unsigned int v6; // r8d
  unsigned __int64 Length; // [rsp+38h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length >= 8 && *(_DWORD *)&MasterIrp->Type == 49 )
  {
    v4 = *(_DWORD *)(&MasterIrp->Size + 1);
    v5 = 0;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        a2->IoStatus.Information = 0LL;
        v5 = -1073741808;
      }
    }
    else
    {
      v5 = sub_1C003DB80(a1, a2, &Length);
      a2->IoStatus.Information = Length;
    }
    v6 = v5;
  }
  else
  {
    v6 = -1073741808;
    a2->IoStatus.Information = 0LL;
  }
  return sub_1C0003440(a2, 0, v6);
}
