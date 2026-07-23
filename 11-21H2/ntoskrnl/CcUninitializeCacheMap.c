/*
 * XREFs of CcUninitializeCacheMap @ 0x1402761B0
 * Callers:
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 * Callees:
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_1402767FC @ 0x1402767FC (sub_1402767FC.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14029E260 @ 0x14029E260 (sub_14029E260.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v4; // r14
  __int64 v7; // rsi
  KIRQL CurrentIrql; // r11
  __int64 v9; // r8
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  __int64 v12; // rdx
  PFILE_OBJECT v13; // rdx
  PVOID *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int64 OldIrql; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  bool v21; // bl
  __int64 v23; // r10
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  PFILE_OBJECT v27; // rax
  __int64 v28; // rdx
  _QWORD *p_Type; // rcx
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  __int64 v33; // r9
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  __int64 v46; // r9
  int v47; // eax
  unsigned __int64 v48; // rbx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  __int64 v51; // r9
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  __int64 v55; // r9
  int v56; // eax
  signed __int64 v57; // rax
  bool v58; // cc
  signed __int64 v59; // rax
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v61; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v63; // [rsp+68h] [rbp-18h] BYREF
  bool v64; // [rsp+C0h] [rbp+40h]
  __int64 v65; // [rsp+D8h] [rbp+58h]

  v4 = 0;
  ListEntry = 0LL;
  *(_QWORD *)&v61.OldIrql = 0LL;
  v64 = 0;
  v7 = 0LL;
  v65 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v61.LockQueue.Lock = &SpinLock;
  memset(&v63, 0, sizeof(v63));
  v61.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v61.OldIrql = CurrentIrql;
  sub_1403119F0(&v61);
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v7 = *((_QWORD *)SharedCacheMap + 66);
    if ( byte_140C54C58 == 1 )
      v12 = *((_QWORD *)SharedCacheMap + 74);
    else
      v12 = 0LL;
    v65 = v12;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1232)) <= 1 )
      __fastfail(0xEu);
    if ( v12 && _InterlockedIncrement64((volatile signed __int64 *)(v12 + 8)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 704), &LockHandle);
  }
  if ( PrivateCacheMap )
  {
    if ( PrivateCacheMap[1] != FileObject )
      KeBugCheckEx(0x34u, 0xA5BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !v7 )
      KeBugCheckEx(0x34u, 0xA61uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( PrivateCacheMap[14] )
    {
      v63.LockQueue.Next = 0LL;
      v63.LockQueue.Lock = (volatile PKSPIN_LOCK)(v7 + 768);
      sub_1403119F0(&v63);
      v27 = PrivateCacheMap[14];
      if ( v27 )
      {
        v28 = *(_QWORD *)&v27->Type;
        ++dword_140C4E870;
        p_Type = &v27->DeviceObject->Type;
        ListEntry = (PSLIST_ENTRY)v27;
        if ( *(PFILE_OBJECT *)(v28 + 8) != v27 || (PFILE_OBJECT)*p_Type != v27 )
          goto LABEL_86;
        *p_Type = v28;
        *(_QWORD *)(v28 + 8) = p_Type;
        v27->DeviceObject = 0LL;
        *(_QWORD *)&v27->Type = 0LL;
        if ( (PFILE_OBJECT)v27->Vpb != FileObject )
          KeBugCheckEx(0x34u, 0xA82uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        --*((_DWORD *)SharedCacheMap + 1);
        --*((_DWORD *)SharedCacheMap + 134);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v63);
    }
    --*((_DWORD *)SharedCacheMap + 1);
    v13 = PrivateCacheMap[12];
    v14 = (PVOID *)PrivateCacheMap[13];
    if ( (PFILE_OBJECT *)v13->DeviceObject == PrivateCacheMap + 12 && *v14 == PrivateCacheMap + 12 )
    {
      *v14 = v13;
      v13->DeviceObject = (PDEVICE_OBJECT)v14;
      if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 376) )
      {
        *(_WORD *)PrivateCacheMap = 0;
        PrivateCacheMap = 0LL;
      }
      FileObject->PrivateCacheMap = 0LL;
      goto LABEL_17;
    }
LABEL_86:
    __fastfail(3u);
  }
LABEL_17:
  if ( SharedCacheMap )
  {
    if ( TruncateSize )
    {
      if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
          *((LARGE_INTEGER *)SharedCacheMap + 1) = *TruncateSize;
      }
      else
      {
        *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
      }
    }
    if ( !*((_DWORD *)SharedCacheMap + 1) )
    {
      if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
        KeBugCheckEx(0x34u, 0xAFEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( UninitializeEvent )
      {
        UninitializeEvent->Next = (struct _CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
        *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
        if ( (FileObject->DeviceObject->Characteristics & 0x10) != 0 )
          v64 = 1;
      }
      v15 = *((_DWORD *)SharedCacheMap + 38);
      if ( (v15 & 4) != 0 || UninitializeEvent )
      {
        if ( (v15 & 0x20) != 0 )
          goto LABEL_26;
        if ( !*((_DWORD *)SharedCacheMap + 28)
          && ((v15 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
        {
          sub_140275338(SharedCacheMap, &v61, &LockHandle, 0, 0LL);
          v17 = v65;
          v21 = 0;
          v4 = 1;
          goto LABEL_34;
        }
      }
      else if ( (v15 & 0x20) != 0 )
      {
LABEL_26:
        if ( byte_140C54C58 == 1 )
          v16 = *((_QWORD *)SharedCacheMap + 74);
        else
          v16 = *((_QWORD *)SharedCacheMap + 66);
        *(_BYTE *)(v16 + 986) = 1;
        if ( *(_BYTE *)(v7 + 1230) )
        {
          *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
          LOBYTE(v9) = 1;
        }
        else
        {
          LOBYTE(v9) = UninitializeEvent && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0;
        }
        v17 = v65;
        sub_140276758(v7, v65, v9, (unsigned __int8)v9);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && LockHandle.OldIrql <= 0xFu && v40 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v42 = *((_QWORD *)CurrentPrcb + 4375);
              v43 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v35 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
              *(_DWORD *)(v42 + 20) &= v43;
              if ( v35 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
        v20 = v61.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && v61.OldIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = *((_QWORD *)v45 + 4375);
              v19 = -1LL << (v61.OldIrql + 1);
              v47 = ~(unsigned __int16)v19;
              v35 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
              *(_DWORD *)(v46 + 20) &= v47;
              if ( v35 )
                sub_140418E4C(v45);
            }
          }
        }
        __writecr8(v20);
        v21 = v64;
        goto LABEL_34;
      }
      sub_1402767FC(SharedCacheMap, 0LL);
      goto LABEL_26;
    }
    if ( UninitializeEvent )
    {
      if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
      {
        UninitializeEvent->Next = (struct _CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
        *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
        v64 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
      }
      else
      {
        KeSetEvent(&UninitializeEvent->Event, 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v25 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = *((_QWORD *)v32 + 4375);
          v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
          *(_DWORD *)(v33 + 20) &= v34;
          if ( v35 )
            sub_140418E4C(v32);
        }
      }
    }
    __writecr8(v25);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
    v26 = v61.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && v61.OldIrql <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = *((_QWORD *)v37 + 4375);
          v19 = -1LL << (v61.OldIrql + 1);
          v39 = ~(unsigned __int16)v19;
          v35 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
          *(_DWORD *)(v38 + 20) &= v39;
          if ( v35 )
            sub_140418E4C(v37);
        }
      }
    }
    __writecr8(v26);
    v21 = v64;
    v17 = v65;
  }
  else
  {
    if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
    {
      if ( v7 )
        KeBugCheckEx(0x34u, 0xBA9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
      v48 = v61.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v49 = KeGetCurrentIrql();
          if ( v49 <= 0xFu && v61.OldIrql <= 0xFu && v49 >= 2u )
          {
            v50 = KeGetCurrentPrcb();
            v51 = *((_QWORD *)v50 + 4375);
            v52 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
            v35 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
            *(_DWORD *)(v51 + 20) &= v52;
            if ( v35 )
              sub_140418E4C(v50);
          }
        }
      }
      __writecr8(v48);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
      v24 = v61.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && v61.OldIrql <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = *((_QWORD *)v54 + 4375);
            v19 = -1LL << (v61.OldIrql + 1);
            v56 = ~(unsigned __int16)v19;
            v35 = (v56 & *(_DWORD *)(v55 + 20)) == 0;
            *(_DWORD *)(v55 + 20) &= v56;
            if ( v35 )
              sub_140418E4C(v54);
          }
        }
      }
      __writecr8(v24);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
    v21 = 0;
    v17 = v65;
  }
LABEL_34:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v21 )
  {
    LOBYTE(v19) = 1;
    sub_14029E260(v7, v19);
  }
  if ( ListEntry )
  {
    ObfDereferenceObject(FileObject);
    v30 = *((_QWORD *)&ListEntry[1].Next + 1);
    if ( v30 )
      sub_140366814(v30);
    sub_1402766A0(ListEntry);
  }
  if ( v7 )
  {
    sub_140276728(v7);
    if ( v17 )
    {
      v57 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v58 = v57 <= 1;
      v59 = v57 - 1;
      if ( v58 )
      {
        if ( v59 )
          __fastfail(0xEu);
        KeSetEvent((PRKEVENT)(v17 + 1200), 0, 0);
      }
    }
  }
  return v4;
}
