/*
 * XREFs of sub_1C0036948 @ 0x1C0036948
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003E3D4 @ 0x1C003E3D4 (sub_1C003E3D4.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C00AD268 @ 0x1C00AD268 (sub_1C00AD268.c)
 */

__int64 __fastcall sub_1C0036948(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rbx
  bool v4; // zf
  int v5; // ebp
  int v6; // r9d
  __int64 MdlAddress_low; // rdx
  __int64 Flags; // r8
  signed int v9; // edi
  int v10; // r8d
  int v11; // edx
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  a2->IoStatus.Information = 0LL;
  v4 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v5 = a1;
  LOWORD(v6) = 0;
  v14 = 0;
  if ( v4 || !*(_QWORD *)(a1 + 5968) )
  {
    v13 = -1073741637;
  }
  else if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x18
         && MasterIrp
         && MasterIrp->Type == 1
         && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x18u
         && (MdlAddress_low = LOWORD(MasterIrp->MdlAddress), (_WORD)MdlAddress_low)
         && (Flags = MasterIrp->Flags, (_DWORD)Flags)
         && (int)Flags < 4 )
  {
    v9 = sub_1C00AD268(a1, MdlAddress_low, Flags, &v14);
    v6 = v14;
    v13 = v9;
    if ( v9 >= 0 )
      goto LABEL_15;
  }
  else
  {
    v13 = -1073741811;
  }
  sub_1C003EC88((unsigned __int16)v6, &v13);
  v9 = v13;
  if ( !MasterIrp )
  {
    v11 = -1;
    v10 = -1;
    goto LABEL_17;
  }
LABEL_15:
  v10 = MasterIrp->Flags;
  v11 = LOWORD(MasterIrp->MdlAddress);
LABEL_17:
  sub_1C003E3D4(v5, v11, v10, v6, v9);
  return sub_1C0003440(a2, 0, v9);
}
