/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x14025B1B0
 * Callers:
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 * Callees:
 *     MiRelinkDecayClusterTimer @ 0x14021A99C (MiRelinkDecayClusterTimer.c)
 *     MiRelinkStandbyPage @ 0x14025A9F0 (MiRelinkStandbyPage.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14025B690 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkDecayClusterTimer @ 0x140347E30 (MiUnlinkDecayClusterTimer.c)
 *     MiDecayNodeNowEmpty @ 0x14034ABE0 (MiDecayNodeNowEmpty.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B63C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 result; // rax
  unsigned __int8 v3; // cl
  __int64 v4; // r12
  int v5; // edi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  volatile LONG *v9; // rsi
  unsigned __int8 v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rbx
  volatile signed __int64 *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edi
  _DWORD *v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  bool v35; // cf
  unsigned __int8 v36; // cl
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v44; // [rsp+60h] [rbp+8h]
  unsigned int v45; // [rsp+68h] [rbp+10h]

  v44 = a1;
  v1 = a1;
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  if ( result - *(_QWORD *)(v1 + 15784) < 0x989680 )
    return result;
  *(_QWORD *)(v1 + 15784) = result;
  v4 = v1 + 8LL * (*(_DWORD *)(v1 + 15776) & 3);
  v5 = ((*(_BYTE *)(v1 + 15776) & 3) + 1) & 3;
  v45 = v5;
  if ( *(_QWORD *)(v4 + 15744) >> 33 == 0x7FFFFFFFLL )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v3) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v8) = 4;
      else
        v8 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v8;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68180);
    if ( *(_QWORD *)(v4 + 15744) >> 33 == 0x7FFFFFFFLL )
    {
      *(_DWORD *)(v1 + 15776) = v5;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
      if ( (_DWORD)KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      goto LABEL_7;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
    if ( (_DWORD)KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    __writecr8(CurrentIrql);
  }
  v9 = (volatile LONG *)(v1 + 3416);
  while ( 1 )
  {
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
    {
      v19 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v10 == 2 )
        LODWORD(v20) = 4;
      else
        v20 = (-1LL << (v10 + 1)) & 4;
      v19[5] |= v20;
    }
    ExAcquireSpinLockSharedAtDpcLevel(v9);
    LOBYTE(v11) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C68180, v11);
    else
      ExpAcquireSpinLockExclusive(&dword_140C68180, v11);
    v12 = *(_QWORD *)(v4 + 15744) >> 33;
    if ( v12 == 0x7FFFFFFF )
      break;
    v13 = v12 + qword_140C68160;
    v14 = 48 * (v12 + qword_140C68160) - 0x220000000000LL;
    v15 = (volatile signed __int64 *)(v14 + 24);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C68180, retaddr);
      else
        dword_140C68180 = 0;
      v16 = *(_QWORD *)(v14 + 16);
      if ( qword_140C65B40 && (v16 & 0x10) == 0 )
        v16 &= ~qword_140C65B40;
      v17 = (v16 >> 12) & 0xFFFFFFFFFFLL;
      if ( v17 == v13 )
      {
        if ( (*(_BYTE *)(v14 + 35) & 8) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68180);
          MiUnlinkDecayClusterTimer(v14);
          MiRelinkDecayClusterTimer(v14, v45);
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
        }
        else
        {
          MiDecayNodeNowEmpty(v13);
        }
        ExReleaseSpinLockSharedFromDpcLevel(v9);
LABEL_29:
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !(_DWORD)KiIrqlFlags )
          goto LABEL_30;
        v36 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v36 > 0xFu || v10 > 0xFu )
          goto LABEL_30;
        v35 = v36 < 2u;
      }
      else
      {
        v14 = 48 * v17 - 0x220000000000LL;
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          _InterlockedAnd64(v15, 0x7FFFFFFFFFFFFFFFuLL);
          v18 = *(_BYTE *)(v14 + 35) & 7;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
          }
          else
          {
            _InterlockedAnd(v9, 0xBFFFFFFF);
            _InterlockedDecrement(v9);
          }
          MiRelinkStandbyPage(v14, v18);
          goto LABEL_29;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v9);
        _InterlockedAnd64(v15, 0x7FFFFFFFFFFFFFFFuLL);
        if ( !(_DWORD)KiIrqlFlags )
          goto LABEL_30;
        v34 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v34 > 0xFu || v10 > 0xFu )
          goto LABEL_30;
        v35 = v34 < 2u;
      }
      if ( !v35 )
      {
        v31 = KeGetCurrentPrcb();
        v37 = v31->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v25 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v25 )
          goto LABEL_82;
      }
      goto LABEL_30;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    if ( (_DWORD)KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v10 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v25 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v25 )
LABEL_82:
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
LABEL_30:
    __writecr8(v10);
  }
  *(_DWORD *)(v44 + 15776) = v45;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68180);
  ExReleaseSpinLockSharedFromDpcLevel(v9);
  if ( (_DWORD)KiIrqlFlags )
  {
    v39 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && v10 <= 0xFu && v39 >= 2u )
    {
      v40 = KeGetCurrentPrcb();
      v41 = v40->SchedulerAssist;
      v42 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v25 = (v42 & v41[5]) == 0;
      v41[5] &= v42;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
  result = v10;
LABEL_7:
  __writecr8(result);
  return result;
}
