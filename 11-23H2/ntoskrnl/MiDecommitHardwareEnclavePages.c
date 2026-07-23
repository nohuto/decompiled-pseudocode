/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140647A30
 * Callers:
 *     MiDecommitEnclavePages @ 0x140A3E03C (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140AAD578 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlInterlockedSetClearRun @ 0x140296000 (RtlInterlockedSetClearRun.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeBlockEnclavePage @ 0x1405708D8 (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x140570AE0 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x140570B1C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140570BE0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140570C1C (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x140626DE8 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x140648370 (MiDeleteEnclavePage.c)
 */

char __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned int v9; // r14d
  ULONG_PTR v10; // r13
  unsigned int i; // eax
  ULONG_PTR v12; // rax
  ULONG_PTR j; // r12
  int v14; // eax
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // edi
  int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  __int64 v23; // r8
  __int64 *v24; // r14
  __int64 k; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  struct _KTHREAD *v28; // r14
  __int64 v29; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v31; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  int SessionId; // eax
  int v37; // edi
  _QWORD *v38; // rax
  struct _KTHREAD *v39; // rcx
  unsigned int v41; // ecx
  volatile signed __int32 *v42; // r9
  __int64 v43; // r10
  int v44; // r14d
  unsigned __int8 v46; // [rsp+30h] [rbp-1A8h]
  int v47; // [rsp+34h] [rbp-1A4h]
  __int64 v48; // [rsp+40h] [rbp-198h]
  unsigned __int64 v49; // [rsp+48h] [rbp-190h]
  unsigned int v50; // [rsp+50h] [rbp-188h]
  unsigned int v51; // [rsp+54h] [rbp-184h]
  unsigned __int64 ValidPte; // [rsp+58h] [rbp-180h] BYREF
  ULONG_PTR v53; // [rsp+60h] [rbp-178h]
  unsigned int v54; // [rsp+68h] [rbp-170h]
  int v55; // [rsp+6Ch] [rbp-16Ch]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-168h]
  __int64 v57; // [rsp+78h] [rbp-160h]
  int v58; // [rsp+80h] [rbp-158h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-150h]
  ULONG_PTR v60; // [rsp+90h] [rbp-148h]
  __int64 v61; // [rsp+98h] [rbp-140h]
  __int64 v62; // [rsp+A0h] [rbp-138h]
  __int64 v63; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v64; // [rsp+B0h] [rbp-128h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-120h]
  __int64 v66; // [rsp+C0h] [rbp-118h]
  _QWORD v67[24]; // [rsp+D0h] [rbp-108h] BYREF

  BugCheckParameter1 = a3;
  v57 = a2;
  v63 = a2;
  v64 = a3;
  ValidPte = 0LL;
  memset(v67, 0, 0xB8uLL);
  v61 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 1664;
  v48 = v7;
  v8 = 0LL;
  v49 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v60 = 0LL;
  v62 = 0LL;
  v55 = 0;
  LODWORD(v67[0]) = 1;
  WORD2(v67[0]) = 0;
  v67[2] = 0LL;
  LODWORD(v67[1]) = 20;
  v67[3] = 0LL;
  v50 = 2;
  v46 = MiLockWorkingSetShared(v7);
  for ( i = 0; ; i = v51 + 1 )
  {
    v51 = i;
    if ( i >= v50 )
      break;
    if ( i == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)v67, (__int64)(BugCheckParameter1 << 25) >> 16, 1LL, 0);
      MiFlushTbList((int *)v67);
      v8 = v49;
    }
    v12 = BugCheckParameter1;
    for ( j = BugCheckParameter1; ; j += 8LL )
    {
      v53 = j;
      if ( j > a4 )
        break;
      if ( (j & 0x78) == 0 && j != v12 )
      {
        LODWORD(ValidPte) = 0;
        if ( MiWorkingSetIsContended(v48)
          || KeShouldYieldProcessor()
          || v8 && (unsigned int)MiPageTableLockIsContended(v48, v8) )
        {
          v14 = 1;
        }
        else
        {
          v14 = ValidPte;
        }
        if ( v14 )
        {
          if ( v8 )
          {
            MiFlushTbList((int *)v67);
            MiUnlockPageTableInternal(v48, v8);
            v8 = 0LL;
            v49 = 0LL;
          }
          MiUnlockWorkingSetShared(v48, v46);
          MiLockWorkingSetShared(v48);
        }
      }
      if ( v8 )
      {
        if ( (j & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList((int *)v67);
        MiUnlockPageTableInternal(v48, v8);
      }
      v49 = ((j >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(j, 0LL, (*(_DWORD *)(v61 + 48) >> 12) & 0x7F, v46, 0);
LABEL_23:
      ValidPte = MI_READ_PTE_LOCK_FREE(j);
      if ( !ValidPte )
        goto LABEL_67;
      v15 = (__int64)(j << 25) >> 16;
      BugCheckParameter2 = v15;
      if ( v51 )
      {
        if ( v51 == 1 )
        {
          v17 = KeRemoveEnclavePage();
          v18 = v17;
          v47 = v17;
          if ( v17 < 0 )
          {
            if ( v17 != -1073741757 || a5 )
            {
              v18 = 0;
            }
            else
            {
              if ( !v10 )
              {
                while ( 1 )
                {
                  v19 = *(_DWORD *)qword_140C69898;
                  v20 = *(_QWORD *)(qword_140C69898 + 8);
                  v21 = (*(_DWORD *)(qword_140C69898 + 8) & 4) != 0LL ? 0x20 : 0;
                  v58 = 0;
                  v22 = v21 + v19 - 1;
                  v23 = v20 - ((v20 & 4) != 0 ? 4 : 0);
                  if ( !v19 )
                    goto LABEL_32;
                  v24 = (__int64 *)(v23 + 8 * ((unsigned __int64)v21 >> 6));
                  for ( k = ((1LL << v21) - 1) | *v24; k == -1; k = *v24 )
                  {
                    if ( (unsigned __int64)++v24 > v23 + 8 * ((unsigned __int64)v22 >> 6) )
                      goto LABEL_32;
                  }
                  _BitScanForward64(&v26, ~k);
                  v58 = v26;
                  v9 = v26 + ((unsigned int)(((__int64)v24 - v23) >> 3) << 6);
                  if ( v9 <= v22 )
                  {
                    if ( v9 != -1 )
                      v9 -= v21;
                  }
                  else
                  {
LABEL_32:
                    v9 = -1;
                  }
                  if ( v9 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140C69898, v9, 1u) )
                    goto LABEL_61;
                }
                MiFlushTbList((int *)v67);
                MiUnlockPageTableInternal(v48, v49);
                MiUnlockWorkingSetShared(v48, v46);
                --CurrentThread->SpecialApcDisable;
                v54 = 0;
                v66 = 0LL;
                v28 = KeGetCurrentThread();
                v29 = 0LL;
                _disable();
                AbEntrySummary = v28->AbEntrySummary;
                if ( v28->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v27, (__int64)v28)) != 0 )
                {
                  _BitScanForward(&v31, AbEntrySummary);
                  v54 = v31;
                  v28->AbEntrySummary = AbEntrySummary & ~(1 << v31);
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                  if ( SchedulerAssist )
                  {
                    _m_prefetchw(SchedulerAssist);
                    v34 = *SchedulerAssist;
                    do
                    {
                      v35 = v34;
                      v34 = _InterlockedCompareExchange(SchedulerAssist, v34 & 0xFFDFFFFF, v34);
                    }
                    while ( v35 != v34 );
                    if ( (v34 & 0x200000) != 0 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                  _enable();
                  v29 = (__int64)(&v28[1].Process + 12 * v54);
                  if ( (unsigned __int64)&qword_140C698A0 - qword_140C659E8 >= 0x8000000000LL )
                    SessionId = -1;
                  else
                    SessionId = MmGetSessionIdEx((__int64)v28->ApcState.Process);
                  *(_DWORD *)(v29 + 8) = SessionId;
                  *(_QWORD *)v29 = (unsigned __int64)&qword_140C698A0 & 0x7FFFFFFFFFFFFFFCLL;
                }
                if ( (_DWORD)v66 )
                  KiAbThreadRemoveBoostsSlow((ULONG_PTR)v28, (__int64)&qword_140C698A0, v66);
                if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C698A0, 0LL) )
                  ExfAcquirePushLockExclusiveEx(&qword_140C698A0, v29, (__int64)&qword_140C698A0);
                if ( v29 )
                  *(_BYTE *)(v29 + 18) = 1;
                v9 = 0;
                MiLockWorkingSetShared(v48);
                MiMakeSystemAddressValid(v53, 0LL, (*(_DWORD *)(v61 + 48) >> 12) & 0x7F, v46, 0);
LABEL_61:
                v10 = qword_140C69890 + 8 * v9;
                v60 = v10;
                ++v50;
                v18 = v47;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v18 < 0 )
            goto LABEL_66;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140C698A8);
            v37 = KeOutPageEnclavePage(v15, *(_QWORD *)(v57 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C698A8);
          }
          while ( v37 == -1073741802 );
          if ( v37 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v15, v37, 0LL);
        }
        MiDeleteEnclavePage(v53, 1LL);
      }
      else
      {
        v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
        ValidPte = MiMakeValidPte(v53, (v16 >> 12) & 0xFFFFFFFFFFLL, 3221225476LL);
        MiWriteValidPteNewProtection(v53, ValidPte);
      }
LABEL_66:
      MiInsertTbFlushEntry((__int64)v67, v15, 1LL, 0);
      j = v53;
LABEL_67:
      v8 = v49;
      v12 = BugCheckParameter1;
    }
    MiFlushTbList((int *)v67);
    v7 = v48;
    if ( v8 )
    {
      MiUnlockPageTableInternal(v48, v8);
      v8 = 0LL;
      v49 = 0LL;
    }
  }
  LOBYTE(v38) = MiUnlockWorkingSetShared(v7, v46);
  if ( v10 )
  {
    if ( v9 )
    {
      v41 = 1;
      v42 = (volatile signed __int32 *)(*(_QWORD *)(qword_140C69898 + 8) + 4 * ((unsigned __int64)v9 >> 5));
      v43 = v9 & 0x1F;
      LOBYTE(v38) = v43 + 1;
      if ( (unsigned __int64)(v43 + 1) > 0x20 )
      {
        v44 = v9 & 0x1F;
        if ( v44 )
        {
          LODWORD(v38) = ~(((1 << (32 - v44)) - 1) << v43);
          _InterlockedAnd(v42, (unsigned int)v38);
          v41 = 1 - (32 - v44);
          ++v42;
        }
        if ( v41 >= 0x20 )
        {
          v38 = (_QWORD *)((unsigned __int64)v41 >> 5);
          do
          {
            *v42++ = 0;
            v41 -= 32;
            v38 = (_QWORD *)((char *)v38 - 1);
          }
          while ( v38 );
        }
        if ( v41 )
          _InterlockedAnd(v42, -1 << v41);
      }
      else
      {
        _InterlockedAnd(v42, ~(1 << v43));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C698A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C698A0);
      LOBYTE(v38) = KeAbPostRelease((ULONG_PTR)&qword_140C698A0);
      v39 = CurrentThread;
      if ( CurrentThread->SpecialApcDisable++ == -1 )
      {
        v38 = &v39->152;
        if ( (_QWORD *)*v38 != v38 )
          LOBYTE(v38) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v38;
}
