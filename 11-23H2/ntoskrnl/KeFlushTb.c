/*
 * XREFs of KeFlushTb @ 0x140279C00
 * Callers:
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertCachedPte @ 0x1402CBDA0 (MiInsertCachedPte.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiAgeWorkingSetTail @ 0x140334640 (MiAgeWorkingSetTail.c)
 *     MiAttachSessionGlobal @ 0x14033DD2C (MiAttachSessionGlobal.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1403613F0 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1724 (MiGetWsAndMakePageTablesNx.c)
 *     MiManageUltraSpacePageTable @ 0x14046F09C (MiManageUltraSpacePageTable.c)
 *     MiSwitchToPfns @ 0x140B42278 (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402540E0 (KiIpiSendRequest.c)
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1402EB754 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequestEx @ 0x1402EB880 (KiIpiSendRequestEx.c)
 *     KiFlushCurrentTbWorker @ 0x140339FF0 (KiFlushCurrentTbWorker.c)
 *     KxSetTimeStampBusy @ 0x140346924 (KxSetTimeStampBusy.c)
 *     KxFlushEntireTb @ 0x1403B2C8C (KxFlushEntireTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403BE500 (KiFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x1403CC230 (KiFlushAddressSpaceTb.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KiPrepareFlushParameters @ 0x1403CEC2C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x1403CEF48 (KiFlushAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiIsFlushEntire @ 0x14046099C (KiIsFlushEntire.c)
 *     VmFlushTb @ 0x1404668EC (VmFlushTb.c)
 *     VslFlushSecureAddressSpace @ 0x14054B6BC (VslFlushSecureAddressSpace.c)
 *     ExFlushTb @ 0x14060D568 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v5; // r14d
  bool v6; // r8
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  struct _KPRCB *v9; // r15
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rdi
  _KPROCESS *v11; // rbx
  __int64 v12; // rcx
  unsigned __int16 *v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int16 v21; // cx
  _KPROCESS *Process; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int8 v25; // r10
  _DWORD *v26; // r10
  __int64 v27; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // rdx
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // cl
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  unsigned __int8 v41; // bl
  _DWORD *v42; // r9
  __int64 v43; // rdx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  signed __int32 v48[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int8 v49; // [rsp+90h] [rbp+18h] BYREF
  __int64 v50; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v50 = 0LL;
  v49 = 0;
  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 || (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire() )
  {
LABEL_40:
    v5 = 0;
    KiPrepareFlushParameters(a1, &v50, &v49);
    v24 = KiFlushAffinity(a2);
    result = KiFlushAddressSpaceTb(v50, v24, v49, v25);
    goto LABEL_16;
  }
  if ( (_DWORD)KeNumberProcessors_0 != 1 )
  {
    if ( !a2 )
    {
      _InterlockedOr(v48, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 12 )
          LODWORD(v29) = 4096;
        else
          v29 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
        SchedulerAssist[5] |= v29;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = 0;
      Process = CurrentPrcb->CurrentThread->ApcState.Process;
      if ( !Process->ActiveProcessors.Count )
      {
LABEL_32:
        KiFlushCurrentTbOnly(a1);
        if ( (_DWORD)KiIrqlFlags )
        {
          v17 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && (unsigned __int8)v17 <= 0xFu
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v17 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v17 = (unsigned int)CurrentIrql + 1;
            v36 = v35->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v33 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        v5 = 0;
        goto LABEL_16;
      }
      while ( 1 )
      {
        v23 = Process->ActiveProcessors.Bitmap[v21];
        if ( v23 )
        {
          if ( v21 != CurrentPrcb->Group || v23 != CurrentPrcb->GroupSetMember )
            break;
        }
        if ( ++v21 >= Process->ActiveProcessors.Count )
          goto LABEL_32;
      }
      if ( (_DWORD)KiIrqlFlags )
      {
        v34 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v33 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_40;
  }
LABEL_2:
  v5 = 1;
  if ( !KiKvaShadow )
  {
    if ( !a1 || a1 - 1 > 1 )
    {
      result = KxFlushEntireTb(a2);
      goto LABEL_16;
    }
    goto LABEL_57;
  }
  if ( a1 != 1 && (!a1 || a1 == 2) )
  {
LABEL_57:
    result = KxFlushNonGlobalTb(a2);
    goto LABEL_16;
  }
  v6 = 1;
  v7 = 3LL;
  if ( a2 == 1 )
    v7 = 2147483651LL;
  else
    v6 = a2 != 0;
  v8 = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v8 <= 0xFu )
  {
    v26 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v8 == 12 )
      LODWORD(v27) = 4096;
    else
      v27 = (-1LL << (v8 + 1)) & 0x1FFC;
    v26[5] |= v27;
  }
  if ( v6 )
  {
    if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, v7, (__int64)KiFlushCurrentTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v48, 0);
    v9 = KeGetCurrentPrcb();
    p_StaticAffinity = &v9->StaticAffinity;
    v11 = v9->CurrentThread->ApcState.Process;
    *(_QWORD *)&v9->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset(&v9->StaticAffinity.KeSyncContextAffinity.8, 0, sizeof(v9->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      (__int64)&v9->StaticAffinity,
      v9->StaticAffinity.KeFlushTbAffinity.Size,
      &v11->ActiveProcessors.Count);
    v12 = (unsigned int)KiProcessorIndexToNumberMappingTable[v9->Number] >> 6;
    if ( v9->StaticAffinity.KeFlushTbAffinity.Count > (unsigned int)v12 )
    {
      v13 = &p_StaticAffinity->KeFlushTbAffinity.Count + 4 * v12;
      v14 = *((_QWORD *)v13 + 1);
      _bittestandreset64(&v14, KiProcessorIndexToNumberMappingTable[v9->Number] & 0x3F);
      *((_QWORD *)v13 + 1) = v14;
    }
    v15 = 0;
    if ( p_StaticAffinity->KeFlushTbAffinity.Count )
    {
      while ( 1 )
      {
        v16 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v15];
        if ( v16 )
        {
          if ( v15 != v9->Group || v16 != v9->GroupSetMember )
            break;
        }
        if ( ++v15 >= p_StaticAffinity->KeFlushTbAffinity.Count )
          goto LABEL_13;
      }
      KiIpiSendRequest((__int64)v9, 0, (_DWORD)v9 + 11704, 0LL, v7);
      KiFlushCurrentTbWorker(0LL);
      while ( v9->PacketBarrier )
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17) )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
LABEL_13:
      KiFlushCurrentTbWorker(0LL);
    }
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)v17 <= 0xFu
      && v8 <= 0xFu
      && (unsigned __int8)v17 >= 2u )
    {
      v38 = KeGetCurrentPrcb();
      v17 = (unsigned int)v8 + 1;
      v39 = v38->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (v8 + 1));
      v33 = (v40 & v39[5]) == 0;
      v39[5] &= v40;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v38);
    }
  }
  result = v8;
  __writecr8(v8);
LABEL_16:
  if ( a1 == 1 )
  {
    result = (__int64)KeGetCurrentThread();
    v17 = *(_QWORD *)(result + 184);
    if ( *(_QWORD *)(v17 + 992) )
      result = VslFlushSecureAddressSpace();
  }
  if ( !v5 && a1 == 4 )
  {
    LOBYTE(v17) = 1;
    result = KeFlushProcessWriteBuffers(v17);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, a1);
  if ( ExTbFlushActive )
  {
    v41 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu )
    {
      v42 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v41 == 15 )
        LODWORD(v43) = 0x8000;
      else
        v43 = (-1LL << (v41 + 1)) & 0xFFFC;
      v42[5] |= v43;
    }
    ExFlushTb(0LL, 0LL, a1);
    if ( (_DWORD)KiIrqlFlags )
    {
      v44 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v41 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (v41 + 1));
        v33 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    result = v41;
    __writecr8(v41);
  }
  return result;
}
