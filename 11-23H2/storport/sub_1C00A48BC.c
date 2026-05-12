/*
 * XREFs of sub_1C00A48BC @ 0x1C00A48BC
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00A48BC(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // rbx
  unsigned int Length; // ecx
  int v7; // edx
  unsigned int v8; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v8 = -1073741637;
      return sub_1C0003440(a2, 0, v8);
    }
  }
  else
  {
    if ( Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v8 = -1073741789;
      return sub_1C0003440(a2, 0, v8);
    }
    if ( Length >= 0x14 )
    {
      memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      LOBYTE(MasterIrp->MdlAddress) = (*(_DWORD *)(a1 + 1872) & 2) != 0;
      BYTE1(MasterIrp->MdlAddress) = (*(_DWORD *)(a1 + 1872) & 4) != 0;
      if ( sub_1C0008B84(a1) )
      {
        BYTE2(MasterIrp->MdlAddress) = 1;
        BYTE3(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 449) & 4) != 0;
        MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 20LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
      }
      else
      {
        WORD1(MasterIrp->MdlAddress) = 0;
        MasterIrp->Flags = 0;
      }
      BYTE4(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 449) & 2) != 0;
      a2->IoStatus.Information = *(unsigned int *)(&MasterIrp->Size + 1);
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      a2->IoStatus.Information = 8LL;
    }
  }
  v8 = 0;
  return sub_1C0003440(a2, 0, v8);
}
