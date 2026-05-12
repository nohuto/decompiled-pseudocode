/*
 * XREFs of RaidAdapterFreeMiniportDumpInfo @ 0x1C00A6490
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C005FA90 (RaUnitStorageFreeDumpInfo.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000F794 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C0019DD4 (RaidFreeSrb.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterFreeMiniportDumpInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v4; // r12
  unsigned __int8 *v5; // r15
  unsigned int v6; // edi
  __int64 Pool; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int8 *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v12; // rdx
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v20; // r9d
  unsigned __int8 *v21; // rsi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v2 && v2 != -64 && *(_QWORD *)(v2 + 56) )
  {
    Pool = RaidAllocatePool(64LL, 24LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v8 = Pool;
    if ( !Pool )
      return (unsigned int)-1073741670;
    *(_DWORD *)Pool = 24;
    *(_DWORD *)(Pool + 4) = 24;
    *(_DWORD *)(Pool + 8) = 1179468873;
    *(_QWORD *)(Pool + 16) = *(_QWORD *)(v2 + 56);
    Srb = (unsigned __int8 *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x2Bu, *(_BYTE *)(v2 + 162), 0);
    if ( !Srb )
      return (unsigned int)-1073741670;
    ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v9, a1);
    v23 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v14 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v12, 0, 0LL);
      v15 = v23 + 1104;
      *(_QWORD *)(v14 + 176) = 0LL;
      *(_QWORD *)(v14 + 184) = v8;
      *(_QWORD *)(v14 + 168) = Srb;
      if ( *(_BYTE *)(v2 + 162) == 1 )
      {
        *((_QWORD *)Srb + 8) = v8;
        v4 = 1;
        *((_DWORD *)Srb + 5) = 43;
        *((_DWORD *)Srb + 6) = 256;
        v5 = Srb;
        *((_DWORD *)Srb + 15) = 24;
        *((_QWORD *)Srb + 10) = 0LL;
        *((_QWORD *)Srb + 12) = v14;
        *((_QWORD *)Srb + 13) = v15;
        *((_DWORD *)Srb + 10) = 10;
        if ( !*(_BYTE *)(a1 + 4306) )
          *((_DWORD *)Srb + 6) = 128;
      }
      else
      {
        *((_QWORD *)Srb + 7) = v15;
        *((_QWORD *)Srb + 3) = v8;
        *(_WORD *)Srb = 88;
        v16 = 256;
        *((_DWORD *)Srb + 3) = 256;
        Srb[2] = 43;
        *((_DWORD *)Srb + 4) = 24;
        *((_QWORD *)Srb + 6) = v14;
        *((_DWORD *)Srb + 5) = 10;
        if ( !*(_BYTE *)(a1 + 4306) )
          v16 = 128;
        *((_DWORD *)Srb + 3) = v16;
      }
      KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v14, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Bu,
          (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
          v14,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4306) )
        v18 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v14);
      else
        v18 = RaidAdapterExecuteXrb(a1, (_QWORD *)v14, v17);
      v20 = v18;
      if ( v18 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v14 + 664), Executive, 0, 0, 0LL);
        v20 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = Srb[3];
        WPP_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Cu,
          (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
          v20,
          Timeout);
      }
      *(_QWORD *)(v2 + 56) = 0LL;
      v21 = Srb;
      RaidXrbDeallocateResources(v14, 0, v19);
      StorFreeContiguousIoResources(a1, v23);
      v6 = 0;
      if ( v4 == 1 )
      {
        if ( v5 )
          v21 = v5;
        *((_QWORD *)v21 + 10) = 0LL;
        *((_QWORD *)v21 + 13) = 0LL;
        goto LABEL_10;
      }
    }
    else
    {
      v6 = -1073741670;
    }
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
LABEL_10:
    RaidFreeSrb(Srb);
  }
  return v6;
}
