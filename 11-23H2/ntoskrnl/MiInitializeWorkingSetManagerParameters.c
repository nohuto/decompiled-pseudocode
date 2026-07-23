/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x1403AF1FC
 * Callers:
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x1403AC88C (MmCreatePartition.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiSetTrimWhileAgingState @ 0x14036AF64 (MiSetTrimWhileAgingState.c)
 *     KeGenericCallDpcEx @ 0x1403C68D0 (KeGenericCallDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  int v4; // r13d
  _QWORD *v5; // rax
  KIRQL v6; // al
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // [rsp+20h] [rbp-30h]
  _QWORD v26[3]; // [rsp+38h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 16920);
  v26[0] = 0LL;
  if ( v1 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)MiAllocatePool(64, 0xA60uLL, 0x64576D4Du);
    v1 = result;
    if ( !result )
      return result;
    *(_WORD *)result = 0;
    v4 = 1;
    *(_BYTE *)(result + 2) = 6;
    *(_DWORD *)(result + 4) = 1;
    v5 = (_QWORD *)(result + 8);
    v5[1] = v5;
    *v5 = v5;
    *(_DWORD *)(v1 + 36) = 256;
    *(_DWORD *)(v1 + 136) = 256;
    *(_BYTE *)(a1 + 17528) = *(_BYTE *)(a1 + 17528) & 0xF8 | 2;
  }
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  v7 = *(_QWORD *)(a1 + 16144);
  v8 = *(_QWORD *)(a1 + 17040);
  v25 = *(_QWORD *)(a1 + 16136);
  v9 = v6;
  *(_BYTE *)(a1 + 12) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v9 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v24 = (v23 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    v10 = *(_QWORD *)(v1 + 2648);
    if ( v8 <= v10 )
      *(_QWORD *)(v1 + 2648) = -1LL;
    else
      v8 -= v10;
    v11 = 135168LL;
    if ( v8 < 0x21000 )
    {
      v8 = 135168LL;
      goto LABEL_10;
    }
  }
  v11 = v8;
  if ( v8 <= 0x200000 )
  {
LABEL_10:
    v12 = v8 >> 5;
    v13 = v8 >> 5;
    goto LABEL_11;
  }
  v12 = ((v8 - 0x200000) >> 7) + 0x10000;
  v13 = v8 >> 5;
LABEL_11:
  v14 = 1152LL;
  if ( v12 >= 0x480 )
  {
    v14 = v12;
    if ( v12 > 0x400000 )
      v14 = 0x400000LL;
  }
  *(_QWORD *)(v1 + 2384) = v14;
  if ( v8 > 0x80000 )
    v13 = ((v8 - 0x80000) >> 8) + 0x4000;
  if ( v13 < 0x121 )
  {
    v13 = 289LL;
  }
  else if ( v13 > 0x100000 )
  {
    v13 = 0x100000LL;
  }
  v15 = v14 >> 2;
  *(_QWORD *)(v1 + 2392) = v13;
  *(_QWORD *)(v1 + 2400) = v13;
  if ( v15 < 0x121 )
    v15 = 289LL;
  *(_QWORD *)(v1 + 2376) = v15;
  if ( v4 )
    *(_QWORD *)(a1 + 16920) = v1;
  MiSetTrimWhileAgingState(a1, 3);
  v16 = 100LL;
  if ( v8 / 0x3E8 > 0x64 )
    v16 = v8 / 0x3E8;
  if ( v16 > v8 )
  {
    v16 = v8 >> 1;
    if ( !(v8 >> 1) )
      v16 = 1LL;
  }
  *(_QWORD *)(v1 + 56) = v16;
  if ( v4 )
  {
    *(_WORD *)(v1 + 96) = 1;
    *(_QWORD *)(v1 + 112) = v1 + 104;
    *(_QWORD *)(v1 + 104) = v1 + 104;
    *(_BYTE *)(v1 + 98) = 6;
    *(_DWORD *)(v1 + 100) = 0;
    if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    {
      LOWORD(Event.Header.Lock) = 0;
      Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
      Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
      Event.Header.Size = 6;
      Event.Header.SignalState = 0;
    }
  }
  v17 = v25;
  if ( !v25 )
  {
    v18 = *(_QWORD *)(v1 + 2384);
    if ( 2 * v18 > v8 )
    {
      if ( v8 && v8 >= v18 && (v8 - v18) >> 1 )
        v17 = ((v8 - v18) >> 1) + v18;
      else
        v17 = 1LL;
    }
    else
    {
      v17 = 2 * v18;
    }
  }
  v26[0] = v17;
  if ( v7 )
  {
    if ( v7 < v17 )
      v17 = v7;
    v26[0] = v17;
  }
  else
  {
    v7 = v17;
    if ( v17 <= v11 )
    {
      v19 = 2 * v17;
      if ( v19 > v8 )
        v7 += (v11 - v7) >> 1;
      else
        v7 = v19;
    }
  }
  v26[1] = v7;
  v26[2] = a1;
  KeGenericCallDpcEx(MiUpdatePageThresholdsDpc, v26);
  return 1LL;
}
