/*
 * XREFs of CcAsyncCopyRead @ 0x1402F5790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402768E4 @ 0x1402768E4 (sub_1402768E4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F574C @ 0x1402F574C (sub_1402F574C.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_1402F5EA0 @ 0x1402F5EA0 (sub_1402F5EA0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140811AB4 @ 0x140811AB4 (sub_140811AB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  _DWORD *v15; // r9
  __int64 v16; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v18; // r9
  _SLIST_ENTRY *v19; // rax
  _SLIST_ENTRY *v20; // r15
  NTSTATUS v21; // ebp
  volatile signed __int64 *v22; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r9
  int v27; // eax
  bool v28; // zf
  PSLIST_ENTRY v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rdx
  PSLIST_ENTRY v34; // rbp
  __int64 v36; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v39; // [rsp+98h] [rbp+10h]

  v39 = a2;
  ListEntry = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  v13 = *(_QWORD *)(v12 + 528);
  v36 = v13;
  v14 = sub_1402F574C(v12);
  v16 = v14;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x3FDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( byte_140D01800 && (*v15 & 0x20000) != 0 )
    sub_14029CC2C(Object, a2, a3, a7, v14);
  ++qword_140C498E8;
  if ( !byte_140C498C1 && byte_140C49880 && !dword_140C499D0 && !dword_140C499D4 )
    sub_140811AB4(stru_140C498A0);
  v18 = *(unsigned int *)(v16 + 24);
  LODWORD(v18) = v18 | 0x80000000;
  v19 = (_SLIST_ENTRY *)sub_140349710(512LL, 8LL, 1933665091LL, v18, 0);
  v20 = v19;
  if ( !v19 )
    RtlRaiseStatus(-1073741670);
  v19->Next = 0LL;
  v21 = sub_1402768E4(v13, *(_QWORD *)(v12 + 592), v16, (__int64 *)&ListEntry);
  if ( v21 < 0 )
  {
    ExFreePoolWithTag(v20, 0x73416343u);
    RtlRaiseStatus(v21);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  v22 = *(volatile signed __int64 **)(*((_QWORD *)CurrentThread + 68) + 2232LL);
  if ( v22 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(v22, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(v22 + 2, 1uLL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 704), &LockHandle);
  ++*(_DWORD *)(v12 + 4);
  ++*(_DWORD *)(v12 + 536);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = *((_QWORD *)CurrentPrcb + 4375);
        v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v27;
        if ( v28 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 520));
  v29 = ListEntry;
  v30 = v39;
  LOBYTE(ListEntry[8].Next) = 5;
  v29[1].Next = (_SLIST_ENTRY *)v12;
  v31 = a8;
  v29[2].Next = Object;
  *((_QWORD *)&v29[1].Next + 1) = *v30;
  *((_DWORD *)&v29[2].Next + 2) = a3;
  v29[3].Next = v20;
  v29[4].Next = *(_SLIST_ENTRY **)(v31 + 16);
  *((_QWORD *)&v29[4].Next + 1) = a6;
  v29[5].Next = (_SLIST_ENTRY *)v31;
  v32 = sub_14033D720(CurrentThread);
  *(_DWORD *)(v33 + 56) = v32;
  v34 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = *((_QWORD *)KeGetCurrentThread() + 23);
  v34[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v34[7].Next) = *(_BYTE *)(v31 + 24);
  HIDWORD(v34[7].Next) = *(_DWORD *)(v31 + 28);
  *((LARGE_INTEGER *)&v34[7].Next + 1) = PerformanceCounter;
  *((_QWORD *)&v34[6].Next + 1) = 0LL;
  sub_1402F5EA0(CurrentThread, &v34[6].Next + 1);
  if ( *(_DWORD *)(v31 + 28) > (unsigned int)dword_140C49B10 )
    KeBugCheckEx(0x34u, 0x4A3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  sub_1402F5AEC(v34);
  return 1;
}
