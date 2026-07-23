/*
 * XREFs of MiInsertPagesInList @ 0x1402DD7B0
 * Callers:
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x1402D9C60 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9DC0 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiEnqueuePageList @ 0x1402DACA0 (MiEnqueuePageList.c)
 *     MiInsertProtectedStandbyPage @ 0x1403352C0 (MiInsertProtectedStandbyPage.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMakeProtoTransition @ 0x1402D9020 (MiMakeProtoTransition.c)
 *     MiIncreaseAvailablePages @ 0x1402DDC38 (MiIncreaseAvailablePages.c)
 *     MiReleasePageListLock @ 0x1402DDD60 (MiReleasePageListLock.c)
 *     MiSharedInsertPfnChainInList @ 0x1402DDE00 (MiSharedInsertPfnChainInList.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiSufficientAvailablePages @ 0x1402E383C (MiSufficientAvailablePages.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F4B68 (MiReleaseWriteInProgressCharges.c)
 *     MiRebuildStandbyLookasideList @ 0x14033102C (MiRebuildStandbyLookasideList.c)
 *     MiExclusiveInsertPfnChainInList @ 0x14033C408 (MiExclusiveInsertPfnChainInList.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiWakeModifiedPageWriter @ 0x14063C188 (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiInsertPagesInList(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  char v8; // al
  __int64 v9; // r13
  BOOL v10; // ebp
  __int64 v11; // rax
  char v12; // si
  unsigned int v13; // r14d
  volatile signed __int64 *v14; // rax
  int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rbp
  char v23; // si
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  signed __int32 v32[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v33; // [rsp+30h] [rbp-D8h]
  int v34; // [rsp+38h] [rbp-D0h]
  __int64 v35; // [rsp+40h] [rbp-C8h]
  __int64 v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h]
  _BYTE v38[112]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return;
  v36 = *(_QWORD *)(a1 + 88);
  v5 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
  v6 = *(_QWORD *)(v5 + 40);
  v7 = *(_QWORD *)(qword_140C673C8 + 8 * ((v6 >> 43) & 0x3FF));
  v8 = *(_BYTE *)(v5 + 35);
  v35 = v7;
  if ( (v8 & 8) != 0 )
    v9 = 5LL;
  else
    v9 = v8 & 7;
  v10 = (v6 & 0x20000000000000LL) != 0;
  v11 = 17600LL;
  v12 = *(_BYTE *)(v5 + 34) & 0x10;
  if ( !v12 )
    v11 = 2816LL;
  v37 = v11 + v7;
  if ( (v6 & 0x20000000000000LL) != 0 )
  {
    v13 = 0;
  }
  else
  {
    _InterlockedOr(v32, 0);
    v13 = KiTbFlushTimeStamp;
    if ( !v12 )
    {
      MiIncreaseAvailablePages(v7, v2, 1LL, v7);
      v7 = v35;
      v34 = *(_DWORD *)(a1 + 96);
      goto LABEL_9;
    }
  }
  v15 = *(_DWORD *)(a1 + 96);
  v34 = v15;
  if ( !v12 && (v6 & 0x20000000000000LL) != 0 )
    goto LABEL_13;
LABEL_9:
  if ( *(__int64 *)(v5 + 40) >= 0 )
    v14 = (volatile signed __int64 *)(v7 + 16000);
  else
    v14 = (volatile signed __int64 *)(v7 + 6976);
  _InterlockedExchangeAdd64(v14, v2);
  if ( !v12 )
  {
    v15 = v34;
LABEL_13:
    v16 = 0;
    goto LABEL_14;
  }
  v16 = *(_DWORD *)(*(_QWORD *)(v7 + 16920) + 24LL);
  v15 = v34;
LABEL_14:
  v33 = v16;
  if ( !v15 )
  {
    v5 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
    MiMakeProtoTransition((_QWORD *)v5, v2);
LABEL_16:
    LOBYTE(v16) = v33;
    goto LABEL_17;
  }
  if ( v15 == 1 )
  {
    MiReleaseWriteInProgressCharges(v7, v2, 1LL);
    goto LABEL_16;
  }
LABEL_17:
  v17 = *(_QWORD *)(a1 + 16);
  while ( v17 != 0x3FFFFFFFFFLL )
  {
    v5 = 48 * v17 - 0x220000000000LL;
    v17 = *(_QWORD *)v5 & 0xFFFFFFFFFFLL;
    if ( !v10 )
      *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ ((unsigned __int64)v13 << 59)) & 0x3800000000000000LL;
    v18 = *(_BYTE *)(v5 + 34);
    if ( v12 )
    {
      *(_BYTE *)(v5 + 34) = v18 & 0xF8 | 3;
      *(_BYTE *)(v5 + 36) ^= (*(_BYTE *)(v5 + 36) ^ v16) & 0xF;
    }
    else
    {
      *(_BYTE *)(v5 + 34) = v18 & 0xF8 | 2;
    }
  }
  memset(v38, 0, 0x68uLL);
  v20 = v35;
  if ( v12 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 17600), v2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)&CurrentThread->ApcState.Process[1].Spare2[7] += v2;
    v22 = 88LL * v33 + v20 + 5312;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
    v23 = 1;
    if ( v38[0] )
      goto LABEL_29;
    goto LABEL_51;
  }
  if ( v10 )
  {
    v22 = v37;
    v23 = 0;
    goto LABEL_31;
  }
  v21 = v36;
  if ( v36 )
    v9 = 5LL;
  v22 = 88 * v9 + v35 + 2944;
  MiSynchronizeFastPageInsert(v35, v22, v5, v36, (__int64)v38);
  if ( !v38[0] )
  {
    if ( v21 )
    {
      if ( (*(_BYTE *)(v21 + 35) & 8) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
        *(_QWORD *)(a1 + 88) = 0LL;
        v30 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
        v20 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
        v22 = v20 + 88LL * (unsigned int)MiGetPfnPriority(v30) + 2944;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
        v23 = 1;
        goto LABEL_51;
      }
    }
    else if ( v38[2] != 3 )
    {
      MiRebuildStandbyLookasideList(v5, v38[2], v38[1]);
    }
    v23 = 1;
LABEL_51:
    MiExclusiveInsertPfnChainInList(a1, v22);
    goto LABEL_30;
  }
  v23 = 1;
LABEL_29:
  MiSharedInsertPfnChainInList(a1, v38);
LABEL_30:
  _InterlockedExchangeAdd64((volatile signed __int64 *)v22, v2);
LABEL_31:
  v24 = v34;
  if ( v34 != 3 )
  {
    v25 = *(_QWORD *)(a1 + 16);
    v19 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v26 = 6 * v25;
      v25 = *(_QWORD *)(48 * v25 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
      if ( !a2 && v2 == 1 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(8 * v26 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v2 )
        goto LABEL_36;
    }
    _InterlockedAnd64((volatile signed __int64 *)(8 * v26 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_36:
  if ( v23 )
  {
    if ( v38[0] )
    {
      MiReleasePageListLock(v22, v38, v19);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
      if ( v24 != 3 && !(unsigned int)MiSufficientAvailablePages(v20, 1056LL, v27, v28) )
      {
        v31 = *(_QWORD *)(v20 + 17824);
        if ( v31 >= 0x10 )
          MiWakeModifiedPageWriter(v20, -1LL);
        if ( *(_QWORD *)(v20 + 17600) - v31 >= 0x10 )
          KeSetEvent((PRKEVENT)(v20 + 832), 0, 0);
      }
    }
  }
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0x3FFFFFFFFFLL;
}
