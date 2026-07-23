/*
 * XREFs of CmpReportNotifyHelper @ 0x1406D5470
 * Callers:
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     CmpTransIsTransActive @ 0x140616A0C (CmpTransIsTransActive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57D0 (CmpGetKcbAtLayerHeight.c)
 *     CmpDelayedDerefKeys @ 0x1406D589C (CmpDelayedDerefKeys.c)
 *     CmpNotifyTriggerCheck @ 0x1407669D4 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140766A50 (CmpPostNotify.c)
 */

__int64 __fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int32 *v9; // r15
  __int64 KcbAtLayerHeight; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 *i; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // edx
  int v22; // r8d
  unsigned __int8 v23; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  _QWORD v28[2]; // [rsp+40h] [rbp-38h] BYREF

  v28[1] = v28;
  v28[0] = v28;
  v9 = (volatile signed __int32 *)(a2 + 1680);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  v11 = KeAbPreAcquire((__int64)v9, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64(v9, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1680), v11, a2 + 1680);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(__int64 **)(a2 + 1592); i; i = (__int64 *)*i )
  {
    v16 = i[4];
    if ( (*(_DWORD *)(v16 + 8) & 0x7FE00000u) > (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & (_DWORD)i[6] & 0x3FFFFFFF) != 0 && ((i[6] & 0x40000000) != 0 || v16 == KcbAtLayerHeight) )
    {
      v17 = *(_QWORD *)(i[5] + 56);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v17) && (!v17 || (unsigned int)CmpTransIsTransActive(v17)) )
      {
        v18 = i[4];
        v19 = KcbAtLayerHeight;
        v20 = (*(_DWORD *)(v18 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FFu) > v20 )
        {
          do
            v19 = *(_QWORD *)(v19 + 72);
          while ( ((*(_DWORD *)(v19 + 8) >> 21) & 0x3FFu) > v20 );
        }
        if ( v19 == v18 && (unsigned __int8)CmpNotifyTriggerCheck(i, a1, a3) )
          CmpPostNotify((_DWORD)i, v21, v22, 268, 0, (__int64)v28, a5);
      }
    }
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v27 = (v26 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v26;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return CmpDelayedDerefKeys(v28);
}
