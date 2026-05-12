/*
 * XREFs of RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180
 * Callers:
 *     RaidAdapterRpmbRequest @ 0x1C0036A2C (RaidAdapterRpmbRequest.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
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
 *     RaidBuildMdlForXrb @ 0x1C0011554 (RaidBuildMdlForXrb.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  __int64 v21; // r13
  __int64 v22; // r14
  unsigned int v23; // eax
  char *v24; // rcx
  __int64 v25; // rax
  __int16 v26; // ax
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
    v17 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v15, 0, 0LL);
    v18 = RaidBuildMdlForXrb(v17, a4, v7);
    if ( v18 >= 0 )
    {
      if ( a3 == -94 )
      {
        v19 = 64;
      }
      else
      {
        v19 = 0;
        if ( a3 == -75 )
          v19 = 128;
      }
      v20 = v19 | 0x102;
      Pool = (void *)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          v9 = Srb;
          v22 = Srb[13];
          Srb[5] = 0;
          Srb[8] = -1;
          Srb[6] = v20;
          *((_QWORD *)Srb + 8) = a4;
          Srb[15] = v7;
          *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
          v23 = *(_DWORD *)(a1 + 3996);
          *((_QWORD *)Srb + 10) = a2;
          Srb[10] = v23;
          *((_QWORD *)Srb + 12) = v17;
          if ( *(_WORD *)(a1 + 5440) == 1 )
          {
            *((_BYTE *)Srb + v22 + 8) = *(_BYTE *)(a1 + 5448);
            *((_BYTE *)Srb + v22 + 9) = *(_BYTE *)(a1 + 5449);
            *((_BYTE *)Srb + v22 + 10) = *(_BYTE *)(a1 + 5450);
          }
          *(_QWORD *)(v17 + 168) = Srb;
          *(_QWORD *)(v17 + 184) = *((_QWORD *)Srb + 8);
          *(_QWORD *)(v17 + 176) = *((_QWORD *)Srb + 12);
          v10 = (char *)Srb + Srb[30];
          *(_DWORD *)v10 = 64;
          v24 = v10 + 24;
          *((_DWORD *)v10 + 1) = 32;
          *(_WORD *)(v10 + 9) = 3327;
          *((_QWORD *)v10 + 2) = Pool;
        }
        else
        {
          *((_BYTE *)Srb + 2) = 0;
          *(_WORD *)Srb = 88;
          *((_QWORD *)Srb + 3) = a4;
          Srb[3] = v20;
          *((_BYTE *)Srb + 8) = -1;
          Srb[4] = v7;
          Srb[5] = *(_DWORD *)(a1 + 3996);
          *((_BYTE *)Srb + 11) = -1;
          *((_QWORD *)Srb + 4) = Pool;
          *((_QWORD *)Srb + 6) = v17;
          if ( *(_WORD *)(a1 + 5440) == 1 )
          {
            *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 5448);
            *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 5449);
            *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 5450);
          }
          v24 = (char *)(Srb + 18);
          *(_QWORD *)(v17 + 168) = Srb;
          v25 = *((_QWORD *)Srb + 3);
          *(_QWORD *)(v17 + 176) = a2;
          *(_QWORD *)(v17 + 184) = v25;
          *((_BYTE *)Srb + 10) = 12;
        }
        if ( *((_BYTE *)Srb + 2) == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
        *v24 = a3;
        v24[1] = *(_BYTE *)(a1 + 5432);
        v26 = *(_WORD *)(a1 + 5434);
        *(_DWORD *)(v24 + 6) = _byteswap_ulong(v7);
        v21 = v29;
        *((_WORD *)v24 + 1) = __ROR2__(v26, 8);
        RaSrbSetMiniportContext(a1, (__int64)Srb, v29 + 1104);
        KeInitializeEvent((PRKEVENT)(v17 + 664), NotificationEvent, 0);
        *(_QWORD *)(v17 + 656) = RaidXrbSignalCompletion;
        if ( *(_QWORD *)(a1 + 4832) )
          RaidAdapterPoFxActivateComponent(a1);
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              68LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              v17,
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
            &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
            v17,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4242) )
          v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v17);
        else
          v27 = RaidAdapterExecuteXrb(a1, (_QWORD *)v17);
        v18 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v17 + 664), Executive, 0, 0, 0LL);
          v18 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( (*(_BYTE *)(v17 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v17 + 748));
          *(_BYTE *)(v17 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4832) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        goto LABEL_11;
      }
      v18 = -1073741801;
    }
    v21 = v29;
  }
  else
  {
    v17 = 0LL;
    v18 = -1073741801;
    if ( !ContiguousIoResources )
      goto LABEL_13;
    v21 = ContiguousIoResources;
  }
LABEL_11:
  RaidXrbDeallocateResources(v17, 0, v16);
  StorFreeContiguousIoResources(a1, v21);
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
  return (unsigned int)v18;
}
