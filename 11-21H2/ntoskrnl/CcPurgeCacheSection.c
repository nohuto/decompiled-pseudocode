/*
 * XREFs of CcPurgeCacheSection @ 0x14027F0E0
 * Callers:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_140276BF8 @ 0x140276BF8 (sub_140276BF8.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14027EF40 (CcCoherencyFlushAndPurgeCache.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     sub_14028866C @ 0x14028866C (sub_14028866C.c)
 * Callees:
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_14027F03C @ 0x14027F03C (sub_14027F03C.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     MmCanFileBeTruncated @ 0x14027F960 (MmCanFileBeTruncated.c)
 *     sub_14027FC48 @ 0x14027FC48 (sub_14027FC48.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v7; // r12d
  char *SharedCacheMap; // rbx
  unsigned __int64 v9; // r15
  BOOLEAN v10; // r15
  bool v12; // zf
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  int v15; // r15d
  char v16; // al
  unsigned __int64 v17; // rbx
  LONGLONG QuadPart; // rax
  int v19; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // edx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  __int64 v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  __int64 v31; // r9
  int v32; // eax
  _QWORD *i; // r15
  unsigned __int64 v34; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  __int64 v37; // r8
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  int v42; // eax
  _BYTE v43[4]; // [rsp+30h] [rbp-50h] BYREF
  int v44; // [rsp+34h] [rbp-4Ch]
  __int64 v45; // [rsp+38h] [rbp-48h]
  char *v46; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v51; // [rsp+D8h] [rbp+58h]

  v51 = Flags;
  v44 = -1;
  v43[0] = 0;
  v7 = 0;
  v45 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v47, 0, sizeof(v47));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v46 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    v12 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v13 = *((_QWORD *)SharedCacheMap + 66);
    v45 = v13;
    if ( !v12 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
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
              v23 = *((_QWORD *)CurrentPrcb + 4375);
              v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v12 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
              *(_DWORD *)(v23 + 20) &= v24;
              if ( v12 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        return 1;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 704), &v47);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
    v14 = v47.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v47.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(-1LL << (v47.OldIrql + 1));
          v12 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v12 )
            sub_140418E4C(v26);
        }
      }
    }
    __writecr8(v14);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = *((_QWORD *)v30 + 4375);
        v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
        *(_DWORD *)(v31 + 20) &= v32;
        if ( v12 )
          sub_140418E4C(v30);
      }
    }
  }
  __writecr8(v9);
  if ( !SharedCacheMap )
    goto LABEL_4;
  v15 = (int)SectionObjectPointer;
  if ( v45 != *(_QWORD *)(sub_14027FC48(SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x139EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v16 = v51;
  if ( (v51 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v15 = (int)SectionObjectPointer;
    v16 = v51;
  }
  if ( (v16 & 8) == 0 )
  {
    sub_1402853B0((_DWORD)SharedCacheMap, (_DWORD)FileOffset, Length, 0, 1, 0);
    goto LABEL_16;
  }
  if ( (int)sub_14027F03C(v15, (__int64 *)FileOffset, Length, 0) >= 0 )
  {
LABEL_16:
    if ( FileOffset )
      v7 = 1;
LABEL_4:
    if ( (v51 & 4) != 0 )
    {
      v44 = 5;
      v7 |= 2u;
    }
    v10 = sub_14027F360((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, Length, v7, (__int64)v43);
    if ( !v10 )
    {
      v19 = v44;
      do
      {
        if ( Length )
          break;
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v51 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &stru_140C0CAC8);
        if ( !--v19 )
          break;
        v10 = sub_14027F360((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, 0, v7, (__int64)v43);
      }
      while ( !v10 );
      SharedCacheMap = v46;
    }
    if ( SharedCacheMap )
    {
      if ( !Length )
      {
        if ( FileOffset )
        {
          QuadPart = FileOffset->QuadPart;
          if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 46) )
          {
            SectionPointera = (PSECTION_OBJECT_POINTERS)(QuadPart + 0x3FFFF);
            LODWORD(SectionPointera) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
            *((_QWORD *)SharedCacheMap + 46) = (char *)SectionPointera + 0x40000;
          }
        }
        else
        {
          *((_QWORD *)SharedCacheMap + 46) = 0LL;
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v45 + 704), &v47);
      sub_140282AF4(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
      v17 = v47.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && v47.OldIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = *((_QWORD *)v40 + 4375);
            v42 = ~(unsigned __int16)(-1LL << (v47.OldIrql + 1));
            v12 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v12 )
              sub_140418E4C(v40);
          }
        }
      }
      __writecr8(v17);
    }
    return v10;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v45 + 704), &v47);
  sub_140282AF4(SharedCacheMap);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
  v34 = v47.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && v47.OldIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = *((_QWORD *)v36 + 4375);
        v38 = ~(unsigned __int16)(-1LL << (v47.OldIrql + 1));
        v12 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
        *(_DWORD *)(v37 + 20) &= v38;
        if ( v12 )
          sub_140418E4C(v36);
      }
    }
  }
  __writecr8(v34);
  return 0;
}
