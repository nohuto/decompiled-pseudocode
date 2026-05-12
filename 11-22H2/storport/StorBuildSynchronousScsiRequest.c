/*
 * XREFs of StorBuildSynchronousScsiRequest @ 0x1C001EED0
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C005F444 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrb @ 0x1C0060D08 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C00618BC (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x1C0062324 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00625DC (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00628FC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     StorProbeAndLockPages @ 0x1C001EFE8 (StorProbeAndLockPages.c)
 */

PIRP __fastcall StorBuildSynchronousScsiRequest(__int64 a1, unsigned __int64 a2, __int64 a3, _IO_STATUS_BLOCK *a4)
{
  PIRP result; // rax
  IRP *v7; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v9; // ecx
  void *v10; // r10
  ULONG v11; // edx
  unsigned int v12; // ebp
  PMDL Mdl; // rax
  __int64 v14; // rdx

  result = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  v7 = result;
  if ( result )
  {
    CurrentStackLocation = result->Tail.Overlay.CurrentStackLocation;
    result->Tail.Overlay.Thread = KeGetCurrentThread();
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = *(void **)(a2 + 64);
      v11 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 12);
      v10 = *(void **)(a2 + 24);
      v11 = *(_DWORD *)(a2 + 16);
    }
    if ( (v9 & 0xC0) == 0xC0 )
    {
      v12 = 2;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = ((v9 & 0x80u) != 0) - 1;
    }
    if ( !v11 )
      goto LABEL_10;
    Mdl = IoAllocateMdl(v10, v11, 0, 0, 0LL);
    v7->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( (int)StorProbeAndLockPages(Mdl, v14, v12) >= 0 )
      {
LABEL_10:
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
        v7->UserEvent = 0LL;
        v7->UserIosb = a4;
        return v7;
      }
      IoFreeMdl(v7->MdlAddress);
      v7->MdlAddress = 0LL;
    }
    IoFreeIrp(v7);
    return 0LL;
  }
  return result;
}
