/*
 * XREFs of sub_1C00A2D68 @ 0x1C00A2D68
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C00100FC @ 0x1C00100FC (sub_1C00100FC.c)
 *     sub_1C001EB88 @ 0x1C001EB88 (sub_1C001EB88.c)
 *     sub_1C001F1CC @ 0x1C001F1CC (sub_1C001F1CC.c)
 *     sub_1C0078E58 @ 0x1C0078E58 (sub_1C0078E58.c)
 *     sub_1C00A2F90 @ 0x1C00A2F90 (sub_1C00A2F90.c)
 */

__int64 __fastcall sub_1C00A2D68(__int64 a1, IRP *a2, char a3)
{
  IRP *v6; // rdx
  bool v7; // di
  int v8; // eax
  struct _IRP *MasterIrp; // rdx
  char v10; // al
  _BYTE *v11; // rdx
  unsigned __int8 v12; // di
  char v13; // al
  __int64 v14; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 v16; // r11
  int v17; // r8d
  int v18; // eax
  int v19; // r10d
  char *v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // [rsp+30h] [rbp-18h]
  unsigned int v24; // [rsp+68h] [rbp+20h]

  HIBYTE(v24) = 0;
  v7 = sub_1C001F1CC((__int64)a2);
  if ( v7 )
    v8 = sub_1C0078E58(v6);
  else
    v8 = sub_1C001EB88(v6);
  if ( v8 < 0 )
    goto LABEL_23;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( v7 )
  {
    v21 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
    if ( *(_WORD *)v21 != 1 || *((_DWORD *)v21 + 1) < 4u )
      goto LABEL_23;
    LOWORD(v24) = *((_WORD *)v21 + 4);
    v10 = v21[10];
  }
  else
  {
    LOWORD(v24) = *(USHORT *)((char *)&MasterIrp->Size + 1);
    v10 = *((_BYTE *)&MasterIrp->Size + 3);
  }
  BYTE2(v24) = v10;
  if ( sub_1C001F1CC((__int64)a2) )
  {
    v13 = v11[57];
    v12 = v11[56];
  }
  else
  {
    v12 = v11[36];
    v13 = v11[37];
  }
  if ( byte_1C0093AE4 && (v12 == 0xA2 || v12 == 0xB5) && v13 == -18 )
  {
    v22 = -1073741637;
    return sub_1C0003440(a2, 0, v22);
  }
  v14 = sub_1C00081BC(a1, v24);
  if ( !v14 )
  {
LABEL_23:
    v22 = -1073741810;
    return sub_1C0003440(a2, 0, v22);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction || (*(_BYTE *)(v14 + 448) & 1) == 0 )
  {
    CurrentStackLocation->Control |= 1u;
    sub_1C00100FC(v12);
    LOBYTE(v17) = a3;
    sub_1C00A2F90(*(_QWORD *)(v16 + 8), (int)a2, v17, v19, v18, v23, v16);
    return 259LL;
  }
  v22 = -1073741808;
  return sub_1C0003440(a2, 0, v22);
}
