/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x140203570
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x14039EC20 (KiUpdateThreadCpuSets.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14020666C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeCheckProcessorAffinityEx @ 0x140257420 (KeCheckProcessorAffinityEx.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402BD4E0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        volatile signed __int64 *a7,
        __int64 a8)
{
  struct _KPRCB *CurrentPrcb; // r13
  char v12; // r12
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rbx
  bool v16; // zf
  bool v17; // zf
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r9
  _DWORD *v23; // r11
  char v24; // r10
  unsigned int v25; // ebx
  __int64 v26; // r10
  _DWORD *v27; // rcx
  _DWORD v29[84]; // [rsp+30h] [rbp-188h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v13 = a4;
  LOBYTE(v14) = (unsigned __int8)memset(v29, 0, sizeof(v29));
  switch ( v13 )
  {
    case 1:
      v25 = *(char *)(a1 + 195);
      KiRemoveThreadFromAnyReadyQueue(a5, a7, a1, v25);
      LOBYTE(v14) = KiPrepareReadyThreadForRescheduling(a1, v25, a8);
      goto LABEL_4;
    case 2:
      if ( a2 )
      {
        LODWORD(v14) = KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a5 + 36));
        v16 = (_DWORD)v14 == 0;
      }
      else
      {
        if ( !a3 )
          goto LABEL_4;
        v14 = *(_QWORD *)a3 >> (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] & 0x3F);
        v16 = (((unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] >> 6 == *(unsigned __int16 *)(a3 + 8)) & (unsigned __int8)v14) == 0;
      }
      if ( !v16 )
      {
LABEL_4:
        v15 = a6;
        goto LABEL_5;
      }
      LOBYTE(v14) = *(_BYTE *)(a1 + 388);
      if ( (_BYTE)v14 != 2 )
      {
        *(_BYTE *)(a1 + 112) |= 8u;
        goto LABEL_4;
      }
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
      v17 = *(_QWORD *)(a5 + 16) == 0LL;
      break;
    case 3:
      if ( a2 )
      {
        LODWORD(v14) = KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a5 + 36));
        v17 = (_DWORD)v14 == 0;
      }
      else
      {
        if ( !a3 )
          goto LABEL_4;
        v14 = *(_QWORD *)a3 >> (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] & 0x3F);
        v17 = (((unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] >> 6 == *(unsigned __int16 *)(a3 + 8)) & (unsigned __int8)v14) == 0;
      }
      break;
    default:
      goto LABEL_4;
  }
  if ( !v17 )
    goto LABEL_4;
  v15 = a6;
  KiStartRescheduleContext(v29, a6, a1);
  RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v29, a5);
  LOBYTE(v19) = 1;
  KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v20, 0LL, v19);
  if ( (v24 & 2) != 0 )
  {
    LOBYTE(v21) = v29[0];
    v26 = 0LL;
    if ( LOBYTE(v29[0]) )
    {
      do
      {
        v27 = &v29[10 * v26 + 4];
        if ( v27 != v23 )
        {
          LOBYTE(v22) = 1;
          KiAdjustRescheduleContextEntryForThreadRemoval(v27, v21, 0LL, v22);
          LOBYTE(v21) = v29[0];
        }
        v26 = (unsigned int)(v26 + 1);
      }
      while ( (unsigned int)v26 < (unsigned __int8)v21 );
    }
    v29[1] = 0;
  }
  KiSearchForNewThreadsForRescheduleContext(v29, a8);
  LOBYTE(v14) = KiCommitRescheduleContext(v29, CurrentPrcb, 0LL, a8);
  v12 = v14;
LABEL_5:
  if ( a5 )
    LOBYTE(v14) = KiReleasePrcbLocksForIsolationUnit(v15);
  if ( a7 )
    _InterlockedAnd64(a7, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v12 )
  {
    KiCompleteRescheduleContext(v29, (__int64)CurrentPrcb);
    LOBYTE(v14) = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  }
  return v14;
}
