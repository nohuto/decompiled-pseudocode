/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1402E9F08
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x140207D84 (CmSiAcquireProcessLockedPagesCharge.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C3350 (KiUpdateProcessConcurrencyCount.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9E4C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140374388 (CmSiSetProcessWorkingSetMaximum.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405CC4D8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405CC734 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmAdjustWorkingSetSize @ 0x14061CA10 (MmAdjustWorkingSetSize.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x1407E3BE4 (PspSetQuotaLimits.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetCurrentMultiplexedVm @ 0x14021DB04 (MiGetCurrentMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PsChargeProcessQuota @ 0x140292858 (PsChargeProcessQuota.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 *     MiCheckWsLimits @ 0x1402EA260 (MiCheckWsLimits.c)
 *     PsReturnProcessQuota @ 0x1402EA35C (PsReturnProcessQuota.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036DD94 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r14
  struct _KTHREAD *CurrentThread; // rdx
  __int64 CurrentMultiplexedVm; // rdi
  volatile signed __int64 *v12; // r13
  volatile LONG *SharedVm; // rbx
  KIRQL v14; // al
  volatile LONG *v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r15
  int v18; // esi
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  struct _KPRCB *v23; // r9
  __int64 v24; // rdx
  bool v25; // zf
  signed __int32 v26; // eax
  volatile LONG *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rdx
  int v32; // ebx
  int v33; // eax
  char v34; // al
  int v35; // ecx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v38; // eax
  __int64 v39; // [rsp+30h] [rbp-30h]
  __int16 v40; // [rsp+30h] [rbp-30h]
  unsigned __int64 v41; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v44; // [rsp+B0h] [rbp+50h]

  Process = 0LL;
  *a6 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    Process = CurrentThread->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
    goto LABEL_3;
  }
  if ( a3 == 2 )
  {
    CurrentMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( CurrentMultiplexedVm )
    {
LABEL_3:
      if ( a1 == -1LL && a2 == -1LL )
        return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0LL, 0LL, -1LL);
      v12 = *(volatile signed __int64 **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
      SharedVm = (volatile LONG *)MiGetSharedVm(CurrentMultiplexedVm);
      v14 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      v44 = v14;
      v15 = (volatile LONG *)MiGetSharedVm(CurrentMultiplexedVm);
      ExAcquireSpinLockExclusiveAtDpcLevel(v15 + 16);
      if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        v18 = -1073741558;
        goto LABEL_25;
      }
      if ( a1 )
        v16 = a1 >> 12;
      else
        v16 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      v42 = v16;
      if ( a2 )
        v17 = a2 >> 12;
      else
        v17 = *(_QWORD *)(CurrentMultiplexedVm + 120);
      v41 = v17;
      v18 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v42, (unsigned int)&v41, a5, 0);
      if ( (v18 & 0xC0000000) == 0xC0000000 )
        goto LABEL_25;
      v19 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      v20 = *(_QWORD *)(CurrentMultiplexedVm + 16);
      v39 = v20;
      if ( v42 > v19 )
      {
        v21 = v42 - v19;
        *a6 = 1;
        if ( !a4 )
        {
          v18 = -1073741727;
          goto LABEL_25;
        }
        if ( !a3 )
        {
          v18 = PsChargeProcessQuota(Process, v20, v21);
          if ( v18 < 0 )
            goto LABEL_25;
        }
        if ( !(unsigned int)MiChargeResident((void *)v12, v21, 512LL) )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v31, v21);
          v18 = -1073741670;
          goto LABEL_25;
        }
        v20 = v39;
      }
      else
      {
        v21 = v19 - v42;
        if ( v42 < *(_QWORD *)(v20 + 32) )
        {
          v18 = -1073741748;
          goto LABEL_25;
        }
      }
      v22 = v41;
      if ( v41 < *(_QWORD *)(CurrentMultiplexedVm + 128) )
      {
        if ( *(_QWORD *)(v20 + 32) + 6LL >= v41 )
        {
          v18 = -1073741748;
          if ( *a6 )
          {
            if ( !a3 )
              PsReturnProcessQuota(Process, v20, v21);
            if ( v12 == (volatile signed __int64 *)&MiSystemPartition )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
              if ( (_DWORD)CachedResidentAvailable != -1 )
              {
                if ( v21 + CachedResidentAvailable <= 0x100 && v21 < 0x80000 )
                {
                  do
                  {
                    v38 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                            v21 + CachedResidentAvailable,
                            CachedResidentAvailable);
                    v25 = (_DWORD)CachedResidentAvailable == v38;
                    LODWORD(CachedResidentAvailable) = v38;
                    if ( v25 )
                      goto LABEL_25;
                  }
                  while ( v38 != -1 && v21 + v38 <= 0x100 );
                }
                if ( (int)CachedResidentAvailable > 192
                  && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                          192,
                                                          CachedResidentAvailable) )
                {
                  v21 += (int)CachedResidentAvailable - 192;
                }
              }
            }
            if ( v21 )
              _InterlockedExchangeAdd64(v12 + 2160, v21);
          }
LABEL_25:
          v27 = (volatile LONG *)MiGetSharedVm(CurrentMultiplexedVm);
          ExReleaseSpinLockExclusiveFromDpcLevel(v27 + 16);
          MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v44, v28, v29);
          return (unsigned int)v18;
        }
        *(_BYTE *)(CurrentMultiplexedVm + 187) = HIBYTE(*(_DWORD *)(CurrentMultiplexedVm + 184)) | 0x10;
      }
      if ( *a6 || !v21 )
      {
LABEL_24:
        *(_QWORD *)(CurrentMultiplexedVm + 112) = v42;
        *(_QWORD *)(CurrentMultiplexedVm + 120) = v22;
        if ( !a5 )
          goto LABEL_25;
        memset(&LockHandle, 0, sizeof(LockHandle));
        v32 = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C697C0, &LockHandle);
        v33 = *(_DWORD *)(CurrentMultiplexedVm + 184);
        v40 = v33;
        if ( (a5 & 4) != 0 )
        {
          LOBYTE(v33) = v33 | 0x80;
        }
        else
        {
          if ( (a5 & 8) == 0 )
            goto LABEL_40;
          LOBYTE(v33) = v33 & 0x7F;
        }
        v32 = 1;
        LOBYTE(v40) = v33;
LABEL_40:
        if ( (a5 & 1) != 0 )
        {
          v34 = v33 | 0x40;
        }
        else
        {
          if ( (a5 & 2) == 0 )
          {
            if ( !v32 )
              goto LABEL_44;
            goto LABEL_43;
          }
          v34 = v33 & 0xBF;
        }
        LOBYTE(v40) = v34;
LABEL_43:
        *(_WORD *)(CurrentMultiplexedVm + 184) = v40;
LABEL_44:
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        goto LABEL_25;
      }
      if ( !a3 )
        PsReturnProcessQuota(Process, v20, v21);
      if ( v12 != (volatile signed __int64 *)&MiSystemPartition )
        goto LABEL_28;
      v23 = KeGetCurrentPrcb();
      v24 = (int)v23->CachedResidentAvailable;
      if ( (_DWORD)v24 == -1 )
        goto LABEL_28;
      if ( v21 + v24 <= 0x100 && v21 < 0x80000 )
      {
        do
        {
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)&v23->CachedResidentAvailable, v21 + v24, v24);
          v25 = (_DWORD)v24 == v26;
          LODWORD(v24) = v26;
          if ( v25 )
            goto LABEL_23;
        }
        while ( v26 != -1 && v21 + v26 <= 0x100 );
      }
      if ( (int)v24 > 192
        && (_DWORD)v24 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v23->CachedResidentAvailable,
                            192,
                            v24) )
      {
        v21 += (int)v24 - 192;
      }
      if ( v21 )
LABEL_28:
        _InterlockedExchangeAdd64(v12 + 2160, v21);
LABEL_23:
      v22 = v41;
      goto LABEL_24;
    }
  }
  else
  {
    v35 = a3 - 3;
    if ( a3 == 3 )
    {
      v35 = 2;
LABEL_54:
      CurrentMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v35);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_54;
  }
  return 3221225713LL;
}
