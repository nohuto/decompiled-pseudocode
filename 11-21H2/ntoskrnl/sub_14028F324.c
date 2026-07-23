/*
 * XREFs of sub_14028F324 @ 0x14028F324
 * Callers:
 *     sub_140242F10 @ 0x140242F10 (sub_140242F10.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 * Callees:
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028F63C @ 0x14028F63C (sub_14028F63C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140376F34 @ 0x140376F34 (sub_140376F34.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 *     sub_1407BE350 @ 0x1407BE350 (sub_1407BE350.c)
 */

__int64 __fastcall sub_14028F324(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r14
  _QWORD *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  PVOID MappedSystemVa; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  KIRQL OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+A0h] [rbp-D0h]
  __int64 v23; // [rsp+A8h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-A8h]
  _QWORD *v26; // [rsp+D0h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-98h]
  __int64 v28; // [rsp+E0h] [rbp-90h]
  __int64 v29; // [rsp+E8h] [rbp-88h]
  PMDL MemoryDescriptorList; // [rsp+F0h] [rbp-80h]
  PVOID v31; // [rsp+F8h] [rbp-78h]
  int v32[2]; // [rsp+100h] [rbp-70h]
  __int64 v33; // [rsp+108h] [rbp-68h]
  __int64 v34; // [rsp+110h] [rbp-60h]
  __int64 v35; // [rsp+118h] [rbp-58h]
  struct _KTHREAD *v36; // [rsp+120h] [rbp-50h]
  __int64 v37; // [rsp+188h] [rbp+18h] BYREF
  unsigned int v38; // [rsp+190h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  sub_14033D720(CurrentThread);
  LODWORD(v37) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v28 = v2;
  *(_QWORD *)v32 = *(_QWORD *)(a1 + 32);
  v38 = *(_DWORD *)(a1 + 40);
  v22 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v33 = *(_QWORD *)(a1 + 72);
  v3 = v33;
  v4 = *(_QWORD **)(a1 + 80);
  v26 = v4;
  v23 = *(_QWORD *)(a1 + 104);
  v25 = v23;
  v5 = *(_QWORD *)(a1 + 120);
  v29 = v5;
  sub_14028F63C(v6);
  v36 = KeGetCurrentThread();
  *((_QWORD *)v36 + 162) = 7LL;
  if ( *(int *)v3 < 0 )
  {
    v9 = v23;
  }
  else
  {
    *(_DWORD *)v3 = 0;
    v7 = v38;
    *(_QWORD *)(v3 + 8) = v38;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v7 = v38;
    }
    v31 = MappedSystemVa;
    if ( MappedSystemVa )
      sub_1407BDF60(v32[0], MappedSystemVa, (__int64)&v37, v22, v23, 0LL);
    else
      *(_DWORD *)v3 = -1073741670;
    v9 = v23;
  }
  if ( v9 )
    sub_140366814(v9);
  if ( (_DWORD)v37 )
    ++qword_140D01808;
  if ( v4 && *v4 )
    sub_14042A5E0(v4[1], v7);
  *((_QWORD *)KeGetCurrentThread() + 162) = 0LL;
  sub_14028F63C(CurrentThread);
  _InterlockedAdd((volatile signed __int32 *)(v2 + 520), 0xFFFFFFFF);
  if ( !byte_140C498C1 )
  {
    v10 = *(_QWORD *)(v2 + 504);
    v34 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v5) / stru_140C49888.QuadPart;
    sub_1407BE350(v34, v10 + 1224, v10 + 1320);
    ++*(_QWORD *)(v10 + 1208);
    if ( v11 > *(_QWORD *)(v10 + 1216) )
      *(_QWORD *)(v10 + 1216) = v11;
  }
  v12 = *(_QWORD *)(a1 + 136);
  v35 = v12;
  if ( v12 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x702uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 704), &LockHandle);
  sub_140282AF4(v2, v13, v14);
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
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
