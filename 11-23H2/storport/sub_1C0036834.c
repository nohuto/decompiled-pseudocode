/*
 * XREFs of sub_1C0036834 @ 0x1C0036834
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003E284 @ 0x1C003E284 (sub_1C003E284.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C00AD11C @ 0x1C00AD11C (sub_1C00AD11C.c)
 */

__int64 __fastcall sub_1C0036834(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rbx
  bool v4; // zf
  int v5; // ebp
  unsigned __int16 v6; // r9
  __int64 IrpCount; // rdx
  unsigned __int16 MdlAddress; // ax
  signed int v9; // edi
  int v10; // eax
  int Flags; // r8d
  int MdlAddress_low; // edx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  a2->IoStatus.Information = 0LL;
  v4 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  v5 = a1;
  v6 = 0;
  v15 = 0;
  if ( v4 || !*(_QWORD *)(a1 + 5968) )
  {
    v14 = -1073741637;
  }
  else
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20 )
    {
      if ( MasterIrp )
      {
        if ( MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
        {
          IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
          if ( (_DWORD)IrpCount )
          {
            if ( (int)IrpCount < 5 )
            {
              if ( (MasterIrp->Flags & 1) != 0 )
              {
                MdlAddress = -1;
                goto LABEL_12;
              }
              MdlAddress = (unsigned __int16)MasterIrp->MdlAddress;
              if ( MdlAddress )
              {
LABEL_12:
                v9 = sub_1C00AD11C(a1, IrpCount, MdlAddress, &v15);
                v6 = v15;
                v14 = v9;
                if ( v9 >= 0 )
                  goto LABEL_17;
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    v14 = -1073741811;
  }
LABEL_16:
  sub_1C003EC88(v6, &v14);
  v9 = v14;
  if ( !MasterIrp )
  {
    MdlAddress_low = -1;
    v10 = -1;
    Flags = -1;
    goto LABEL_19;
  }
LABEL_17:
  v10 = MasterIrp->AssociatedIrp.IrpCount;
  Flags = MasterIrp->Flags;
  MdlAddress_low = LOWORD(MasterIrp->MdlAddress);
LABEL_19:
  sub_1C003E284(v5, MdlAddress_low, Flags, v10, v6, v9);
  return sub_1C0003440(a2, 0, v9);
}
