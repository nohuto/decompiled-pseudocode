/*
 * XREFs of StorGetNVMeIdentifyInfo @ 0x1C00AB8B4
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1C009F400 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 *     StorAdapterNVMeEnumerate @ 0x1C00AB530 (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidBuildMdlForXrb @ 0x1C0008358 (RaidBuildMdlForXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000F794 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C0019DD4 (RaidFreeSrb.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall StorGetNVMeIdentifyInfo(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, char a7, void *a8)
{
  __int64 v8; // r14
  char v9; // r13
  __int64 v10; // rbx
  unsigned int v12; // edi
  __int64 Srb; // rbp
  __int64 v14; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rdi
  int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax

  v8 = 0LL;
  v9 = a4;
  v10 = a1;
  if ( !a8 )
    return 3221225485LL;
  if ( !a1 )
    v10 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 568) + 184LL) & 0x4000) == 0 )
    return 3221225659LL;
  v12 = (*(_DWORD *)(v10 + 484) + 7) & 0xFFFFFFF8;
  if ( a4 )
  {
    if ( a4 != 1 && a4 != 2 && a4 != 3 && a4 != 5 )
      return 3221225488LL;
    memset_0(a8, 0, 0x1000uLL);
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(v10 + 8), 0xAu, *(_BYTE *)(v10 + 442), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1104, v14, v10);
  v18 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v19 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v16, 0, 0LL);
    v20 = RaidBuildMdlForXrb(v19, a8, 0x1000u);
    if ( v20 >= 0 )
    {
      RaSrbSetMiniportContext(v10, Srb, v18 + 1104);
      *(_BYTE *)(v19 + 17) |= 8u;
      if ( *(_BYTE *)(v10 + 442) == 1 )
      {
        *(_DWORD *)(Srb + 32) = -1;
        v8 = Srb;
        v21 = *(unsigned int *)(Srb + 120);
        *(_QWORD *)(Srb + 64) = a8;
        v22 = Srb + v21;
        *(_DWORD *)(Srb + 20) = 10;
        *(_DWORD *)(Srb + 24) = 322;
        *(_BYTE *)(Srb + 3) = 0;
        *(_DWORD *)(Srb + 60) = 4096;
        *(_DWORD *)(Srb + 40) = *(_DWORD *)(v10 + 4060);
        *(_QWORD *)(Srb + 96) = v19;
        *(_QWORD *)(v19 + 168) = Srb;
        *(_QWORD *)(v19 + 184) = *(_QWORD *)(Srb + 64);
        *(_QWORD *)(v19 + 176) = *(_QWORD *)(Srb + 96);
        *(_WORD *)(v22 + 72) = 513;
        *(_DWORD *)(v22 + 12) = a3;
        *(_BYTE *)(v22 + 48) = v9;
        *(_BYTE *)(v22 + 55) = a7;
        *(_BYTE *)(v22 + 8) = 6;
        *(_DWORD *)(v22 + 50) = 0;
        if ( *(_BYTE *)(Srb + 2) == 40 )
          *(_WORD *)(Srb + 38) = 32;
        else
          *(_BYTE *)(Srb + 9) = 32;
        KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v19, (__int64)RaidXrbSignalCompletion);
        if ( *(_QWORD *)(v10 + 4896) )
          RaidAdapterPoFxActivateComponent(v10, 0LL, 1LL);
        if ( *(_BYTE *)(v10 + 4306) )
          v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v10, v19);
        else
          v24 = RaidAdapterExecuteXrb(v10, (_QWORD *)v19, v23);
        v20 = v24;
        if ( v24 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v19 + 664), Executive, 0, 0, 0LL);
          v20 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
        }
        if ( (*(_BYTE *)(v19 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(v10, *(unsigned int *)(v19 + 748));
          *(_BYTE *)(v19 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(v10 + 4896) )
          RaidAdapterPoFxIdleComponent(v10, 0LL, 0LL);
      }
      else
      {
        v20 = -1073741637;
      }
    }
  }
  else
  {
    v20 = -1073741801;
    v19 = 0LL;
    if ( !ContiguousIoResources )
      goto LABEL_33;
  }
  RaidXrbDeallocateResources(v19, 0, v17);
  StorFreeContiguousIoResources(v10, v18);
LABEL_33:
  if ( Srb )
  {
    if ( (*(_BYTE *)(v10 + 442) & 1) != 0 )
    {
      if ( !v8 )
        v8 = Srb;
      *(_QWORD *)(v8 + 80) = 0LL;
      *(_QWORD *)(v8 + 104) = 0LL;
    }
    RaidFreeSrb((void *)Srb);
  }
  return (unsigned int)v20;
}
