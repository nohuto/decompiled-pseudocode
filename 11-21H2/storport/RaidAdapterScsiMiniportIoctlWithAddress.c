/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0011720 (RaUnitScsiMiniportIoctl.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     RaidXrbDeallocateResources @ 0x1C000BDD4 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidBuildMdlForXrb @ 0x1C0011554 (RaidBuildMdlForXrb.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C00115B4 (RaidGetSrbIoctlFromIrp.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C003B960 (RaidUnitPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 ContiguousIoResources; // r14
  unsigned int *v9; // r13
  unsigned int *Srb; // rsi
  __int64 v11; // r15
  int SrbIoctlFromIrp; // eax
  __int64 v13; // r8
  signed int v14; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // al
  char v21; // dl
  char v22; // cl
  __int64 Unit; // rax
  __int64 v24; // rdi
  __int16 IoPriorityHint; // ax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // eax
  char v32; // al
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v37; // [rsp+30h] [rbp-68h]
  unsigned int v38; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v40; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+48h] [rbp-50h] BYREF
  __int64 v42; // [rsp+50h] [rbp-48h]

  v41 = 0LL;
  v38 = 0;
  v39 = 0;
  ContiguousIoResources = 0LL;
  v42 = 0LL;
  v9 = 0LL;
  HIBYTE(v37) = 0;
  Srb = 0LL;
  v40 = 0LL;
  v11 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((_DWORD)a2, (unsigned int)&v41, (unsigned int)&v38, (unsigned int)&v39, 2);
  v14 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
LABEL_3:
    v15 = 0LL;
    goto LABEL_4;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_BYTE *)(a1 + 442);
  v42 = a1 + 344;
  Srb = (unsigned int *)RaidAllocateSrb(v16, 2u, v17, 0);
  if ( !Srb )
  {
LABEL_8:
    v14 = -1073741801;
    goto LABEL_3;
  }
  ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v18, a1);
  if ( !ContiguousIoResources )
  {
    if ( !*(_QWORD *)(a1 + 120) || _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) )
      goto LABEL_8;
    ContiguousIoResources = *(_QWORD *)(a1 + 120);
  }
  v40 = (_QWORD *)(ContiguousIoResources + 48);
  RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
  v14 = RaidBuildMdlForXrb(ContiguousIoResources + 48, v41, v38);
  if ( v14 < 0 )
    goto LABEL_3;
  v20 = a5;
  v21 = a3;
  v22 = a4;
  BYTE2(v37) = a5;
  LOBYTE(v37) = a3;
  BYTE1(v37) = a4;
  if ( a6 == 1 )
  {
    Unit = RaidAdapterFindUnit(a1, v37);
    v22 = a4;
    v11 = Unit;
    v21 = a3;
    *(_QWORD *)(ContiguousIoResources + 272) = Unit;
    v20 = a5;
  }
  if ( *(_BYTE *)(v42 + 98) == 1 )
  {
    v9 = Srb;
    v24 = Srb[13];
    *((_QWORD *)Srb + 12) = v40;
    *((_QWORD *)Srb + 10) = a2;
    Srb[5] = 2;
    Srb[6] = 192;
    IoPriorityHint = IoGetIoPriorityHint(a2);
    v26 = v41;
    *((_WORD *)Srb + 18) = IoPriorityHint;
    Srb[10] = *(_DWORD *)(v26 + 12);
    Srb[15] = v38;
    *((_QWORD *)Srb + 8) = v26;
    *((_BYTE *)Srb + v24 + 8) = a3;
    *((_BYTE *)Srb + v24 + 9) = a4;
    *((_BYTE *)Srb + v24 + 10) = a5;
    v27 = v40;
    *(_QWORD *)(ContiguousIoResources + 216) = Srb;
    *(_QWORD *)(ContiguousIoResources + 224) = *((_QWORD *)Srb + 10);
    v28 = *((_QWORD *)Srb + 8);
  }
  else
  {
    v27 = v40;
    *((_BYTE *)Srb + 7) = v20;
    v29 = v41;
    *((_BYTE *)Srb + 6) = v22;
    v30 = v38;
    *((_QWORD *)Srb + 3) = v29;
    *((_QWORD *)Srb + 6) = v27;
    *(_WORD *)Srb = 88;
    *((_BYTE *)Srb + 2) = 2;
    *((_BYTE *)Srb + 5) = v21;
    Srb[3] = 192;
    Srb[4] = v30;
    Srb[5] = *(_DWORD *)(v29 + 12);
    *(_QWORD *)(ContiguousIoResources + 216) = Srb;
    *(_QWORD *)(ContiguousIoResources + 224) = a2;
    v28 = *((_QWORD *)Srb + 3);
  }
  *(_QWORD *)(ContiguousIoResources + 232) = v28;
  RaSrbSetMiniportContext(a1, Srb, ContiguousIoResources + 1104);
  KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 712), NotificationEvent, 0);
  *(_QWORD *)(ContiguousIoResources + 704) = RaidXrbSignalCompletion;
  if ( *(_QWORD *)(a1 + 4832) )
    RaidAdapterPoFxActivateComponent(a1);
  if ( *(_BYTE *)(a1 + 4242) )
    v31 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v27);
  else
    v31 = RaidAdapterExecuteXrb(a1, v27);
  v14 = v31;
  if ( v31 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(ContiguousIoResources + 712), Executive, 0, 0, 0LL);
    v14 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
  }
  v32 = *(_BYTE *)(ContiguousIoResources + 65);
  if ( (v32 & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(ContiguousIoResources + 796));
    *(_BYTE *)(ContiguousIoResources + 65) &= ~1u;
    v32 = *(_BYTE *)(ContiguousIoResources + 65);
  }
  if ( (v32 & 2) != 0 )
  {
    if ( a6 == 1
      || ((v33 = RaidAdapterFindUnit(a1, v37), (v11 = v33) == 0)
        ? (v34 = -1073741823)
        : (LOBYTE(v13) = 1, v34 = RaUnitAcquireRemoveLock(v33, (__int64)a2, v13)),
          !v34) )
    {
      if ( v11 )
      {
        RaidUnitPoFxIdleComponentFromMiniport(v11, *(unsigned int *)(ContiguousIoResources + 796));
        *(_BYTE *)(ContiguousIoResources + 65) &= ~2u;
        if ( a6 != 1 )
          RaUnitReleaseRemoveLock(v11);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 4832) )
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  if ( v14 < 0 )
    goto LABEL_3;
  if ( *((_BYTE *)Srb + 2) == 40 )
    v35 = v9[15];
  else
    v35 = Srb[4];
  if ( v39 < v35 )
    v35 = v39;
  v15 = v35;
LABEL_4:
  a2->IoStatus.Information = v15;
  if ( ContiguousIoResources )
  {
    RaidXrbDeallocateResources((__int64)v40, 0, v13);
    if ( ContiguousIoResources == *(_QWORD *)(a1 + 120) )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
    else
      StorFreeContiguousIoResources(a1, ContiguousIoResources);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v42 + 98) == 1 )
    {
      if ( !v9 )
        v9 = Srb;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2, 0, v14);
}
