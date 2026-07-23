/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x140299730
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x140299A7C (CcFindNextWorkQueueEntry.c)
 *     CcWriteBehind @ 0x14029B7E8 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x14029C620 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14029C6C0 (CcDereferencePartition.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcCachemapUninitWorkerThread(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 NextWorkQueueEntry; // rsi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax
  unsigned __int64 OldIrql; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  __int64 v21; // [rsp+50h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-B8h] BYREF
  _DWORD v23[2]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-98h]
  _QWORD v25[6]; // [rsp+80h] [rbp-90h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-60h] BYREF
  __int64 i; // [rsp+B8h] [rbp-58h]
  _QWORD *v28; // [rsp+C8h] [rbp-48h] BYREF
  int v29; // [rsp+D0h] [rbp-40h]
  int v30; // [rsp+D4h] [rbp-3Ch]
  __int64 *v31; // [rsp+D8h] [rbp-38h] BYREF
  int v32; // [rsp+E0h] [rbp-30h]
  int v33; // [rsp+E4h] [rbp-2Ch]

  v23[1] = 0;
  v25[2] = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v23[0] = 0;
  v24 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1CF8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 56);
  v21 = v2;
  v25[3] = v2;
  v3 = *(_QWORD *)(a1 + 72);
  v25[4] = v3;
  v4 = *(_QWORD *)(a1 + 64);
  v25[5] = v4;
  v5 = v3 + 120;
  for ( i = v3 + 120; ; v5 = i )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v6, v3, v5);
    v25[1] = NextWorkQueueEntry;
    if ( !NextWorkQueueEntry )
      break;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    {
      v25[0] = NextWorkQueueEntry;
      v28 = v25;
      v29 = 8;
      v30 = 0;
      EtwTraceKernelEvent((int)&v28, 1, 0x80020000, 5633, 4200706);
    }
    if ( *(_DWORD *)(NextWorkQueueEntry + 128) == 2 )
    {
      v24 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), v23, v3);
    }
    v2 = v21;
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    {
      v26 = NextWorkQueueEntry;
      v31 = &v26;
      v32 = 8;
      v33 = 0;
      EtwTraceKernelEvent((int)&v31, 1, 0x80020000, 5634, 4200706);
    }
    CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
  }
  v8 = *(_QWORD **)(v3 + 168);
  if ( *v8 != v3 + 160 )
    __fastfail(3u);
  *(_QWORD *)a1 = v3 + 160;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(v3 + 168) = a1;
  --*(_DWORD *)(v3 + 176);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  __writecr8(v9);
  result = CcDereferencePartition(v2);
  if ( v4 )
  {
    result = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 8));
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
