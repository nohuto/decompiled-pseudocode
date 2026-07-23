/*
 * XREFs of PopCompleteNotifyTransitionCommon @ 0x14059052C
 * Callers:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1405904A4 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopSystemIrpCompletion @ 0x140AA7680 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7170 (KeReleaseSemaphoreEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPrepChildWake @ 0x140590924 (PopPrepChildWake.c)
 *     PopReadyChildWake @ 0x140590994 (PopReadyChildWake.c)
 *     PopReadyParentSleep @ 0x140590A20 (PopReadyParentSleep.c)
 *     PopDiagTraceDriverVeto @ 0x140AA7B00 (PopDiagTraceDriverVeto.c)
 */

void __fastcall PopCompleteNotifyTransitionCommon(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  bool v8; // r12
  char v9; // r13
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rax
  __int64 **v18; // rdx
  __int64 *i; // r14
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rax
  __int64 **v27; // rdx
  __int64 *v28; // r15
  __int64 *v29; // r11
  __int64 *j; // r10
  __int64 *v31; // r10
  int v32; // eax
  struct _KLOCK_QUEUE_HANDLE v33[4]; // [rsp+30h] [rbp-68h] BYREF

  v4 = (_QWORD *)*(a2 - 19);
  v5 = a1;
  memset(v33, 0, 24);
  v6 = 0LL;
  v8 = (DWORD1(PopCurrentBroadcast) & 0x800000) != 0;
  if ( (PVOID)*(a2 - 18) != IopRootDeviceNode )
    v6 = *(a2 - 18);
  v9 = 0;
  v10 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140C3CDB0 + 1, v33);
  v13 = v5 + 48;
  v14 = (__int64 *)*a2;
  v15 = 9LL * *((unsigned __int8 *)a2 + 56);
  v16 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v16 != a2 )
    goto LABEL_53;
  *v16 = v14;
  v14[1] = (__int64)v16;
  if ( *(_BYTE *)(v5 + 464) )
  {
    v17 = v5 + 72 + 8 * v15;
    v18 = *(__int64 ***)(v17 + 8);
    if ( *v18 == (__int64 *)v17 )
    {
      *a2 = v17;
      a2[1] = (__int64)v18;
      *v18 = a2;
      *(_QWORD *)(v17 + 8) = a2;
      ++*(_DWORD *)(v13 + 8 * v15 + 20);
      while ( v4 )
      {
        LOBYTE(v11) = *((_BYTE *)a2 + 56);
        LOBYTE(v12) = v8;
        if ( (unsigned __int8)PopReadyChildWake(v4 + 20, v5 + 48, v11, v12) )
          ++v10;
        v4 = (_QWORD *)*v4;
      }
      for ( i = (__int64 *)a2[2]; i != a2 + 2; i = (__int64 *)*i )
      {
        LOBYTE(v11) = *((_BYTE *)a2 + 56);
        LOBYTE(v12) = v8;
        if ( (unsigned __int8)PopReadyChildWake(*(i - 1), v5 + 48, v11, v12) )
          ++v10;
      }
      goto LABEL_17;
    }
LABEL_53:
    __fastfail(3u);
  }
  v26 = v5 + 104 + 8 * v15;
  v27 = *(__int64 ***)(v26 + 8);
  if ( *v27 != (__int64 *)v26 )
    goto LABEL_53;
  *a2 = v26;
  a2[1] = (__int64)v27;
  *v27 = a2;
  *(_QWORD *)(v26 + 8) = a2;
  --*(_DWORD *)(v13 + 8 * v15 + 20);
  if ( v6 )
  {
    LOBYTE(v11) = *((_BYTE *)a2 + 56);
    LOBYTE(v12) = v8;
    v10 = (unsigned __int8)PopReadyParentSleep(v6 + 160, v5 + 48, v11, v12) != 0;
  }
  v28 = (__int64 *)a2[4];
  if ( v28 != a2 + 4 )
  {
    do
    {
      LOBYTE(v11) = *((_BYTE *)a2 + 56);
      LOBYTE(v12) = v8;
      if ( (unsigned __int8)PopReadyParentSleep(v28[5], v13, v11, v12) )
        ++v10;
      v28 = (__int64 *)*v28;
    }
    while ( v28 != a2 + 4 );
    v5 = a1;
  }
  while ( v4 )
  {
    LOBYTE(v11) = v8;
    PopPrepChildWake(v4 + 20, v13, v11);
    v4 = (_QWORD *)*v4;
  }
  v29 = a2 + 2;
  for ( j = (__int64 *)a2[2]; j != v29; j = (__int64 *)*v31 )
  {
    LOBYTE(v11) = v8;
    PopPrepChildWake(*(j - 1), v13, v11);
  }
  v32 = a3;
  if ( a3 >= 0 )
    goto LABEL_49;
  if ( a4 && *(_BYTE *)v5 == 3 )
  {
    PopDiagTraceDriverVeto(a4, a2);
    v32 = a3;
  }
  if ( *(_BYTE *)(v5 + 466) || v32 == -1073741637 && *(_BYTE *)(v5 + 467) )
  {
LABEL_49:
    v9 = 0;
  }
  else if ( *(int *)(v5 + 448) < 0 )
  {
    v9 = 0;
  }
  else
  {
    *(_DWORD *)(v5 + 448) = v32;
    v9 = 1;
    *(_QWORD *)(v5 + 456) = a2[8];
  }
LABEL_17:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v33);
  OldIrql = v33[0].OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v33[0].OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (v33[0].OldIrql + 1));
      v25 = (v24 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v9 )
  {
    KeSetEvent(*(PRKEVENT *)(v5 + 24), 0, 0);
  }
  else if ( v10 )
  {
    KeReleaseSemaphoreEx(*(_QWORD *)(v5 + 32), 0, v10);
  }
}
