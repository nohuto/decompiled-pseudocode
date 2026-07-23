/*
 * XREFs of MiCreateFileOnlyImageFixupList @ 0x140A33C8C
 * Callers:
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetControlAreaPartition @ 0x140275940 (MiGetControlAreaPartition.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402EC258 (MiUpdateControlAreaCommitCount.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiGetSubsectionFromPte @ 0x14064E778 (MiGetSubsectionFromPte.c)
 *     MiPageHasRelocations @ 0x1406B133C (MiPageHasRelocations.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateFileOnlyImageFixupList(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int HasRelocations; // eax
  unsigned int v10; // ecx
  _QWORD *Pool; // r14
  unsigned __int64 v13; // r12
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v24; // [rsp+20h] [rbp-48h]
  __int64 ControlAreaPartition; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+78h] [rbp+10h]

  v3 = 0;
  *a3 = 0LL;
  v6 = *(_DWORD *)(a2 + 56);
  LODWORD(v7) = 0;
  v8 = 0;
  if ( !v6 )
    return 0LL;
  do
  {
    HasRelocations = MiPageHasRelocations((__int64 *)a2, v8, 1);
    v10 = v7 + 1;
    if ( !HasRelocations )
      v10 = v7;
    ++v8;
    v7 = v10;
  }
  while ( v8 < v6 );
  if ( !v10 )
    return 0LL;
  Pool = MiAllocatePool(64, 8LL * (v10 + 1), 0x7052694Du);
  if ( Pool )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    v13 = v7;
    if ( (unsigned int)MiChargeCommit(ControlAreaPartition, v7, 0LL) )
    {
      v14 = 0;
      v24 = *(_QWORD *)a1;
      v15 = 0;
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
      while ( 1 )
      {
        if ( (unsigned int)MiPageHasRelocations((__int64 *)a2, v15, 1) )
        {
          v16 = MI_READ_PTE_LOCK_FREE(v26 + 8LL * v15);
          if ( (v16 & 0x400) != 0 )
          {
            v3 = -1073740023;
            goto LABEL_35;
          }
          if ( (v16 & 0x800) != 0 )
          {
            if ( qword_140C65B40 )
            {
              if ( (v16 & 0x10) != 0 )
                v16 &= ~0x10uLL;
              else
                v16 &= ~qword_140C65B40;
            }
            v17 = 48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0
              || (*(_BYTE *)(MiGetSubsectionFromPte(*(_QWORD *)(v17 + 16)) + 34) & 2) == 0 )
            {
              v18 = v14++;
              Pool[v18] = v26 + 8LL * v15;
            }
          }
        }
        if ( ++v15 >= v6 )
        {
          if ( v14 )
          {
            CurrentThread = KeGetCurrentThread();
            v20 = (unsigned __int64 *)(v24 + 40);
            --CurrentThread->SpecialApcDisable;
            v21 = KeAbPreAcquire(v24 + 40, 0LL);
            v22 = v21;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 40), 0LL) )
              ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
            if ( v22 )
              *(_BYTE *)(v22 + 18) = 1;
            MiUpdateControlAreaCommitCount(a1, v13);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v20);
            KeAbPostRelease((ULONG_PTR)v20);
            if ( CurrentThread->SpecialApcDisable++ == -1
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            *a3 = Pool;
            return 0LL;
          }
LABEL_35:
          MiReturnCommit(ControlAreaPartition, v13);
          ExFreePoolWithTag(Pool, 0);
          return v3;
        }
      }
    }
    ExFreePoolWithTag(Pool, 0);
  }
  return 3221225626LL;
}
