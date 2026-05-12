/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x1C00A6780
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C00A6B64 (RaidAdapterPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     RaSrbSetMiniportContext @ 0x1C0008664 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C000F794 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C0019DD4 (RaidFreeSrb.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  unsigned int v8; // ebx
  _QWORD *v9; // r13
  bool v10; // zf
  unsigned int v11; // ecx
  int v12; // edi
  unsigned int v13; // ebp
  _DWORD *Pool; // rsi
  int v15; // r9d
  _QWORD *v16; // r8
  _BYTE *v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rdx
  _QWORD *Srb; // rbx
  __int64 ContiguousIoResources; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  _QWORD *v29; // rbp
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  char v33; // [rsp+88h] [rbp+10h]

  v4 = (_QWORD *)(a2 + 24);
  v5 = *(_QWORD **)(a2 + 24);
  v33 = 0;
  *a4 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( v5 == v4 )
    goto LABEL_7;
  do
  {
    v10 = v5[6] == a3;
    v11 = v8 + 1;
    v5 = (_QWORD *)*v5;
    if ( !v10 )
      v11 = v8;
    v8 = v11;
  }
  while ( v5 != v4 );
  if ( v11 <= 4 )
  {
LABEL_7:
    *(_DWORD *)(a3 + 72) = v8 << 16;
    if ( 16 * ((unsigned __int64)v8 + 1) <= 0x18 )
      v13 = 24;
    else
      v13 = 16 * (v8 + 1);
    Pool = (_DWORD *)RaidAllocatePool(64LL, v13, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
      return (unsigned int)-1073741670;
    Pool[2] = 1196246089;
    *Pool = 32;
    v15 = 0;
    Pool[1] = 32;
    Pool[3] = v8;
    v16 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      do
      {
        if ( v16[6] == a3 )
        {
          v17 = (_BYTE *)v16[5];
          v18 = &Pool[4 * v15++ + 4];
          *(_WORD *)v18 = 1;
          v18[1] = 4;
          *((_BYTE *)v18 + 8) = v17[74];
          *((_BYTE *)v18 + 9) = v17[75];
          *((_BYTE *)v18 + 10) = v17[76];
        }
        v16 = (_QWORD *)*v16;
      }
      while ( v16 != v4 );
      v9 = 0LL;
    }
    Srb = (_QWORD *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x2Au, *(_BYTE *)(a1 + 442), 0);
    if ( !Srb )
    {
      v12 = -1073741670;
      goto LABEL_51;
    }
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104,
                              v19,
                              a1);
    v32 = ContiguousIoResources;
    v23 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v24 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v22, 0, 0LL);
      *(_BYTE *)(v24 + 17) |= 8u;
      *(_QWORD *)(v24 + 176) = 0LL;
      *(_QWORD *)(v24 + 184) = Pool;
      *(_QWORD *)(v24 + 168) = Srb;
      if ( *(_BYTE *)(a1 + 442) == 1 )
      {
        *((_DWORD *)Srb + 15) = v13;
        v9 = Srb;
        Srb[12] = v24;
        *((_DWORD *)Srb + 6) = 256;
        Srb[10] = 0LL;
        *((_DWORD *)Srb + 5) = 42;
        Srb[8] = Pool;
        *((_DWORD *)Srb + 10) = 10;
        v33 = 1;
        if ( !*(_BYTE *)(a1 + 4306) )
          *((_DWORD *)Srb + 6) = 192;
      }
      else
      {
        *((_DWORD *)Srb + 4) = v13;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 3) = 256;
        v25 = 256;
        Srb[6] = v24;
        *((_BYTE *)Srb + 2) = 42;
        Srb[3] = Pool;
        *((_DWORD *)Srb + 5) = 10;
        if ( !*(_BYTE *)(a1 + 4306) )
          v25 = 192;
        *((_DWORD *)Srb + 3) = v25;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, v23 + 1104);
      KeInitializeEvent((PRKEVENT)(v24 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v24, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x49u,
          (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
          v24,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4306) )
        v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v24);
      else
        v27 = RaidAdapterExecuteXrb(a1, (_QWORD *)v24, v26);
      v12 = v27;
      if ( v27 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v24 + 664), Executive, 0, 0, 0LL);
        v12 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
        WPP_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Au,
          (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
          v12,
          Timeout);
      }
      if ( v12 >= 0 )
      {
        if ( *Pool >= 0x18u && Pool[2] == 1297105993 )
        {
          *a4 = Pool;
          Pool = 0LL;
        }
        else
        {
          v12 = -1073739509;
        }
      }
      v29 = Srb;
      RaidXrbDeallocateResources(v24, 0, v28);
      StorFreeContiguousIoResources(a1, v32);
      if ( v33 == 1 )
      {
        if ( v9 )
          v29 = v9;
        v29[10] = 0LL;
        v29[13] = 0LL;
LABEL_50:
        RaidFreeSrb(Srb);
        if ( !Pool )
          return (unsigned int)v12;
LABEL_51:
        ExFreePoolWithTag(Pool, 0x44436152u);
        return (unsigned int)v12;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    Srb[6] = 0LL;
    Srb[7] = 0LL;
    goto LABEL_50;
  }
  return (unsigned int)-1073741637;
}
