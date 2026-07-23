/*
 * XREFs of CcSetFileSizesEx @ 0x1402823F0
 * Callers:
 *     CcSetFileSizes @ 0x14025BDB0 (CcSetFileSizes.c)
 * Callees:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     sub_14023F250 @ 0x14023F250 (sub_14023F250.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     sub_140247300 @ 0x140247300 (sub_140247300.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140388FC8 @ 0x140388FC8 (sub_140388FC8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER AllocationSize; // r14
  LARGE_INTEGER ValidDataLength; // rbx
  PFILE_OBJECT v4; // rsi
  char v5; // r13
  LARGE_INTEGER *SharedCacheMap; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r14
  KSPIN_LOCK *v9; // r14
  LARGE_INTEGER v10; // rcx
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v14; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v16; // r14
  LARGE_INTEGER v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // r14d
  struct _KPRCB *v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  __int64 v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  __int64 v46; // r9
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  __int64 v50; // r8
  int v51; // eax
  unsigned __int8 v52; // al
  __int64 v53; // r8
  int v54; // eax
  __int128 v55; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v56; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+B8h] [rbp+48h] BYREF
  __int64 QuadPart; // [rsp+C0h] [rbp+50h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+C8h] [rbp+58h]

  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  v4 = FileObject;
  FileOffset = FileSizes->FileSize;
  v55 = 0LL;
  QuadPart = AllocationSize.QuadPart;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v56, 0, sizeof(v56));
  KeAcquireInStackQueuedSpinLock(&::SpinLock, &LockHandle);
  v5 = 1;
  SharedCacheMap = (LARGE_INTEGER *)v4->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    SpinLock = (PKSPIN_LOCK)(SharedCacheMap[66].QuadPart + 704);
    KeAcquireInStackQueuedSpinLock(SpinLock, &v56);
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_4;
    ++SharedCacheMap->HighPart;
    ++SharedCacheMap[67].LowPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
    OldIrql = v56.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v56.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = *((_QWORD *)CurrentPrcb + 4375);
          v25 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
          v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v26 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = *((_QWORD *)v28 + 4375);
          v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v26 )
            sub_140418E4C(v28);
        }
      }
    }
    __writecr8(v16);
    QuadPart += 0xFFFFFLL;
    v17 = SharedCacheMap[21];
    LODWORD(QuadPart) = QuadPart & 0xFFF00000;
    v5 = 0;
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1406A377C)((LARGE_INTEGER)v17.QuadPart, &QuadPart, 1LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v18) )
        v19 = -1073741588;
    }
    else
    {
      v19 = sub_140247300((__int64)SharedCacheMap, QuadPart);
    }
    KeAcquireInStackQueuedSpinLock(SpinLock, &v56);
    sub_140282AF4(SharedCacheMap);
    if ( v19 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v56);
      RtlRaiseStatus(v19);
    }
    SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_4:
      ++SharedCacheMap->HighPart;
      ++SharedCacheMap[67].LowPart;
      if ( v5 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
        v7 = v56.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && v56.OldIrql <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = *((_QWORD *)v37 + 4375);
              v39 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
              v26 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
              *(_DWORD *)(v38 + 20) &= v39;
              if ( v26 )
                sub_140418E4C(v37);
            }
          }
        }
        __writecr8(v7);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v8 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && LockHandle.OldIrql <= 0xFu && v40 >= 2u )
            {
              v41 = KeGetCurrentPrcb();
              v42 = *((_QWORD *)v41 + 4375);
              v43 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v26 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
              *(_DWORD *)(v42 + 20) &= v43;
              if ( v26 )
                sub_140418E4C(v41);
            }
          }
        }
        __writecr8(v8);
        v9 = SpinLock;
        KeAcquireInStackQueuedSpinLock(SpinLock, &v56);
      }
      else
      {
        v9 = SpinLock;
      }
      v10 = SharedCacheMap[5];
      if ( v10.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileOffset.QuadPart < v10.QuadPart )
          SharedCacheMap[5] = FileOffset;
        SharedCacheMap[6] = ValidDataLength;
      }
      v11 = 0;
      if ( FileOffset.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
        v14 = v56.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && v56.OldIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = *((_QWORD *)v45 + 4375);
              v47 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
              v26 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
              *(_DWORD *)(v46 + 20) &= v47;
              if ( v26 )
                sub_140418E4C(v45);
            }
          }
        }
        __writecr8(v14);
        v11 = 0;
        if ( (unsigned __int8)sub_1402853B0((_DWORD)SharedCacheMap, (unsigned int)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileOffset.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              sub_14023F250((__int64)SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              sub_140388FC8(SharedCacheMap);
          }
          v11 = sub_14023C1EC((__int64)SharedCacheMap, &FileOffset);
        }
        KeAcquireInStackQueuedSpinLock(v9, &v56);
      }
      SharedCacheMap[1] = FileOffset;
      sub_140282AF4(SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
      v12 = v56.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v48 = KeGetCurrentIrql();
          if ( v48 <= 0xFu && v56.OldIrql <= 0xFu && v48 >= 2u )
          {
            v49 = KeGetCurrentPrcb();
            v50 = *((_QWORD *)v49 + 4375);
            v51 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
            v26 = (v51 & *(_DWORD *)(v50 + 20)) == 0;
            *(_DWORD *)(v50 + 20) &= v51;
            if ( v26 )
              sub_140418E4C(v49);
          }
        }
      }
      __writecr8(v12);
      return v11;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
      v31 = v56.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && v56.OldIrql <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = *((_QWORD *)v33 + 4375);
            v35 = ~(unsigned __int16)(-1LL << (v56.OldIrql + 1));
            v26 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
            *(_DWORD *)(v34 + 20) &= v35;
            if ( v26 )
              sub_140418E4C(v33);
          }
        }
      }
      __writecr8(v31);
      return 0;
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v21 = LockHandle.OldIrql;
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 )
    {
      v52 = KeGetCurrentIrql();
      if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v53 = *((_QWORD *)v20 + 4375);
        v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v54 & *(_DWORD *)(v53 + 20)) == 0;
        *(_DWORD *)(v53 + 20) &= v54;
        if ( v26 )
          sub_140418E4C(v20);
      }
      v4 = FileObject;
    }
    __writecr8(v21);
    if ( (FileOffset.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(v4->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    sub_140283C50(v4->SectionObjectPointer, (unsigned int)&FileOffset, 1, (_DWORD)v20, (__int64)&v55, 0);
    result = v55;
    if ( (int)v55 >= 0 )
      return CcPurgeCacheSection(v4->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
