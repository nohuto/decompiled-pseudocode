/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0008434 (RaUnitScsiMiniportIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidBuildMdlForXrb @ 0x1C0008358 (RaidBuildMdlForXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C00084D0 (RaidGetSrbIoctlFromIrp.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C001A1F8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 ContiguousIoResources; // r12
  _QWORD *v9; // r13
  __int64 v10; // r15
  _QWORD *Srb; // rsi
  __int64 v12; // r14
  int SrbIoctlFromIrp; // eax
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
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v39; // [rsp+30h] [rbp-58h]
  unsigned int v40; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v41; // [rsp+38h] [rbp-50h] BYREF
  __int64 v42; // [rsp+40h] [rbp-48h] BYREF
  __int64 v43; // [rsp+48h] [rbp-40h]

  v42 = 0LL;
  v40 = 0;
  v41 = 0;
  v43 = 0LL;
  HIBYTE(v39) = 0;
  ContiguousIoResources = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Srb = 0LL;
  v12 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((_DWORD)a2, (unsigned int)&v42, (unsigned int)&v40, (unsigned int)&v41, 2);
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
  v43 = a1 + 344;
  Srb = (_QWORD *)RaidAllocateSrb(v16, 2u, v17, 0);
  if ( !Srb )
  {
LABEL_8:
    v14 = -1073741801;
    goto LABEL_3;
  }
  ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v18, a1);
  if ( !ContiguousIoResources )
  {
    if ( !*(_QWORD *)(a1 + 128) || _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 1u) )
      goto LABEL_8;
    ContiguousIoResources = *(_QWORD *)(a1 + 128);
  }
  v12 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
  v14 = RaidBuildMdlForXrb(ContiguousIoResources + 48, v42, v40);
  if ( v14 < 0 )
    goto LABEL_3;
  v20 = a5;
  v21 = a3;
  v22 = a4;
  BYTE2(v39) = a5;
  LOBYTE(v39) = a3;
  BYTE1(v39) = a4;
  if ( a6 == 1 )
  {
    Unit = RaidAdapterFindUnit(a1, v39);
    v22 = a4;
    v10 = Unit;
    v21 = a3;
    *(_QWORD *)(ContiguousIoResources + 272) = Unit;
    v20 = a5;
  }
  if ( *(_BYTE *)(v43 + 98) == 1 )
  {
    v9 = Srb;
    v24 = *((unsigned int *)Srb + 13);
    Srb[12] = v12;
    Srb[10] = a2;
    *((_DWORD *)Srb + 5) = 2;
    *((_DWORD *)Srb + 6) = 192;
    IoPriorityHint = IoGetIoPriorityHint(a2);
    v26 = v42;
    *((_WORD *)Srb + 18) = IoPriorityHint;
    *((_DWORD *)Srb + 10) = *(_DWORD *)(v26 + 12);
    *((_DWORD *)Srb + 15) = v40;
    Srb[8] = v26;
    *((_BYTE *)Srb + v24 + 8) = a3;
    *((_BYTE *)Srb + v24 + 9) = a4;
    *((_BYTE *)Srb + v24 + 10) = a5;
    *(_QWORD *)(ContiguousIoResources + 216) = Srb;
    *(_QWORD *)(ContiguousIoResources + 224) = Srb[10];
    v27 = Srb[8];
  }
  else
  {
    *((_BYTE *)Srb + 7) = v20;
    v28 = v42;
    Srb[3] = v42;
    *((_BYTE *)Srb + 6) = v22;
    v29 = v40;
    Srb[6] = v12;
    *(_WORD *)Srb = 88;
    *((_BYTE *)Srb + 2) = 2;
    *((_BYTE *)Srb + 5) = v21;
    *((_DWORD *)Srb + 3) = 192;
    *((_DWORD *)Srb + 4) = v29;
    *((_DWORD *)Srb + 5) = *(_DWORD *)(v28 + 12);
    *(_QWORD *)(ContiguousIoResources + 224) = a2;
    *(_QWORD *)(ContiguousIoResources + 216) = Srb;
    v27 = Srb[3];
  }
  *(_QWORD *)(ContiguousIoResources + 232) = v27;
  RaSrbSetMiniportContext(a1, Srb, ContiguousIoResources + 1104);
  KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 712), NotificationEvent, 0);
  *(_QWORD *)(ContiguousIoResources + 704) = RaidXrbSignalCompletion;
  if ( *(_QWORD *)(a1 + 4896) )
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  v30 = ContiguousIoResources + 48;
  if ( *(_BYTE *)(a1 + 4306) )
    v31 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v30);
  else
    v31 = RaidAdapterExecuteXrb(a1, v30);
  v14 = v31;
  if ( v31 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(ContiguousIoResources + 712), Executive, 0, 0, 0LL);
    LOBYTE(v32) = *((_BYTE *)Srb + 3);
    v14 = RaidSrbStatusToNtStatus(v32);
  }
  v33 = *(_BYTE *)(ContiguousIoResources + 65);
  if ( (v33 & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(ContiguousIoResources + 796));
    *(_BYTE *)(ContiguousIoResources + 65) &= ~1u;
    v33 = *(_BYTE *)(ContiguousIoResources + 65);
  }
  if ( (v33 & 2) != 0 )
  {
    if ( a6 == 1
      || ((v34 = RaidAdapterFindUnit(a1, v39), (v10 = v34) == 0)
        ? (v36 = -1073741823)
        : (LOBYTE(v35) = 1, v36 = RaUnitAcquireRemoveLock(v34, (__int64)a2, v35)),
          !v36) )
    {
      if ( v10 )
      {
        RaidUnitPoFxIdleComponentFromMiniport(v10, *(unsigned int *)(ContiguousIoResources + 796));
        *(_BYTE *)(ContiguousIoResources + 65) &= ~2u;
        if ( a6 != 1 )
          RaUnitReleaseRemoveLock(v10);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 4896) )
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  if ( v14 < 0 )
    goto LABEL_3;
  if ( *((_BYTE *)Srb + 2) == 40 )
    v37 = *((_DWORD *)v9 + 15);
  else
    v37 = *((_DWORD *)Srb + 4);
  if ( v41 < v37 )
    v37 = v41;
  v15 = v37;
LABEL_4:
  a2->IoStatus.Information = v15;
  if ( ContiguousIoResources )
  {
    RaidXrbDeallocateResources(v12, 0LL);
    if ( ContiguousIoResources == *(_QWORD *)(a1 + 128) )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 1u);
    else
      StorFreeContiguousIoResources(a1, ContiguousIoResources);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v43 + 98) == 1 )
    {
      if ( !v9 )
        v9 = Srb;
      v9[10] = 0LL;
      v9[13] = 0LL;
    }
    else
    {
      Srb[6] = 0LL;
      Srb[7] = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2, 0, v14);
}
