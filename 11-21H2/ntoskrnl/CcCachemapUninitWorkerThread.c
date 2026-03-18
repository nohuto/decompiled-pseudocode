/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x140275000
 * Callers:
 *     <none>
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x140275290 (CcFindNextWorkQueueEntry.c)
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

int __fastcall CcCachemapUninitWorkerThread(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 NextWorkQueueEntry; // rsi
  unsigned __int64 OldIrql; // r13
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  signed __int64 v16; // rax
  bool v17; // cc
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-B8h] BYREF
  _DWORD v25[2]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-98h]
  _QWORD v27[6]; // [rsp+80h] [rbp-90h] BYREF
  _QWORD v28[3]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD *v29; // [rsp+C8h] [rbp-48h] BYREF
  int v30; // [rsp+D0h] [rbp-40h]
  int v31; // [rsp+D4h] [rbp-3Ch]
  _QWORD *v32; // [rsp+D8h] [rbp-38h] BYREF
  int v33; // [rsp+E0h] [rbp-30h]
  int v34; // [rsp+E4h] [rbp-2Ch]

  v25[1] = 0;
  v27[2] = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v25[0] = 0;
  v26 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1CDFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 56);
  v23 = v2;
  v27[3] = v2;
  v3 = *(_QWORD *)(a1 + 72);
  v27[4] = v3;
  v4 = *(_QWORD *)(a1 + 64);
  v27[5] = v4;
  v28[1] = v3 + 120;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v5, v3);
    v27[1] = NextWorkQueueEntry;
    if ( !NextWorkQueueEntry )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140D06910 & 0x20000) != 0 )
    {
      v27[0] = NextWorkQueueEntry;
      v29 = v27;
      v30 = 8;
      v31 = 0;
      EtwTraceKernelEvent((unsigned int)&v29, 1, -2147352576, 5633, 4200706);
    }
    if ( *(_BYTE *)(NextWorkQueueEntry + 128) == 2 )
    {
      v26 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), v25, v3);
    }
    v2 = v23;
    if ( (xmmword_140D06910 & 0x20000) != 0 )
    {
      v28[0] = NextWorkQueueEntry;
      v32 = v28;
      v33 = 8;
      v34 = 0;
      EtwTraceKernelEvent((unsigned int)&v32, 1, -2147352576, 5634, 4200706);
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
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
  }
  __writecr8(v9);
  LODWORD(v10) = CcDereferencePartition(v2);
  if ( v4 )
  {
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v17 = v16 <= 1;
    v10 = v16 - 1;
    if ( v17 )
    {
      if ( v10 )
        __fastfail(0xEu);
      LODWORD(v10) = KeSetEvent((PRKEVENT)(v4 + 1200), 0, 0);
    }
  }
  return v10;
}
