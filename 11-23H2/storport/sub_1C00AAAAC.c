/*
 * XREFs of sub_1C00AAAAC @ 0x1C00AAAAC
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00722C8 @ 0x1C00722C8 (sub_1C00722C8.c)
 *     sub_1C00ABDB0 @ 0x1C00ABDB0 (sub_1C00ABDB0.c)
 */

__int64 __fastcall sub_1C00AAAAC(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // r8
  unsigned int v3; // ebx
  unsigned int Options; // edx
  int MdlAddress_high; // r9d
  unsigned int v7; // eax
  int MdlAddress; // edx
  char v9; // al

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  if ( !MasterIrp )
    goto LABEL_20;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 || *(_DWORD *)&MasterIrp->Type != 20 )
    goto LABEL_20;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  v7 = MdlAddress_high + 16;
  if ( (unsigned int)(MdlAddress_high + 16) < 0x14 )
    v7 = 20;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v7
    && Options >= v7
    && (MdlAddress = (int)MasterIrp->MdlAddress, (unsigned int)(MdlAddress - 1) <= 2)
    && !MdlAddress_high )
  {
    if ( dword_1C0093B14 )
    {
      v3 = -1073741637;
    }
    else
    {
      switch ( MdlAddress )
      {
        case 1:
          if ( (*(_BYTE *)(a1 + 451) & 0x10) == 0 )
            v3 = sub_1C00ABDB0(a1);
          break;
        case 2:
          v9 = *(_BYTE *)(a1 + 451);
          if ( (v9 & 0x10) != 0 )
            *(_BYTE *)(a1 + 451) = v9 & 0xEF;
          break;
        case 3:
          sub_1C00722C8(a1);
          break;
      }
    }
  }
  else
  {
LABEL_20:
    v3 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v3);
}
