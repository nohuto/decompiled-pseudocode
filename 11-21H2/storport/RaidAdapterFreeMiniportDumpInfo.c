/*
 * XREFs of RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C00170BC (RaUnitStorageFreeDumpInfo.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RaidXrbDeallocateResources @ 0x1C000BDD4 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C001592C (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001DC00 (RaidFreeSrb.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterFreeMiniportDumpInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int8 *v4; // r12
  unsigned int v5; // edi
  __int64 Pool; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int8 *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  unsigned __int8 *v18; // rax
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-38h]
  char v22; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 48);
  v22 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( v2 && v2 != -64 && *(_QWORD *)(v2 + 56) )
  {
    Pool = RaidAllocatePool(64LL, 24LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v7 = Pool;
    if ( !Pool )
      return (unsigned int)-1073741670;
    *(_DWORD *)Pool = 24;
    *(_DWORD *)(Pool + 4) = 24;
    *(_DWORD *)(Pool + 8) = 1179468873;
    *(_QWORD *)(Pool + 16) = *(_QWORD *)(v2 + 56);
    Srb = (unsigned __int8 *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x2Bu, *(_BYTE *)(v2 + 162), 0);
    if ( !Srb )
      return (unsigned int)-1073741670;
    ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v8, a1);
    v12 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v13 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v11, 0, 0LL);
      *(_QWORD *)(v13 + 184) = v7;
      *(_QWORD *)(v13 + 176) = 0LL;
      v14 = v12 + 1104;
      *(_QWORD *)(v13 + 168) = Srb;
      if ( *(_BYTE *)(v2 + 162) == 1 )
      {
        *((_QWORD *)Srb + 8) = v7;
        v4 = Srb;
        *((_DWORD *)Srb + 5) = 43;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 15) = 24;
        *((_QWORD *)Srb + 10) = 0LL;
        *((_QWORD *)Srb + 12) = v13;
        *((_QWORD *)Srb + 13) = v14;
        *((_DWORD *)Srb + 10) = 10;
        v22 = 1;
        if ( !*(_BYTE *)(a1 + 4242) )
          *((_DWORD *)Srb + 6) = 128;
      }
      else
      {
        *((_QWORD *)Srb + 7) = v14;
        *((_QWORD *)Srb + 3) = v7;
        *(_WORD *)Srb = 88;
        v20 = 256;
        *((_DWORD *)Srb + 3) = 256;
        Srb[2] = 43;
        *((_DWORD *)Srb + 4) = 24;
        *((_QWORD *)Srb + 6) = v13;
        *((_DWORD *)Srb + 5) = 10;
        if ( !*(_BYTE *)(a1 + 4242) )
          v20 = 128;
        *((_DWORD *)Srb + 3) = v20;
      }
      KeInitializeEvent((PRKEVENT)(v13 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v13, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Bu,
          (__int64)&WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
          v13,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4242) )
        v15 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v13);
      else
        v15 = RaidAdapterExecuteXrb(a1, (_QWORD *)v13);
      v17 = v15;
      if ( v15 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v13 + 664), Executive, 0, 0, 0LL);
        v17 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(v21) = Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Cu,
          (__int64)&WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
          v17,
          v21);
      }
      *(_QWORD *)(v2 + 56) = 0LL;
      RaidXrbDeallocateResources(v13, 0, v16);
      StorFreeContiguousIoResources(a1, v12);
      v5 = 0;
      if ( v22 == 1 )
      {
        v18 = Srb;
        if ( v4 )
          v18 = v4;
        *((_QWORD *)v18 + 10) = 0LL;
        *((_QWORD *)v18 + 13) = 0LL;
        goto LABEL_22;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
LABEL_22:
    RaidFreeSrb(Srb);
  }
  return v5;
}
