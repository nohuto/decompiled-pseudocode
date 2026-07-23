/*
 * XREFs of MiClearPteAccessed @ 0x14027C860
 * Callers:
 *     MiCrcStillIntact @ 0x140215130 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x14027BCB0 (MiResetAccessBitPte.c)
 *     MiAgePteWorker @ 0x14027C480 (MiAgePteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x14046C50C (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5DC0 (MiUnlockNestedPageTableWritePte.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x14033E668 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     qsort @ 0x1403DA610 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  int v8; // ebp
  __int64 v10; // r15
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ebp
  unsigned __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // r8
  _BYTE *v24; // rbx
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  int v28; // ebx
  _BYTE *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  int v34; // ecx
  unsigned int v35; // ecx
  char v36; // cl
  bool v37; // zf
  __int64 v38; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v40; // rax
  struct _LIST_ENTRY *v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  int v44; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v48; // [rsp+90h] [rbp+18h]

  v6 = a2;
  v48 = 0;
  v8 = 0;
  v10 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = (__int64)(a3 << 25) >> 16;
  v12 = 0xFFFFF6FB7DBED000uLL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v13 = 0;
    if ( !a4 )
    {
      v20 = a6;
      goto LABEL_23;
    }
    goto LABEL_3;
  }
  if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL
    || (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(a2 + 40) >= 0
    || *(_WORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v13 = 1;
  if ( a4 )
  {
    if ( v11 >= 0xFFFFF68000000000uLL )
    {
LABEL_49:
      if ( v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v8 = 1;
        MiLockPageTableInternal(a1, a3, 0, 0xFFFFF6FB7DBED000uLL);
      }
LABEL_4:
      if ( !v13 )
        goto LABEL_5;
      goto LABEL_55;
    }
LABEL_3:
    if ( v11 < 0xFFFFF68000000000uLL )
      goto LABEL_4;
    goto LABEL_49;
  }
LABEL_55:
  v44 = 0;
  v48 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v44);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( ((*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(__int64 *)(v6 + 40) < 0)
    && ((*(_BYTE *)(v10 + 184) & 7) == 0 || *(_WORD *)(v6 + 32) <= 1u) )
  {
LABEL_5:
    if ( !a4 )
    {
      v20 = a6;
      goto LABEL_20;
    }
    if ( v8 )
    {
      v38 = MI_READ_PTE_LOCK_FREE(a3);
      MiUnlockNestedPageTableWritePte(
        v10,
        a3,
        v38 & 0xCFFFFFFFFFFFFFDFuLL,
        0LL,
        v44,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock);
      goto LABEL_11;
    }
    v14 = *(_QWORD *)a3;
    v15 = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v40 = *((_QWORD *)&Flink->Flink + ((a3 >> 3) & 0x1FF));
        if ( (v40 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v40 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
    }
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v41 )
      {
        v42 = *((_QWORD *)&v41->Flink + ((a3 >> 3) & 0x1FF));
        if ( (v42 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v42 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
    }
    v16 = (v15 & 0xF0FFFFFFFFFFFFDFuLL | v14 & 0xF00000000000000LL) ^ ((v15 & 0xF0FFFFFFFFFFFFDFuLL | v14 & 0xF00000000000000LL) ^ v14) & 0x7000000000000000LL;
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow(v18, v17, v19) )
      {
        if ( !HIBYTE(word_140C66CFC) && (v16 & 1) != 0 )
          v16 |= 0x8000000000000000uLL;
        *(_QWORD *)a3 = v16;
        MiWritePteShadow(a3, v16);
LABEL_11:
        v20 = 1;
        v21 = v11;
        v22 = 1LL;
        if ( *(_DWORD *)a4 != 1 )
        {
          v36 = *(_BYTE *)(a4 + 4);
          if ( (v36 & 8) == 0 && v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(a4 + 4) = v36 | 8;
        }
        LODWORD(v23) = *(_DWORD *)(a4 + 12);
        v24 = (_BYTE *)(a4 + 4);
        if ( !(_DWORD)v23 || (*v24 & 4) != 0 )
        {
          v25 = (unsigned int)(v23 - 1);
          v30 = (_BYTE *)(a4 + 4);
          if ( !(_DWORD)v23 )
            goto LABEL_37;
          goto LABEL_34;
        }
        v25 = (unsigned int)(v23 - 1);
        v26 = *(_QWORD *)(a4 + 8 * v25 + 24);
        if ( (v26 & 0xC00) == 0 )
        {
          v27 = *(_QWORD *)(a4 + 8 * v25 + 24) & 0x3FFLL;
          if ( (v26 & 0xFFFFFFFFFFFFF000uLL) + ((v27 + 1) << 12) != v11 )
          {
            v30 = (_BYTE *)(a4 + 4);
LABEL_34:
            if ( (*v30 & 4) == 0 )
            {
              v31 = *(_QWORD *)(a4 + 8 * v25 + 24);
              if ( (v31 & 0xC00) == 0 && (v31 & 0xFFFFFFFFFFFFF000uLL) == v11 + 4096 )
              {
                v43 = *(_QWORD *)(a4 + 8 * v25 + 24) & 0x3FFLL;
                if ( v43 + 1 >= v43 && v43 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(a4 + 16);
                  *(_QWORD *)(a4 + 8 * v25 + 24) = ((unsigned __int16)(v31 - 4096) ^ (unsigned __int16)(v31 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v31 - 4096);
                  goto LABEL_19;
                }
              }
            }
LABEL_37:
            if ( (unsigned int)v23 < *(_DWORD *)(a4 + 8) )
            {
              while ( 1 )
              {
                v32 = (unsigned __int64)(v22 - 1) > 0x3FF ? 1024LL : v22;
                v33 = v21 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v32 - 1) & 0x3FF;
                v22 -= v32;
                v21 += v32 << 12;
                *(_QWORD *)(a4 + 8LL * (unsigned int)v23 + 24) = v33;
                v34 = *(_DWORD *)(a4 + 12);
                *(_QWORD *)(a4 + 16) += v32;
                v35 = v34 + 1;
                LODWORD(v23) = v35;
                *(_DWORD *)(a4 + 12) = v35;
                if ( v35 == *(_DWORD *)(a4 + 8) && (*v24 & 4) == 0 )
                {
                  qsort((void *)(a4 + 24), v35, 8uLL, MiTbFlushSort);
                  MiCompressTbFlushList(a4);
                  v23 = *(unsigned int *)(a4 + 12);
                  if ( (_DWORD)v23 == *(_DWORD *)(a4 + 8) )
                    break;
                }
                if ( !v22 )
                  goto LABEL_19;
              }
              v6 = a2;
              v37 = v22 == 0;
              v10 = a1;
              if ( !v37 )
              {
                *(_BYTE *)(a4 + 5) = 1;
                *(_QWORD *)(a4 + 16) = v23;
              }
              goto LABEL_20;
            }
            *(_BYTE *)(a4 + 5) = 1;
            goto LABEL_19;
          }
          if ( v27 + 1 >= v27 && v27 + 1 <= 0x3FF )
          {
            ++*(_QWORD *)(a4 + 16);
            *(_QWORD *)(a4 + 8 * v25 + 24) = ((unsigned __int16)v26 ^ (unsigned __int16)(v26 + 1)) & 0x3FF ^ v26;
LABEL_19:
            v6 = a2;
            v10 = a1;
LABEL_20:
            if ( v48 )
              _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v12 = 0xFFFFF6FB7DBED000uLL;
LABEL_23:
            if ( v20 )
            {
              if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
                v28 = HIBYTE(*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
              else
                v28 = (*(_DWORD *)(48
                                 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                 - 0x220000000000LL) >> 1) & 7;
              if ( !a5 )
                goto LABEL_29;
              if ( v28 != 7 )
              {
                MiLogPageAccess(v10, a3);
LABEL_29:
                if ( !v28 )
                {
                  LOBYTE(v12) = 1;
                  MiSetVaAgeList(v10, v11, 1u, v12);
                }
              }
            }
            return 1LL;
          }
        }
        v30 = (_BYTE *)(a4 + 4);
        goto LABEL_34;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v16 & 1) != 0 )
      {
        v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v16;
    goto LABEL_11;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
    MiUnlockPageTableInternal(v10, a3);
  return 0LL;
}
