/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x140350330
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x1403502D8 (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402B2D80 (KiSetQuantumTargetThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B86C0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402BAD84 (KiPriQueueThreadPriorityChanged.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 *     KeSetQuantumProcess @ 0x140350DCC (KeSetQuantumProcess.c)
 *     EtwTracePriority @ 0x14046778E (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, UCHAR a3, int a4, int a5)
{
  __int64 result; // rax
  unsigned int v7; // edi
  int v9; // esi
  int v10; // r13d
  char v11; // r14
  __int64 CurrentIrql; // rcx
  int v13; // edi
  __int64 v14; // r9
  _QWORD *v15; // r15
  int v16; // r13d
  _KTHREAD *v17; // rbx
  char v18; // si
  int BasePriority; // r14d
  int v20; // edi
  char Saturation; // al
  char v22; // si
  char v23; // al
  volatile signed __int32 *p_Lock; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rax
  _KTHREAD *v27; // rbx
  char v28; // si
  int v29; // ecx
  int v30; // edi
  char v31; // al
  int v32; // esi
  int v33; // eax
  volatile signed __int32 *v34; // rcx
  int v35; // [rsp+30h] [rbp-50h]
  int Priority; // [rsp+34h] [rbp-4Ch]
  int v37; // [rsp+38h] [rbp-48h]
  int v38; // [rsp+3Ch] [rbp-44h]
  int v39; // [rsp+40h] [rbp-40h]
  __int64 v40; // [rsp+48h] [rbp-38h] BYREF
  int v41; // [rsp+50h] [rbp-30h] BYREF
  int v42; // [rsp+54h] [rbp-2Ch] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+58h] [rbp-28h]
  _KTHREAD *CurrentThread; // [rsp+60h] [rbp-20h]
  _QWORD *v45; // [rsp+68h] [rbp-18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-10h]
  __int64 v47; // [rsp+78h] [rbp-8h]
  int v48; // [rsp+C0h] [rbp+40h] BYREF
  char v49; // [rsp+C8h] [rbp+48h]
  int v50; // [rsp+D8h] [rbp+58h]

  v50 = a4;
  result = (unsigned int)*(char *)(a1 + 640);
  v48 = 0;
  v7 = a2;
  if ( (_DWORD)result == (_DWORD)a2 && (a4 == a5 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return v7;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    v35 = 0;
    v9 = 1;
    Priority = 0;
    if ( (_DWORD)a2 )
      v9 = a2;
    v49 = 0;
    v40 = 0LL;
    v39 = WORD2(PerfGlobalGroupMask) & 0x2000;
    v10 = 0;
    v11 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v47 = CurrentIrql;
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v26) = 4;
      if ( (_BYTE)CurrentIrql != 2 )
        v26 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v26;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( a3 )
      *(_BYTE *)(a1 + 641) = a3;
    v13 = *(char *)(a1 + 640);
    v37 = v13;
    v38 = v9 - v13;
    *(_BYTE *)(a1 + 640) = v9;
    KeFlushProcessWriteBuffers(1);
    v15 = *(_QWORD **)(a1 + 48);
    v45 = (_QWORD *)(a1 + 48);
    if ( v15 != (_QWORD *)(a1 + 48) )
    {
      if ( v9 < 16 )
      {
        v16 = a5;
        while ( 1 )
        {
          v17 = (_KTHREAD *)(v15 - 95);
          if ( a3 )
            v17->SchedulerApc.SpareByte1 = a3;
          v18 = v17 == CurrentThread;
          v42 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v42);
            while ( v17->ThreadLock );
          }
          BasePriority = v17->BasePriority;
          if ( BasePriority <= v13 || BasePriority < 16 )
            break;
          v17->ThreadLock = 0LL;
LABEL_36:
          v15 = (_QWORD *)*v15;
          if ( v15 == v45 )
            goto LABEL_37;
        }
        v20 = BasePriority + v38;
        if ( BasePriority + v38 >= 16 )
        {
          v20 = 15;
        }
        else if ( v20 <= 0 )
        {
          v20 = 1;
        }
        Saturation = v17->Saturation;
        v48 = v20;
        if ( Saturation )
        {
          if ( v37 < 16 )
          {
            v22 = 0;
            goto LABEL_33;
          }
          if ( Saturation > 0 )
            v20 = 15;
          else
            v20 = 1;
          v48 = v20;
        }
        KiSetQuantumTargetThread((__int64)(v15 - 95), (__int64)CurrentPrcb, v18, v14);
        if ( !v16 || (v22 = 0, v20 != BasePriority) )
        {
          v35 = KiSetBasePriorityAndClearDecrement((__int64)(v15 - 95), &v48, v50);
          v22 = 1;
        }
        v23 = 0;
        if ( v16 )
          v23 = KiApplyForegroundBoostThread(v15 - 95, &v40);
        if ( v22 )
        {
          if ( !v23 )
          {
            Priority = v17->Priority;
            if ( KiSetPriorityThread((__int64)(v15 - 95), (unsigned __int64)&v40, v35) )
            {
              v35 = v17->Priority;
              v49 = 1;
            }
          }
          p_Lock = &v17->Queue->Lock;
          if ( p_Lock && (*(_BYTE *)p_Lock & 0x7F) == 0x15 )
          {
            KiPriQueueThreadPriorityChanged(p_Lock, (__int64)(v15 - 95));
            v20 = v48;
            goto LABEL_34;
          }
          v20 = v48;
        }
LABEL_33:
        v17->ThreadLock = 0LL;
LABEL_34:
        if ( v39 )
        {
          if ( v49 )
          {
            v49 = 0;
            EtwTracePriority((_DWORD)v15 - 760, 1328, Priority, v35, 0LL);
          }
          if ( v22 )
          {
            if ( BasePriority != v20 )
              EtwTracePriority((_DWORD)v15 - 760, 1329, BasePriority, v20, (__int64)&v48);
          }
        }
        v13 = v37;
        goto LABEL_36;
      }
      do
      {
        v27 = (_KTHREAD *)(v15 - 95);
        if ( a3 )
          v27->SchedulerApc.SpareByte1 = a3;
        v28 = v27 == CurrentThread;
        v41 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v27->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v41);
          while ( v27->ThreadLock );
        }
        v29 = v27->BasePriority;
        v30 = v29 + v38;
        if ( v29 + v38 >= 16 )
        {
          if ( v30 > 31 )
            v30 = 31;
          v48 = v30;
        }
        else
        {
          v30 = 16;
          v48 = 16;
        }
        v31 = v27->Saturation;
        if ( v31 )
        {
          if ( v37 >= 16 )
          {
            v32 = Priority;
LABEL_82:
            v27->ThreadLock = 0LL;
            goto LABEL_83;
          }
          if ( v31 <= 0 )
            v48 = 16;
          else
            v48 = 31;
        }
        v10 = v29;
        KiSetQuantumTargetThread((__int64)(v15 - 95), (__int64)CurrentPrcb, v28, v14);
        v33 = KiSetBasePriorityAndClearDecrement((__int64)(v15 - 95), &v48, 0);
        v32 = v27->Priority;
        Priority = v32;
        v35 = v33;
        v11 = 1;
        if ( KiSetPriorityThread((__int64)(v15 - 95), (unsigned __int64)&v40, v33) )
        {
          v35 = v27->Priority;
          v49 = 1;
        }
        v34 = &v27->Queue->Lock;
        if ( !v34 || (*(_BYTE *)v34 & 0x7F) != 0x15 )
        {
          v30 = v48;
          goto LABEL_82;
        }
        KiPriQueueThreadPriorityChanged(v34, (__int64)(v15 - 95));
        v30 = v48;
LABEL_83:
        if ( v39 )
        {
          if ( v49 )
          {
            v49 = 0;
            EtwTracePriority((_DWORD)v15 - 760, 1328, v32, v35, 0LL);
          }
          if ( v11 )
          {
            v11 = 0;
            if ( v10 != v30 )
              EtwTracePriority((_DWORD)v15 - 760, 1329, v10, v30, (__int64)&v48);
          }
        }
        v15 = (_QWORD *)*v15;
      }
      while ( v15 != v45 );
    }
LABEL_37:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    KiProcessDeferredReadyList((__int64)CurrentPrcb, &v40, v47);
    return (unsigned int)v37;
  }
  return result;
}
