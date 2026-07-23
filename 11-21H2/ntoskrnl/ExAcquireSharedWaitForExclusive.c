/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x14039B280
 * Callers:
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140461910 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     sub_140606E00 @ 0x140606E00 (sub_140606E00.c)
 * Callees:
 *     sub_14021CA10 @ 0x14021CA10 (sub_14021CA10.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_14021CD50 @ 0x14021CD50 (sub_14021CD50.c)
 *     sub_14021CE94 @ 0x14021CE94 (sub_14021CE94.c)
 *     sub_14022B410 @ 0x14022B410 (sub_14022B410.c)
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
 *     sub_1402597A8 @ 0x1402597A8 (sub_1402597A8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_14033B6F0 @ 0x14033B6F0 (sub_14033B6F0.c)
 *     sub_14039BA04 @ 0x14039BA04 (sub_14039BA04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1406325F8 @ 0x1406325F8 (sub_1406325F8.c)
 *     sub_140632AC8 @ 0x140632AC8 (sub_140632AC8.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 v2; // r8
  __int64 v3; // r9
  bool v4; // zf
  ERESOURCE_THREAD CurrentThread; // rsi
  bool v8; // r13
  KSPIN_LOCK *p_SpinLock; // rdi
  int v10; // r15d
  KIRQL CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  BOOLEAN v15; // di
  ULONG v16; // ecx
  unsigned __int64 OldIrql; // rsi
  __int16 v18; // ax
  ULONG v19; // eax
  __int64 v20; // r9
  OWNER_ENTRY *p_OwnerEntry; // rcx
  ULONG v22; // r8d
  OWNER_ENTRY *v23; // rdx
  unsigned __int64 v24; // r10
  POWNER_ENTRY v25; // rax
  unsigned __int64 v26; // r8
  POWNER_ENTRY OwnerTable; // r9
  OWNER_ENTRY *v28; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // edi
  unsigned int v30; // edi
  ULONG ActiveEntries; // ecx
  unsigned int v32; // edi
  __int64 Next; // rax
  struct _KPRCB *v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned __int64 v40; // rbx
  int v41; // eax
  _QWORD *v42; // rax
  _QWORD *v43; // r12
  ULONG v44; // edi
  ULONG v45; // edi
  unsigned __int64 v46; // rsi
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  __int64 v49; // r8
  int v50; // eax
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  __int64 v54; // r8
  int v55; // eax
  unsigned __int64 v56; // r14
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  __int64 v59; // r9
  int v60; // eax
  _QWORD *v61; // rax
  int v62; // ecx
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  __int64 v66; // r8
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  __int64 v70; // r8
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  __int64 v74; // r8
  int v75; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-19h] BYREF
  _OWORD v77[3]; // [rsp+50h] [rbp-1h] BYREF
  void *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = (Resource->ReservedLowFlags & 1) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v77, 0, sizeof(v77));
  if ( !v4 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v8 = (DWORD1(xmmword_140D06900) & 0x20000) != 0;
  __incgsdword(0x8ABCu);
  p_SpinLock = &Resource->SpinLock;
  v10 = 0;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v2 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 20) = v2;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v41 = *(_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 24) = v41 + 1;
      if ( v41 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&LockHandle, p_SpinLock);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v14 )
      sub_140311C70((__int64)&LockHandle, v14, v2, v3);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v15 = sub_14039BA04(Resource);
        v16 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = CurrentThread;
        Resource->OwnerEntry.TableSize = v16 | 8;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v72 = KeGetCurrentIrql();
            if ( v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
            {
              v73 = KeGetCurrentPrcb();
              v74 = *((_QWORD *)v73 + 4375);
              v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v4 = (v75 & *(_DWORD *)(v74 + 20)) == 0;
              *(_DWORD *)(v74 + 20) &= v75;
              if ( v4 )
                sub_140418E4C(v73);
            }
          }
        }
        __writecr8(OldIrql);
        __incgsdword(0x8AC4u);
        __incgsdword(0x8A64u);
        if ( v8 )
          sub_1406325F8(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v15;
      }
      v18 = Resource->Flag & 0x80;
      if ( v18 )
        break;
      if ( Resource->NumberOfExclusiveWaiters )
        goto LABEL_43;
      v19 = sub_14022B410(CurrentThread);
      p_OwnerEntry = &Resource->OwnerEntry;
      v22 = v19;
      if ( Resource->OwnerEntry.OwnerThread == CurrentThread
        || (v23 = 0LL, v24 = Resource->OwnerEntry.OwnerThread != 0, v19)
        && (v25 = Resource->OwnerTable) != 0LL
        && v22 < v25->TableSize
        && (p_OwnerEntry = &v25[v22], p_OwnerEntry->OwnerThread == CurrentThread) )
      {
LABEL_59:
        v23 = p_OwnerEntry;
        if ( p_OwnerEntry )
          goto LABEL_26;
      }
      else
      {
        v26 = v20 + Resource->NumberOfSharedWaiters;
        OwnerTable = Resource->OwnerTable;
        if ( OwnerTable )
        {
          v28 = &OwnerTable[OwnerTable->TableSize];
          p_OwnerEntry = OwnerTable + 1;
          if ( v24 < v26 )
          {
            while ( 1 )
            {
              if ( p_OwnerEntry->OwnerThread == CurrentThread )
              {
                *((_BYTE *)KeGetCurrentThread() + 1120) = p_OwnerEntry - OwnerTable;
                goto LABEL_59;
              }
              if ( p_OwnerEntry->OwnerThread )
              {
                if ( ++v24 == v26 )
                {
                  ++p_OwnerEntry;
LABEL_54:
                  if ( !v23 )
                    break;
LABEL_25:
                  *((_BYTE *)KeGetCurrentThread() + 1120) = v23 - OwnerTable;
                  p_OwnerEntry = v23;
LABEL_26:
                  TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v23->TableSize;
                  if ( p_OwnerEntry->OwnerThread )
                  {
                    v30 = *(_DWORD *)&TableSize + 8;
                    v23->TableSize = v30;
                  }
                  else
                  {
                    p_OwnerEntry->OwnerThread = CurrentThread;
                    v30 = *(_BYTE *)&TableSize & 7 | 8;
                    v23->TableSize = v30;
                    ActiveEntries = Resource->ActiveEntries;
                    if ( !ActiveEntries
                      || (Resource->ReservedLowFlags & 0x80u) == 0 && !Resource->NumberOfExclusiveWaiters )
                    {
                      Resource->ActiveCount = 1;
                      Resource->ActiveEntries = ActiveEntries + 1;
                      v30 = v23->TableSize;
                    }
                  }
                  v32 = v30 >> 3;
                  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
                  {
                    sub_14056E6FC(&LockHandle, retaddr);
                    goto LABEL_34;
                  }
                  _m_prefetchw(&LockHandle);
                  Next = (__int64)LockHandle.LockQueue.Next;
                  if ( !LockHandle.LockQueue.Next )
                  {
                    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                         0LL,
                                                         (signed __int64)&LockHandle) == &LockHandle )
                    {
LABEL_34:
                      v34 = KeGetCurrentPrcb();
                      v35 = *((_QWORD *)v34 + 4375);
                      if ( v35 )
                      {
                        if ( *((_BYTE *)v34 + 32) <= 1u )
                        {
                          v51 = *(_DWORD *)(v35 + 24) - 1;
                          *(_DWORD *)(v35 + 24) = v51;
                          if ( !v51 )
                            sub_140418E4C(v34);
                        }
                      }
                      v36 = LockHandle.OldIrql;
                      if ( dword_140D06B08 )
                      {
                        if ( (dword_140D06B08 & 1) != 0 )
                        {
                          v52 = KeGetCurrentIrql();
                          if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
                          {
                            v53 = KeGetCurrentPrcb();
                            v54 = *((_QWORD *)v53 + 4375);
                            v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v4 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
                            *(_DWORD *)(v54 + 20) &= v55;
                            if ( v4 )
                              sub_140418E4C(v53);
                          }
                        }
                      }
                      __writecr8(v36);
                      if ( v32 == 1 )
                      {
                        v37 = 65601LL;
                        v38 = 35524;
                      }
                      else
                      {
                        v37 = 65617LL;
                        v38 = 35528;
                      }
                      __incgsdword(v38);
                      __incgsdword(0x8AC8u);
                      if ( v8 )
                        sub_1406325F8(v37, Resource, 1LL, Resource->ContentionCount);
                      return 1;
                    }
                    Next = sub_140282C20((__int64 *)&LockHandle);
                  }
                  LockHandle.LockQueue.Next = 0LL;
                  _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
                  goto LABEL_34;
                }
              }
              else if ( !v23 )
              {
                v23 = p_OwnerEntry;
              }
              if ( ++p_OwnerEntry == v28 )
                goto LABEL_54;
            }
          }
          if ( p_OwnerEntry < v28 )
          {
            v23 = p_OwnerEntry;
            if ( p_OwnerEntry )
              goto LABEL_25;
          }
        }
        sub_14021CE94((__int64)Resource, &LockHandle);
      }
    }
    if ( Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v44 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v44;
      v45 = v44 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v46 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && LockHandle.OldIrql <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = *((_QWORD *)v48 + 4375);
            v50 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
            *(_DWORD *)(v49 + 20) &= v50;
            if ( v4 )
              sub_140418E4C(v48);
          }
        }
      }
      __writecr8(v46);
      __incgsdword(0x8AC0u);
      __incgsdword(0x8A64u);
      if ( v8 )
        sub_1406325F8(65585LL, Resource, v45, Resource->ContentionCount);
      return 1;
    }
LABEL_43:
    if ( !Wait )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v40 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = *((_QWORD *)v69 + 4375);
            v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v71 & *(_DWORD *)(v70 + 20)) == 0;
            *(_DWORD *)(v70 + 20) &= v71;
            if ( v4 )
              sub_140418E4C(v69);
          }
        }
      }
      __writecr8(v40);
      __incgsdword(0x8AD0u);
      return 0;
    }
    if ( !v18 )
      break;
    v42 = sub_14021CA10((__int64)Resource);
    v43 = v42;
    if ( v42 )
    {
      *v42 = CurrentThread;
      *((_DWORD *)v42 + 2) = v42[1] & 7 | 8;
      goto LABEL_93;
    }
  }
  v43 = 0LL;
LABEL_93:
  sub_1402597A8((__int64)Resource, CurrentThread, (__int64)v77);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v56 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v57 = KeGetCurrentIrql();
      if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
      {
        v58 = KeGetCurrentPrcb();
        v59 = *((_QWORD *)v58 + 4375);
        v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = (v60 & *(_DWORD *)(v59 + 20)) == 0;
        *(_DWORD *)(v59 + 20) &= v60;
        if ( v4 )
          sub_140418E4C(v58);
      }
    }
  }
  __writecr8(v56);
  __incgsdword(0x8ACCu);
  if ( v8 )
    sub_140632AC8(65604LL, Resource, 0LL);
  sub_14033B6F0();
  sub_140231990(&Resource->SystemResourcesList, (__int64)v77, 0x10244u, (__int64)sub_14025C860);
  if ( !v43 )
  {
    KeAcquireInStackQueuedSpinLock(p_SpinLock, &LockHandle);
    do
      v61 = sub_14021CD50((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, 0);
    while ( !v61 );
    v62 = v61[1] & 7;
    *v61 = CurrentThread;
    *((_DWORD *)v61 + 2) = v62 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v63 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = *((_QWORD *)v65 + 4375);
          v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v4 = (v67 & *(_DWORD *)(v66 + 20)) == 0;
          *(_DWORD *)(v66 + 20) &= v67;
          if ( v4 )
            sub_140418E4C(v65);
        }
      }
    }
    __writecr8(v63);
  }
  if ( (CurrentThread & 3) == 0 )
    v10 = *(unsigned __int8 *)(CurrentThread + 1120);
  sub_14021CA70((__int64)Resource, CurrentThread, v10);
  __incgsdword(0x8AC4u);
  __incgsdword(0x8A64u);
  if ( !v8 )
    return 1;
  sub_1406325F8(65601LL, Resource, 1LL, Resource->ContentionCount);
  return 1;
}
