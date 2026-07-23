/*
 * XREFs of ObpCloseHandle @ 0x1406E76B0
 * Callers:
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x14022F830 (ExGetHandlePointer.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     PsDereferenceSiloContext @ 0x14036A410 (PsDereferenceSiloContext.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1403C7208 (ExQueryHandleExceptionsPermanency.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1405713D0 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x140606F78 (ExHandleLogBadReference.c)
 *     ObpDeleteDirectoryEntry @ 0x140697854 (ObpDeleteDirectoryEntry.c)
 *     ObpLockDirectoryExclusive @ 0x140697B24 (ObpLockDirectoryExclusive.c)
 *     ObpDeleteSymbolicLinkName @ 0x140697B5C (ObpDeleteSymbolicLinkName.c)
 *     ObpUnlockDirectory @ 0x1406C3278 (ObpUnlockDirectory.c)
 *     ExpLookupHandleTableEntry @ 0x1406E6960 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     ObpLookupDirectoryEntry @ 0x1407B7018 (ObpLookupDirectoryEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407BA970 (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB71A (ExpGetHandleExtraInfo.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CE1D0 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1409E6E1C (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x1409F94E8 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCloseHandle(__int64 BugCheckParameter1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rsi
  _KPROCESS *Process; // r15
  __int64 v6; // r14
  signed __int64 *v7; // rbx
  signed __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 HandlePointer; // r15
  __int64 v12; // rdi
  __int64 v13; // r13
  unsigned int v14; // r12d
  ULONG_PTR v15; // rdi
  signed __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  signed __int64 v21; // rsi
  struct _EX_RUNDOWN_REF *v22; // r13
  _KPROCESS *v24; // r13
  struct _KTHREAD *v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  struct _KTHREAD *v32; // rax
  volatile signed __int32 *v33; // r14
  int v34; // r8d
  struct _KTHREAD *v35; // rax
  ULONG_PTR v36; // rax
  _QWORD *v37; // r8
  _QWORD *v38; // rbx
  struct _KTHREAD *v39; // rax
  __int64 v40; // rdx
  _QWORD *HandleExtraInfo; // rax
  __int64 v42; // rax
  signed __int32 v43[8]; // [rsp+0h] [rbp-B9h] BYREF
  char v44; // [rsp+30h] [rbp-89h]
  char v45; // [rsp+31h] [rbp-88h] BYREF
  char v46; // [rsp+32h] [rbp-87h]
  _BYTE v47[5]; // [rsp+33h] [rbp-86h] BYREF
  ULONG_PTR BugCheckParameter1a; // [rsp+38h] [rbp-81h]
  __int128 v49; // [rsp+48h] [rbp-71h] BYREF
  __int64 v50; // [rsp+58h] [rbp-61h]
  int v51; // [rsp+60h] [rbp-59h]
  unsigned __int64 v52; // [rsp+68h] [rbp-51h]
  __int64 v53; // [rsp+70h] [rbp-49h]
  $115DCDF994C6370D29323EAB0E0C9502 v54; // [rsp+78h] [rbp-41h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v55; // [rsp+A8h] [rbp-11h] BYREF

  CurrentThread = KeGetCurrentThread();
  v47[0] = 0;
  v4 = BugCheckParameter1;
  v45 = 0;
  v46 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( !a2
    && (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
    && BugCheckParameter1 != -2
    && BugCheckParameter1 != -1 )
  {
    v4 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    v6 = ObpKernelHandleTable;
    BugCheckParameter1a = (ULONG_PTR)PsInitialSystemProcess;
    goto LABEL_4;
  }
  BugCheckParameter1a = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v6 = ObReferenceProcessHandleTable(Process);
    if ( v6 )
    {
      v46 = 1;
      goto LABEL_4;
    }
    return (unsigned int)-1073741816;
  }
  v6 = Process[1].Affinity.StaticBitmap[28];
  if ( v6 == ObpKernelHandleTable )
    return (unsigned int)-1073741816;
LABEL_4:
  --CurrentThread->KernelApcDisable;
  if ( (v4 & 0x3FC) == 0 || (v7 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v6, v4)) == 0LL )
  {
LABEL_84:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v4 > 0 || v4 < -6 )
    {
      ExQueryHandleExceptionsPermanency(v6, v47, &v45);
      if ( (*(_BYTE *)(v6 + 44) & 0x10) != 0 && v45 )
        ExHandleLogBadReference(v6, v4, a2);
      if ( a2 )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || Process[1].Affinity.StaticBitmap[29] || *(_QWORD *)(v6 + 96) )
        {
          if ( KeGetCurrentThread()->ApcStateIndex == 1 )
            v14 = -1073741816;
          else
            v14 = KeRaiseUserException(0xC0000008);
          goto LABEL_35;
        }
      }
      else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
             && Process[1].Affinity.StaticBitmap[24]
             && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
      }
    }
    v14 = -1073741816;
    if ( (unsigned __int64)v4 >= 0xFFFFFFFFFFFFFFFAuLL )
      v14 = 0;
    goto LABEL_35;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v7);
      v8 = *v7;
      if ( (*v7 & 1) != 0 )
        break;
      if ( !v8 )
        goto LABEL_84;
      ExpBlockOnLockedHandleEntry(v6, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  memset(&v54, 0, sizeof(v54));
  v44 = 0;
  HandlePointer = ExGetHandlePointer(v7);
  v53 = BYTE1(HandlePointer);
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  if ( *(_QWORD *)(v12 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1a )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v54);
      v44 = 1;
    }
    v22 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1a;
    if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, _QWORD))(v12 + 168))(
            BugCheckParameter1a,
            HandlePointer + 48,
            v4,
            a2) )
    {
      _InterlockedExchangeAdd64(v7, 1uLL);
      _InterlockedOr(v43, 0);
      if ( *(_QWORD *)(v6 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v6 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v44 )
        KiUnstackDetachProcess(&v54);
      v14 = -1073741259;
      goto LABEL_36;
    }
  }
  v13 = *v7 >> 17;
  if ( (v13 & 1) == 0 )
  {
    if ( (xmmword_140D1EAD0 & 0x40) != 0 )
    {
      v40 = v4;
      if ( (PEPROCESS)BugCheckParameter1a == PsInitialSystemProcess )
        v40 = v4 | 0x80000000LL;
      EtwpTraceHandle(4385LL, v40, HandlePointer + 48, v12);
    }
    if ( *(_QWORD *)(v6 + 96) )
      ExpUpdateDebugInfo(v6, KeGetCurrentThread(), v4, 2LL);
    v14 = 0;
    v51 = (unsigned __int16)((unsigned __int64)*(unsigned int *)v7 >> 1);
    *v7 = 0LL;
    _InterlockedOr(v43, 0);
    if ( *(_QWORD *)(v6 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v6 + 48), 0LL);
    v52 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_DWORD *)(v6 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v6, v52, v9, v10);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    v7[1] = 0LL;
    if ( (*(_BYTE *)(v6 + 44) & 1) != 0 )
    {
      v15 = v6 + 64;
      ExAcquirePushLockExclusiveEx(v6 + 64, 0LL);
      v42 = *(_QWORD *)(v6 + 80);
      if ( v42 )
        *(_QWORD *)(v42 + 8) = v7;
      else
        *(_QWORD *)(v6 + 72) = v7;
      *(_QWORD *)(v6 + 80) = v7;
    }
    else
    {
      v15 = v6 + ((KeGetPcr()->Prcb.Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v15, 0LL);
      v16 = *(_QWORD *)(v15 + 8);
      v7[1] = v16;
      if ( !v16 )
        *(_QWORD *)(v15 + 16) = v7;
      *(_QWORD *)(v15 + 8) = v7;
    }
    --*(_DWORD *)(v15 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v15);
    KeAbPostRelease(v15);
    KeLeaveCriticalRegion();
    if ( (v13 & 4) != 0 )
    {
      LOBYTE(v17) = 1;
      SeCloseObjectAuditAlarm(HandlePointer + 48, v4 & 0xFFFFFFFFFFFFFFFCuLL, v17);
    }
    v18 = 0LL;
    v19 = *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v53;
    memset(&v55, 0, sizeof(v55));
    v20 = ObTypeIndexTable[v19];
    if ( (*(_BYTE *)(v20 + 66) & 0x10) == 0 && (*(_BYTE *)(HandlePointer + 27) & 8) == 0 )
    {
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_27:
      if ( *(_QWORD *)(v20 + 128) )
      {
        v24 = (_KPROCESS *)BugCheckParameter1a;
        if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1a )
        {
          (*(void (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, signed __int64))(v20 + 128))(
            BugCheckParameter1a,
            HandlePointer + 48,
            v18,
            v21);
        }
        else
        {
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(BugCheckParameter1a);
          v29 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess(v24, 0, (__int64)&v55);
          (*(void (__fastcall **)(_KPROCESS *, unsigned __int64, __int64, signed __int64))(v20 + 128))(
            v24,
            HandlePointer + 48,
            v18,
            v21);
          KiUnstackDetachProcess(&v55);
          PsDetachSiloFromCurrentThread(v29);
        }
      }
      if ( v21 == 1 && (*(_BYTE *)(HandlePointer + 26) & 2) != 0 )
      {
        v30 = ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 3];
        v31 = HandlePointer - v30;
        if ( HandlePointer != v30 )
        {
          while ( 1 )
          {
            v32 = KeGetCurrentThread();
            --v32->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(HandlePointer + 16, 0LL);
            v33 = *(volatile signed __int32 **)v31;
            if ( !*(_QWORD *)v31 || (*(_BYTE *)(HandlePointer + 27) & 0x10) != 0 || *(_QWORD *)(HandlePointer + 8) )
            {
              ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
              KeLeaveCriticalRegion();
              goto LABEL_30;
            }
            v50 = 0x10000000000LL;
            v35 = KeGetCurrentThread();
            v49 = (unsigned __int64)v33;
            --v35->KernelApcDisable;
            v36 = KeAbPreAcquire((__int64)(v33 + 74), 0LL);
            if ( !_interlockedbittestandset64(v33 + 74, 0LL) )
              break;
            if ( v36 )
              KeAbPostReleaseEx((ULONG_PTR)(v33 + 74), v36);
            KeLeaveCriticalRegion();
            *(_QWORD *)&v49 = 0LL;
            BYTE5(v50) = 0;
            ObfReferenceObject((PVOID)v33);
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
            ObpLockDirectoryExclusive((__int64)&v49, (__int64)v33);
            v39 = KeGetCurrentThread();
            --v39->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(HandlePointer + 16, 0LL);
            if ( *(volatile signed __int32 **)v31 == v33
              && (*(_BYTE *)(HandlePointer + 27) & 0x10) == 0
              && !*(_QWORD *)(HandlePointer + 8) )
            {
              PsDereferenceSiloContext((void *)v33);
              goto LABEL_73;
            }
            if ( (_QWORD)v49 )
              ObpUnlockDirectory((__int64)&v49);
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext((void *)v33);
          }
          if ( v36 )
            *(_BYTE *)(v36 + 18) = 1;
LABEL_73:
          if ( *(_DWORD *)(v31 + 24) )
          {
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            if ( (POBJECT_TYPE)ObTypeIndexTable[*(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v53] == ObpSymbolicLinkObjectType )
              ObpDeleteSymbolicLinkName(HandlePointer + 48);
            ObpLookupDirectoryEntry(v31 + 8, 0LL, &v49);
            v37 = (_QWORD *)*((_QWORD *)&v49 + 1);
            v38 = (_QWORD *)**((_QWORD **)&v49 + 1);
            *(_QWORD *)(*(_QWORD *)(**((_QWORD **)&v49 + 1) + 8LL)
                      - 48LL
                      - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(**((_QWORD **)&v49 + 1) + 8LL) - 48LL + 26) & 3]) = 0LL;
            *v37 = *v38;
            *v38 = 0LL;
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
            if ( v38 )
              ObpDeleteDirectoryEntry(v38, (void **)&v49);
          }
          if ( (_QWORD)v49 )
            ObpUnlockDirectory((__int64)&v49);
        }
      }
LABEL_30:
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 48));
      if ( v44 )
        KiUnstackDetachProcess(&v54);
      if ( v51 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, -v51);
      ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), 0x6E48624Fu);
      goto LABEL_35;
    }
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(HandlePointer + 16, 0LL);
    v21 = *(_QWORD *)(HandlePointer + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
    {
      *(_QWORD *)(HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v20 + 66) & 0x10) == 0 )
    {
LABEL_57:
      ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(HandlePointer + 26) & 4) != 0 )
      v26 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 7];
    else
      v26 = 0LL;
    if ( (*(_BYTE *)(HandlePointer + 27) & 0x40) != 0 )
    {
      v27 = *(_DWORD *)(v26 + 8);
      v18 = v27 & 0xFFFFFF;
    }
    else
    {
      v34 = **(_DWORD **)v26;
      v26 = *(_QWORD *)v26 + 8LL;
      if ( !v34 )
        goto LABEL_54;
      while ( 1 )
      {
        v27 = *(_DWORD *)(v26 + 8);
        if ( (v27 & 0xFFFFFF) != 0 && *(_QWORD *)v26 == BugCheckParameter1a )
          break;
        v26 += 16LL;
        if ( !--v34 )
          goto LABEL_54;
      }
      v18 = *(_DWORD *)(v26 + 8) & 0xFFFFFF;
    }
    *(_DWORD *)(v26 + 8) = v27 ^ (v27 ^ (v27 - 1)) & 0xFFFFFF;
LABEL_54:
    if ( !*(_BYTE *)(v26 + 11) && (*(_DWORD *)(v26 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v26 = 0LL;
    goto LABEL_57;
  }
  if ( !a2 )
    KeBugCheckEx(0x93u, v4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(v7, 1uLL);
  _InterlockedOr(v43, 0);
  if ( *(_QWORD *)(v6 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v6 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v44 )
    KiUnstackDetachProcess(&v54);
  if ( KeGetCurrentThread()->ApcStateIndex != 1
    && ((NtGlobalFlag & 0x400000) != 0
     || KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[29]
     || *(_QWORD *)(v6 + 96)) )
  {
    v14 = KeRaiseUserException(0xC0000235);
  }
  else
  {
    v14 = -1073741259;
  }
LABEL_35:
  v22 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1a;
LABEL_36:
  if ( v46 )
    ExReleaseRundownProtection_0(v22 + 139);
  return v14;
}
