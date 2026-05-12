/*
 * XREFs of sub_1C003A38C @ 0x1C003A38C
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C005C994 @ 0x1C005C994 (sub_1C005C994.c)
 *     sub_1C0061CC4 @ 0x1C0061CC4 (sub_1C0061CC4.c)
 */

__int64 __fastcall sub_1C003A38C(__int64 a1, IRP *a2)
{
  unsigned int v4; // r8d
  struct _IRP *MasterIrp; // rcx
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v9; // [rsp+38h] [rbp+10h]

  HIBYTE(v9) = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    LOWORD(v9) = *(USHORT *)((char *)&MasterIrp->Size + 3);
    BYTE2(v9) = *((_BYTE *)&MasterIrp->Size + 5);
    v6 = sub_1C00081BC(a1, v9);
    if ( v6 )
    {
      sub_1C005C994(a1, v9, 2147745910LL, 4LL);
      ++*(_DWORD *)(*(_QWORD *)(v6 + 24) + 4640LL);
      v7 = sub_1C0061CC4(v6);
    }
    else
    {
      v7 = -1073741810;
    }
    v4 = v7;
  }
  else
  {
    v4 = -1073741811;
  }
  return sub_1C0003440(a2, 0, v4);
}
