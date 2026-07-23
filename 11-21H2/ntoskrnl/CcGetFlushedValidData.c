/*
 * XREFs of CcGetFlushedValidData @ 0x14027FB60
 * Callers:
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 * Callees:
 *     sub_140242ECC @ 0x140242ECC (sub_140242ECC.c)
 *     sub_14027FC48 @ 0x14027FC48 (sub_14027FC48.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 v5; // r13
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  int v23; // eax
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  __int64 v27; // r9
  int v28; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v32; // r8
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v34, 0, sizeof(v34));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
LABEL_3:
    v5 = *((_QWORD *)SharedCacheMap + 66);
    if ( *(_QWORD *)(sub_14027FC48(SectionObjectPointer) + 8) != v5 )
      KeBugCheckEx(0x34u, 0x206BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v6 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v8 = *((_QWORD *)SharedCacheMap + 20);
      if ( v8 && *(_DWORD *)(v8 + 8) )
      {
        v9 = sub_140242ECC(v8, 0LL);
        v6.QuadPart = (v9[2] + *((unsigned int *)v9 + 6)) << 12;
      }
      v10 = SharedCacheMap + 16;
      v11 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v12 = (__int64)(v11 - 2);
      while ( v11 != v10 && (*(_WORD *)v12 != 765 || !*(_BYTE *)(v12 + 2)) )
      {
        v12 = *v11 - 16LL;
        v11 = (_QWORD *)*v11;
      }
      if ( (_QWORD *)(v12 + 16) != v10 && *(_QWORD *)(v12 + 8) < v6.QuadPart )
        v6 = *(LARGE_INTEGER *)(v12 + 8);
    }
    if ( !BcbListHeld )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &v34);
      sub_140282AF4(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
      OldIrql = v34.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v34.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = *((_QWORD *)CurrentPrcb + 4375);
            v33 = ~(unsigned __int16)(-1LL << (v34.OldIrql + 1));
            v18 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v18 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v6;
  }
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 66) + 704LL), &v34);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
    v19 = v34.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && v34.OldIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = *((_QWORD *)v21 + 4375);
          v23 = ~(unsigned __int16)(-1LL << (v34.OldIrql + 1));
          v18 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v18 )
            sub_140418E4C(v21);
        }
      }
    }
    __writecr8(v19);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v24 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v18 )
            sub_140418E4C(v26);
        }
      }
    }
    __writecr8(v24);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
    goto LABEL_3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = *((_QWORD *)v15 + 4375);
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(v15);
      }
    }
  }
  __writecr8(v13);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
