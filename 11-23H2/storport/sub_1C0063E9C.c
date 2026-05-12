/*
 * XREFs of sub_1C0063E9C @ 0x1C0063E9C
 * Callers:
 *     sub_1C00AB210 @ 0x1C00AB210 (sub_1C00AB210.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C0063E9C(__int64 a1, IRP *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  struct _IRP *MasterIrp; // rsi
  size_t Length; // rbp
  unsigned int v9; // r8d

  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( a3 )
  {
    *a3 = 0;
    if ( a2->RequestorMode )
    {
      v9 = -1073741790;
    }
    else if ( (unsigned int)Length >= 8 )
    {
      memset_0(MasterIrp, 0, Length);
      *(_DWORD *)&MasterIrp->Type = 40;
      *(_DWORD *)(&MasterIrp->Size + 1) = 40;
      if ( (unsigned int)Length >= 0x28 )
      {
        if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
        {
          v9 = 0;
          MasterIrp->MdlAddress = *(PMDL *)(a1 + 8);
          v3 = 40LL;
          *a3 = 1;
          *(_QWORD *)&MasterIrp->Flags = sub_1C0063E80;
          MasterIrp->AssociatedIrp.MasterIrp = (struct _IRP *)&sub_1C0063F90;
        }
        else
        {
          v9 = -1073741637;
        }
      }
      else
      {
        v9 = 0;
        v3 = 8LL;
      }
    }
    else
    {
      v9 = -1073741789;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  a2->IoStatus.Information = v3;
  return sub_1C0003440(a2, 0, v9);
}
