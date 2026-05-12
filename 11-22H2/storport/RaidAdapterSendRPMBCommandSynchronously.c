/*
 * XREFs of RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8
 * Callers:
 *     RaidAdapterRpmbRequest @ 0x1C0037E58 (RaidAdapterRpmbRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
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
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqq @ 0x1C003EBC4 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidAdapterSendRPMBCommandSynchronously(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  ULONG v7; // r13d
  unsigned int v8; // ebx
  unsigned int *v9; // r15
  char *v10; // r14
  void *Pool; // r12
  unsigned int *Srb; // rdi
  __int64 v13; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  __int64 v20; // r13
  __int64 v21; // r14
  unsigned int v22; // eax
  char *v23; // rcx
  __int64 v24; // rax
  __int16 v25; // ax
  __int64 v26; // r8
  int v27; // eax
  __int64 v29; // [rsp+80h] [rbp+8h]

  v7 = a5 << 9;
  v8 = (*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8;
  v9 = 0LL;
  v10 = 0LL;
  Pool = 0LL;
  Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(a1 + 442), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v8 + 1104, v13, a1);
  v29 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v16 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, 1LL, 0, 0LL);
    v17 = RaidBuildMdlForXrb(v16, a4, v7);
    if ( v17 >= 0 )
    {
      if ( a3 == -94 )
      {
        v18 = 64;
      }
      else
      {
        v18 = 0;
        if ( a3 == -75 )
          v18 = 128;
      }
      v19 = v18 | 0x102;
      Pool = (void *)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          v9 = Srb;
          v21 = Srb[13];
          Srb[5] = 0;
          Srb[8] = -1;
          Srb[6] = v19;
          *((_QWORD *)Srb + 8) = a4;
          Srb[15] = v7;
          *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
          v22 = *(_DWORD *)(a1 + 4060);
          *((_QWORD *)Srb + 10) = a2;
          Srb[10] = v22;
          *((_QWORD *)Srb + 12) = v16;
          if ( *(_WORD *)(a1 + 5504) == 1 )
          {
            *((_BYTE *)Srb + v21 + 8) = *(_BYTE *)(a1 + 5512);
            *((_BYTE *)Srb + v21 + 9) = *(_BYTE *)(a1 + 5513);
            *((_BYTE *)Srb + v21 + 10) = *(_BYTE *)(a1 + 5514);
          }
          *(_QWORD *)(v16 + 168) = Srb;
          *(_QWORD *)(v16 + 184) = *((_QWORD *)Srb + 8);
          *(_QWORD *)(v16 + 176) = *((_QWORD *)Srb + 12);
          v10 = (char *)Srb + Srb[30];
          *(_DWORD *)v10 = 64;
          v23 = v10 + 24;
          *((_DWORD *)v10 + 1) = 32;
          *(_WORD *)(v10 + 9) = 3327;
          *((_QWORD *)v10 + 2) = Pool;
        }
        else
        {
          *((_BYTE *)Srb + 2) = 0;
          *(_WORD *)Srb = 88;
          *((_QWORD *)Srb + 3) = a4;
          Srb[3] = v19;
          *((_BYTE *)Srb + 8) = -1;
          Srb[4] = v7;
          Srb[5] = *(_DWORD *)(a1 + 4060);
          *((_BYTE *)Srb + 11) = -1;
          *((_QWORD *)Srb + 4) = Pool;
          *((_QWORD *)Srb + 6) = v16;
          if ( *(_WORD *)(a1 + 5504) == 1 )
          {
            *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 5512);
            *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 5513);
            *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 5514);
          }
          v23 = (char *)(Srb + 18);
          *(_QWORD *)(v16 + 168) = Srb;
          v24 = *((_QWORD *)Srb + 3);
          *(_QWORD *)(v16 + 176) = a2;
          *(_QWORD *)(v16 + 184) = v24;
          *((_BYTE *)Srb + 10) = 12;
        }
        if ( *((_BYTE *)Srb + 2) == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
        *v23 = a3;
        v23[1] = *(_BYTE *)(a1 + 5496);
        v25 = *(_WORD *)(a1 + 5498);
        *(_DWORD *)(v23 + 6) = _byteswap_ulong(v7);
        v20 = v29;
        *((_WORD *)v23 + 1) = __ROR2__(v25, 8);
        RaSrbSetMiniportContext(a1, (__int64)Srb, v29 + 1104);
        KeInitializeEvent((PRKEVENT)(v16 + 664), NotificationEvent, 0);
        *(_QWORD *)(v16 + 656) = RaidXrbSignalCompletion;
        if ( *(_QWORD *)(a1 + 4896) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              68LL,
              &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
              v16,
              v9,
              *((_QWORD *)v9 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            69LL,
            &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
            v16,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4306) )
          v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v16);
        else
          v27 = RaidAdapterExecuteXrb(a1, (_QWORD *)v16, v26);
        v17 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v16 + 664), Executive, 0, 0, 0LL);
          v17 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( (*(_BYTE *)(v16 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v16 + 748));
          *(_BYTE *)(v16 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4896) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        goto LABEL_11;
      }
      v17 = -1073741801;
    }
    v20 = v29;
  }
  else
  {
    v17 = -1073741801;
    v16 = 0LL;
    if ( !ContiguousIoResources )
      goto LABEL_13;
    v20 = ContiguousIoResources;
  }
LABEL_11:
  RaidXrbDeallocateResources(v16, 0, v15);
  StorFreeContiguousIoResources(a1, v20);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x4E536152u);
LABEL_13:
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v9 )
        v9 = Srb;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
      if ( v10 )
        *((_QWORD *)v10 + 2) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v17;
}
