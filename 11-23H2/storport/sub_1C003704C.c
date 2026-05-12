/*
 * XREFs of sub_1C003704C @ 0x1C003704C
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C004C4E8 @ 0x1C004C4E8 (sub_1C004C4E8.c)
 */

__int64 __fastcall sub_1C003704C(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // rdi
  signed int v7; // eax
  unsigned int MdlAddress; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v7 = -1073741820;
LABEL_14:
    v9 = 0LL;
    goto LABEL_15;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 1 || *(_DWORD *)(&MasterIrp->Size + 1) < 0x18u )
  {
    v7 = -1073741811;
    goto LABEL_14;
  }
  MdlAddress = (unsigned int)MasterIrp->MdlAddress;
  v9 = 0LL;
  if ( MdlAddress <= 1 )
  {
    v10 = *(_QWORD *)(a1 + 4896);
    if ( v10 && *(_QWORD *)(v10 + 32) )
    {
      v12 = *(_QWORD *)&MasterIrp->Flags;
      LOBYTE(a3) = MdlAddress == 0;
      v7 = sub_1C004C4E8(a1, &v12, a3, 0LL);
      if ( v7 >= 0 )
      {
        v9 = 24LL;
        *(_QWORD *)&MasterIrp->Flags = v12;
      }
    }
    else
    {
      v7 = -1073741637;
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_15:
  a2->IoStatus.Information = v9;
  return sub_1C0003440(a2, 0, v7);
}
