/*
 * XREFs of RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00628FC
 * Callers:
 *     RaUnitProtocolCommandIoctl @ 0x1C005E1A4 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0017514 (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001EED0 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001F014 (StorFreeSynchronousScsiRequest.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0068EDC (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidUnitSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r14
  __int64 v6; // r13
  unsigned int Options; // r12d
  unsigned __int64 v8; // rbp
  unsigned int Length; // eax
  __int64 v12; // rcx
  __int64 Srb; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  int v16; // edi
  bool v17; // zf
  int v18; // edx
  __int64 v19; // rdi
  int Blink; // eax
  int v21; // eax
  IRP *v22; // rax
  IRP *v23; // r12
  unsigned __int64 v24; // rax
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v27; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = *(_QWORD *)(a1 + 24);
  v27 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v12 = *(_QWORD *)(a1 + 8);
  if ( Options <= Length )
    Options = Length;
  Srb = RaidAllocateSrb(v12, 9u, *(_BYTE *)(v6 + 442), 0);
  v14 = 0LL;
  v15 = Srb;
  if ( !Srb )
    goto LABEL_4;
  v17 = DisableIEEE1667 == 0;
  MasterIrp->Flags = 255;
  if ( !v17
    && LODWORD(MasterIrp->MdlAddress) == 3
    && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
    && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
  {
    v16 = -1073741637;
  }
  else
  {
    v18 = (LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0) | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v18 = LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0;
    if ( !a3 )
    {
      v18 |= 0x102u;
      if ( *(_BYTE *)(Srb + 2) == 40 )
        *(_WORD *)(Srb + 38) = 32;
      else
        *(_BYTE *)(Srb + 9) = 32;
    }
    if ( *(_BYTE *)(v6 + 442) == 1 )
    {
      v19 = *(unsigned int *)(Srb + 52);
      *(_DWORD *)(Srb + 32) = -1;
      v8 = Srb;
      *(_DWORD *)(Srb + 20) = 9;
      *(_DWORD *)(Srb + 24) = v18;
      *(_QWORD *)(Srb + 64) = MasterIrp;
      *(_DWORD *)(Srb + 60) = Options;
      *(_WORD *)(Srb + 36) = IoGetIoPriorityHint(a2);
      *(_QWORD *)(v15 + 80) = a2;
      Blink = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 1320);
      *(_DWORD *)(v15 + 40) = Blink;
      *(_BYTE *)(v19 + v15 + 8) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v19 + v15 + 9) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v19 + v15 + 10) = *(_BYTE *)(a1 + 98);
    }
    else
    {
      *(_BYTE *)(Srb + 2) = 9;
      *(_WORD *)Srb = 88;
      *(_DWORD *)(Srb + 12) = v18;
      *(_BYTE *)(Srb + 8) = -1;
      *(_QWORD *)(Srb + 24) = MasterIrp;
      *(_DWORD *)(Srb + 16) = Options;
      *(_QWORD *)(Srb + 48) = a2;
      v21 = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !v21 )
        v21 = *(_DWORD *)(a1 + 1320);
      *(_DWORD *)(v15 + 20) = v21;
      *(_BYTE *)(v15 + 5) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v15 + 6) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v15 + 7) = *(_BYTE *)(a1 + 98);
    }
    v22 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v15, v14, &v27);
    v14 = 0LL;
    v23 = v22;
    if ( !v22 )
    {
LABEL_4:
      v16 = -1073741801;
      goto LABEL_37;
    }
    if ( *(_BYTE *)(v6 + 442) == 1 )
    {
      v8 = v15;
      *(_QWORD *)(v15 + 80) = a2;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = a2;
    }
    v16 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v22);
    if ( v16 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
      {
        v16 = -1073741637;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 442) == 1 )
          v24 = *(unsigned int *)(v8 + 60);
        else
          v24 = *(unsigned int *)(v15 + 16);
        a2->IoStatus.Information = v24;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    StorFreeSynchronousScsiRequest(v23);
    v14 = 0LL;
  }
LABEL_37:
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v14) = a3;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v14);
  }
  if ( v15 )
  {
    if ( *(_BYTE *)(v6 + 442) == 1 )
    {
      if ( !v8 )
        v8 = v15;
      *(_QWORD *)(v8 + 80) = 0LL;
      *(_QWORD *)(v8 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_QWORD *)(v15 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v15, 0x72536152u);
  }
  return (unsigned int)v16;
}
