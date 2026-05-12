/*
 * XREFs of RaidAdapterMFNDNameSpacePageMapControl @ 0x1C0036438
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     StorLogMFNDNSPageMapControl @ 0x1C003DE04 (StorLogMFNDNSPageMapControl.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorMFNDNSPageMapControl @ 0x1C00AC01C (StorMFNDNSPageMapControl.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpacePageMapControl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
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
    v9 = StorMFNDNSPageMapControl(a1, MdlAddress_low, Flags, &v14);
    v6 = v14;
    v13 = v9;
    if ( v9 >= 0 )
      goto LABEL_15;
  }
  else
  {
    v13 = -1073741811;
  }
  StorMapMFNDErrorToNtStatus((unsigned __int16)v6, &v13);
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
  StorLogMFNDNSPageMapControl(v5, v11, v10, v6, v9);
  return RaidCompleteRequestEx(a2, 0, v9);
}
