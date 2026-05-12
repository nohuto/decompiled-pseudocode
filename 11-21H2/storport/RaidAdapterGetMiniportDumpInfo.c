/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C0085A60 (RaidAdapterPopulateMiniportDumpInfo.c)
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
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C001592C (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001DC00 (RaidFreeSrb.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  unsigned int v8; // ebx
  bool v9; // zf
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  _DWORD *Pool; // rsi
  int v13; // r9d
  _QWORD *i; // r8
  _BYTE *v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rdx
  unsigned __int8 *Srb; // rdi
  __int64 ContiguousIoResources; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // r8
  int v25; // ebx
  unsigned __int8 *v26; // rax
  int v28; // eax
  __int64 v29; // [rsp+20h] [rbp-58h]
  unsigned __int8 *v30; // [rsp+30h] [rbp-48h]
  char v31; // [rsp+88h] [rbp+10h]

  v4 = (_QWORD *)(a2 + 24);
  v5 = *(_QWORD **)(a2 + 24);
  v31 = 0;
  v30 = 0LL;
  v8 = 0;
  *a4 = 0LL;
  if ( v5 != v4 )
  {
    do
    {
      v9 = v5[6] == a3;
      v10 = v8 + 1;
      v5 = (_QWORD *)*v5;
      if ( !v9 )
        v10 = v8;
      v8 = v10;
    }
    while ( v5 != v4 );
    if ( v10 > 4 )
      return (unsigned int)-1073741637;
  }
  *(_DWORD *)(a3 + 72) = v8 << 16;
  if ( 16 * ((unsigned __int64)v8 + 1) <= 0x18 )
    v11 = 24;
  else
    v11 = 16 * (v8 + 1);
  Pool = (_DWORD *)RaidAllocatePool(64LL, v11, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( !Pool )
    return (unsigned int)-1073741670;
  Pool[2] = 1196246089;
  *Pool = 32;
  v13 = 0;
  Pool[1] = 32;
  Pool[3] = v8;
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    if ( i[6] == a3 )
    {
      v15 = (_BYTE *)i[5];
      v16 = &Pool[4 * v13++ + 4];
      *(_WORD *)v16 = 1;
      v16[1] = 4;
      *((_BYTE *)v16 + 8) = v15[74];
      *((_BYTE *)v16 + 9) = v15[75];
      *((_BYTE *)v16 + 10) = v15[76];
    }
  }
  Srb = (unsigned __int8 *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x2Au, *(_BYTE *)(a1 + 442), 0);
  if ( !Srb )
  {
    v25 = -1073741670;
LABEL_44:
    ExFreePoolWithTag(Pool, 0x44436152u);
    return (unsigned int)v25;
  }
  ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v17, a1);
  v21 = ContiguousIoResources;
  if ( !ContiguousIoResources )
  {
    v25 = -1073741670;
LABEL_46:
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
    goto LABEL_36;
  }
  v22 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v20, 0, 0LL);
  *(_BYTE *)(v22 + 17) |= 8u;
  *(_QWORD *)(v22 + 176) = 0LL;
  *(_QWORD *)(v22 + 184) = Pool;
  *(_QWORD *)(v22 + 168) = Srb;
  if ( *(_BYTE *)(a1 + 442) == 1 )
  {
    *((_DWORD *)Srb + 15) = v11;
    *((_DWORD *)Srb + 6) = 256;
    *((_QWORD *)Srb + 12) = v22;
    *((_QWORD *)Srb + 10) = 0LL;
    *((_DWORD *)Srb + 5) = 42;
    *((_QWORD *)Srb + 8) = Pool;
    *((_DWORD *)Srb + 10) = 10;
    v31 = 1;
    v30 = Srb;
    if ( !*(_BYTE *)(a1 + 4242) )
      *((_DWORD *)Srb + 6) = 192;
  }
  else
  {
    *((_DWORD *)Srb + 4) = v11;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 3) = 256;
    v28 = 256;
    *((_QWORD *)Srb + 6) = v22;
    Srb[2] = 42;
    *((_QWORD *)Srb + 3) = Pool;
    *((_DWORD *)Srb + 5) = 10;
    if ( !*(_BYTE *)(a1 + 4242) )
      v28 = 192;
    *((_DWORD *)Srb + 3) = v28;
  }
  RaSrbSetMiniportContext(a1, (__int64)Srb, v21 + 1104);
  KeInitializeEvent((PRKEVENT)(v22 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v22, (__int64)RaidXrbSignalCompletion);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x49u,
      (__int64)&WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      v22,
      Srb);
  }
  if ( *(_BYTE *)(a1 + 4242) )
    v23 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v22);
  else
    v23 = RaidAdapterExecuteXrb(a1, (_QWORD *)v22);
  v25 = v23;
  if ( v23 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v22 + 664), Executive, 0, 0, 0LL);
    v25 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    LODWORD(v29) = Srb[3];
    WPP_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Au,
      (__int64)&WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      v25,
      v29);
  }
  if ( v25 >= 0 )
  {
    if ( *Pool >= 0x18u && Pool[2] == 1297105993 )
    {
      *a4 = Pool;
      Pool = 0LL;
    }
    else
    {
      v25 = -1073739509;
    }
  }
  RaidXrbDeallocateResources(v22, 0, v24);
  StorFreeContiguousIoResources(a1, v21);
  if ( v31 != 1 )
    goto LABEL_46;
  v26 = Srb;
  if ( v30 )
    v26 = v30;
  *((_QWORD *)v26 + 10) = 0LL;
  *((_QWORD *)v26 + 13) = 0LL;
LABEL_36:
  RaidFreeSrb(Srb);
  if ( Pool )
    goto LABEL_44;
  return (unsigned int)v25;
}
