/*
 * XREFs of sub_1C00377A4 @ 0x1C00377A4
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003EA60 @ 0x1C003EA60 (sub_1C003EA60.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C00AEDD0 @ 0x1C00AEDD0 (sub_1C00AEDD0.c)
 */

__int64 __fastcall sub_1C00377A4(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdi
  int v3; // r9d
  int MdlAddress_high; // r14d
  __int64 v7; // r8
  unsigned int Options; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  ULONG *p_Flags; // rdi
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  int v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  a2->IoStatus.Information = 0LL;
  MdlAddress_high = 0;
  v16 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 || (v7 = *(_QWORD *)(a1 + 5968)) == 0 )
  {
    v10 = -1073741637;
    goto LABEL_22;
  }
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14
    || !MasterIrp
    || MasterIrp->Type != 1
    || (v9 = *(_DWORD *)(&MasterIrp->Size + 1), v9 < 0x14)
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress), MdlAddress_high != 1) )
  {
    v10 = -1073741811;
LABEL_22:
    v14 = -1;
    goto LABEL_23;
  }
  if ( Options < 0x20 || v9 < 0x20 )
  {
    v10 = -1073741789;
    goto LABEL_22;
  }
  p_Flags = &MasterIrp->Flags;
  if ( *(_WORD *)p_Flags == 1
    && p_Flags[1] >= 0x10
    && (v12 = p_Flags[2], (_DWORD)v12)
    && (unsigned int)v12 <= *(unsigned __int16 *)(v7 + 8) )
  {
    v13 = sub_1C00AEDD0(a1, v12, &v16);
    v3 = v16;
    v10 = v13;
    v17 = v13;
    if ( v13 < 0 )
    {
      sub_1C003EC88((unsigned __int16)v16, &v17);
      v10 = v17;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( !p_Flags )
    goto LABEL_22;
  v14 = p_Flags[2];
LABEL_23:
  sub_1C003EA60(a1, MdlAddress_high, v14, v3, v10);
  return sub_1C0003440(a2, 0, v10);
}
