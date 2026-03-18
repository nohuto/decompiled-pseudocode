/*
 * XREFs of ObpCloseHandle @ 0x140734160
 * Callers:
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x14025032C (ExHandleLogBadReference.c)
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14025C4BC (ExQueryHandleExceptionsPermanency.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x14056E010 (KeRaiseUserException.c)
 *     ObpDeleteDirectoryEntry @ 0x140668C60 (ObpDeleteDirectoryEntry.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ObpLookupDirectoryEntry @ 0x1406A9B40 (ObpLookupDirectoryEntry.c)
 *     ObpLockDirectoryExclusive @ 0x1406B96B0 (ObpLockDirectoryExclusive.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B96E8 (ObpDeleteSymbolicLinkName.c)
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407ED9FC (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetHandleExtraInfo @ 0x140883EDC (ExpGetHandleExtraInfo.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CAD20 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x1409E3B48 (EtwpTraceHandle.c)
 *     ExpUpdateDebugInfo @ 0x1409F92FC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCloseHandle(__int64 BugCheckParameter1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // r14
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // r15
  signed __int64 *v7; // rbx
  signed __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int8 (__fastcall *v11)(ULONG_PTR, unsigned __int64, __int64, _QWORD); // r10
  __int64 v12; // r13
  unsigned int v13; // r12d
  ULONG_PTR v14; // rdi
  signed __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  signed __int64 v20; // r14
  struct _EX_RUNDOWN_REF *v21; // r13
  struct _KTHREAD *v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v27; // rbx
  _DWORD *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rbx
  struct _KTHREAD *v31; // rax
  __int64 v32; // r15
  struct _KTHREAD *v33; // rax
  unsigned __int64 v34; // rax
  _QWORD *v35; // r8
  _QWORD *v36; // rbx
  int v37; // r8d
  int v38; // ecx
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
  _OWORD v54[3]; // [rsp+78h] [rbp-41h] BYREF
  _OWORD v55[3]; // [rsp+A8h] [rbp-11h] BYREF

  CurrentThread = KeGetCurrentThread();
  v47[0] = 0;
  v4 = BugCheckParameter1;
  v45 = 0;
  v46 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( !a2
    && (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
    && BugCheckParameter1 != -2
    && BugCheckParameter1 != -1 )
  {
    v4 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    Count = ObpKernelHandleTable;
    BugCheckParameter1a = (ULONG_PTR)PsInitialSystemProcess;
    goto LABEL_4;
  }
  BugCheckParameter1a = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    Count = ObReferenceProcessHandleTable(Process);
    if ( Count )
    {
      v46 = 1;
      goto LABEL_4;
    }
    return (unsigned int)-1073741816;
  }
  Count = Process[174].Count;
  if ( Count == ObpKernelHandleTable )
    return (unsigned int)-1073741816;
LABEL_4:
  --CurrentThread->KernelApcDisable;
  if ( (v4 & 0x3FC) == 0 || (v7 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)Count, v4)) == 0LL )
  {
LABEL_80:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v4 > 0 || v4 < -6 )
    {
      ExQueryHandleExceptionsPermanency(Count, v47, &v45);
      if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v45 )
        ExHandleLogBadReference(Count, v4, a2);
      if ( a2 )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || Process[175].Count || *(_QWORD *)(Count + 96) )
        {
          if ( KeGetCurrentThread()->ApcStateIndex == 1 )
            v13 = -1073741816;
          else
            v13 = KeRaiseUserException(0xC0000008);
          goto LABEL_37;
        }
      }
      else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
             && Process[170].Count
             && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
      }
    }
    v38 = -1073741816;
    if ( (unsigned __int64)(v4 + 6) <= 5 )
      v38 = 0;
    v13 = v38;
    goto LABEL_37;
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
        goto LABEL_80;
      ExpBlockOnLockedHandleEntry(Count, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  v9 = (*v7 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v44 = 0;
  memset(v54, 0, sizeof(v54));
  v53 = BYTE1(v9);
  v10 = ObTypeIndexTable[*(unsigned __int8 *)(v9 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)BYTE1(v9)];
  v11 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, _QWORD))(v10 + 168);
  if ( v11 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1a )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)v54, (_DWORD *)BugCheckParameter1a);
      v11 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, _QWORD))(v10 + 168);
      v44 = 1;
    }
    v21 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1a;
    if ( !v11(BugCheckParameter1a, v9 + 48, v4, a2) )
    {
      _InterlockedExchangeAdd64(v7, 1uLL);
      _InterlockedOr(v43, 0);
      if ( *(_QWORD *)(Count + 48) )
        ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v44 )
        KiUnstackDetachProcess((__int64)v54, 0LL);
      v13 = -1073741259;
      goto LABEL_38;
    }
  }
  v12 = *v7 >> 17;
  if ( (v12 & 1) == 0 )
  {
    if ( (xmmword_140D06910 & 0x40) != 0 )
    {
      v40 = v4;
      if ( (PEPROCESS)BugCheckParameter1a == PsInitialSystemProcess )
        v40 = v4 | 0x80000000LL;
      EtwpTraceHandle(4385LL, v40, v9 + 48, v10);
    }
    if ( *(_QWORD *)(Count + 96) )
      ExpUpdateDebugInfo(Count, KeGetCurrentThread(), v4, 2LL);
    v13 = 0;
    v51 = (unsigned __int16)((unsigned __int64)*(unsigned int *)v7 >> 1);
    *v7 = 0LL;
    _InterlockedOr(v43, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
    v52 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_DWORD *)(Count + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(Count);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    v7[1] = 0LL;
    if ( (*(_BYTE *)(Count + 44) & 1) != 0 )
    {
      v14 = Count + 64;
      ExAcquirePushLockExclusiveEx(Count + 64, 0LL);
      v42 = *(_QWORD *)(Count + 80);
      if ( v42 )
        *(_QWORD *)(v42 + 8) = v7;
      else
        *(_QWORD *)(Count + 72) = v7;
      *(_QWORD *)(Count + 80) = v7;
    }
    else
    {
      v14 = Count + ((KeGetPcr()->Prcb.Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v14, 0LL);
      v15 = *(_QWORD *)(v14 + 8);
      v7[1] = v15;
      if ( !v15 )
        *(_QWORD *)(v14 + 16) = v7;
      *(_QWORD *)(v14 + 8) = v7;
    }
    --*(_DWORD *)(v14 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    KeAbPostRelease(v14);
    KeLeaveCriticalRegion();
    if ( (v12 & 4) != 0 )
    {
      LOBYTE(v16) = 1;
      SeCloseObjectAuditAlarm(v9 + 48, v4 & 0xFFFFFFFFFFFFFFFCuLL, v16);
    }
    v17 = 0LL;
    v18 = *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v53;
    memset(v55, 0, sizeof(v55));
    v19 = ObTypeIndexTable[v18];
    if ( (*(_BYTE *)(v19 + 66) & 0x10) == 0 && (*(_BYTE *)(v9 + 27) & 8) == 0 )
    {
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_27:
      if ( *(_QWORD *)(v19 + 128) )
      {
        if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1a )
        {
          (*(void (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, signed __int64))(v19 + 128))(
            BugCheckParameter1a,
            v9 + 48,
            v17,
            v20);
        }
        else
        {
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(BugCheckParameter1a);
          v27 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)v55, v28);
          (*(void (__fastcall **)(ULONG_PTR, unsigned __int64, __int64, signed __int64))(v19 + 128))(
            BugCheckParameter1a,
            v9 + 48,
            v17,
            v20);
          KiUnstackDetachProcess((__int64)v55, 0LL);
          PsDetachSiloFromCurrentThread(v27);
        }
      }
      if ( v20 == 1 && (*(_BYTE *)(v9 + 26) & 2) != 0 )
      {
        v29 = ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 3];
        v30 = v9 - v29;
        if ( v9 != v29 )
        {
          while ( 1 )
          {
            v31 = KeGetCurrentThread();
            --v31->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
            v32 = *(_QWORD *)v30;
            if ( !*(_QWORD *)v30 || (*(_BYTE *)(v9 + 27) & 0x10) != 0 || *(_QWORD *)(v9 + 8) )
            {
              ExReleasePushLockEx(v9 + 16, 0LL);
              KeLeaveCriticalRegion();
              goto LABEL_32;
            }
            v50 = 0x10000000000LL;
            v33 = KeGetCurrentThread();
            v49 = (unsigned __int64)v32;
            --v33->KernelApcDisable;
            v34 = KeAbPreAcquire(v32 + 296, 0LL);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 296), 0LL) )
              break;
            if ( v34 )
              KeAbPostReleaseEx(v32 + 296, v34);
            KeLeaveCriticalRegion();
            *(_QWORD *)&v49 = 0LL;
            BYTE5(v50) = 0;
            ObfReferenceObject((PVOID)v32);
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            ObpLockDirectoryExclusive((__int64)&v49, v32);
            v39 = KeGetCurrentThread();
            --v39->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
            if ( *(_QWORD *)v30 == v32 && (*(_BYTE *)(v9 + 27) & 0x10) == 0 && !*(_QWORD *)(v9 + 8) )
            {
              HalPutDmaAdapter((PADAPTER_OBJECT)v32);
              goto LABEL_67;
            }
            if ( (_QWORD)v49 )
              ObpUnlockDirectory((__int64)&v49);
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter((PADAPTER_OBJECT)v32);
          }
          if ( v34 )
            *(_BYTE *)(v34 + 18) = 1;
LABEL_67:
          if ( *(_DWORD *)(v30 + 24) )
          {
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            if ( (POBJECT_TYPE)ObTypeIndexTable[*(unsigned __int8 *)(v9 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v53] == ObpSymbolicLinkObjectType )
              ObpDeleteSymbolicLinkName(v9 + 48);
            ObpLookupDirectoryEntry((unsigned __int16 *)(v30 + 8), 0, (__int64 *)&v49);
            v35 = (_QWORD *)*((_QWORD *)&v49 + 1);
            v36 = (_QWORD *)**((_QWORD **)&v49 + 1);
            *(_QWORD *)(*(_QWORD *)(**((_QWORD **)&v49 + 1) + 8LL)
                      - 48LL
                      - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(**((_QWORD **)&v49 + 1) + 8LL) - 48LL + 26) & 3]) = 0LL;
            *v35 = *v36;
            *v36 = 0LL;
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            if ( v36 )
              ObpDeleteDirectoryEntry(v36, (void **)&v49);
          }
          if ( (_QWORD)v49 )
            ObpUnlockDirectory((__int64)&v49);
        }
      }
LABEL_32:
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 48));
      if ( v44 )
        KiUnstackDetachProcess((__int64)v54, 0LL);
      if ( v51 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -v51);
      ObfDereferenceObjectWithTag((PVOID)(v9 + 48), 0x6E48624Fu);
      goto LABEL_37;
    }
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
    v20 = *(_QWORD *)(v9 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v9 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v9 - ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v19 + 66) & 0x10) == 0 )
    {
LABEL_57:
      ExReleasePushLockEx(v9 + 16, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(v9 + 26) & 4) != 0 )
      v24 = v9 - ObpInfoMaskToOffset[*(_BYTE *)(v9 + 26) & 7];
    else
      v24 = 0LL;
    if ( (*(_BYTE *)(v9 + 27) & 0x40) != 0 )
    {
      v25 = *(_DWORD *)(v24 + 8);
      v17 = v25 & 0xFFFFFF;
    }
    else
    {
      v37 = **(_DWORD **)v24;
      v24 = *(_QWORD *)v24 + 8LL;
      if ( !v37 )
        goto LABEL_54;
      while ( 1 )
      {
        v25 = *(_DWORD *)(v24 + 8);
        if ( (v25 & 0xFFFFFF) != 0 && *(_QWORD *)v24 == BugCheckParameter1a )
          break;
        v24 += 16LL;
        if ( !--v37 )
          goto LABEL_54;
      }
      v17 = *(_DWORD *)(v24 + 8) & 0xFFFFFF;
    }
    *(_DWORD *)(v24 + 8) = v25 ^ (v25 ^ (v25 - 1)) & 0xFFFFFF;
LABEL_54:
    if ( !*(_BYTE *)(v24 + 11) && (*(_DWORD *)(v24 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v24 = 0LL;
    goto LABEL_57;
  }
  if ( !a2 )
    KeBugCheckEx(0x93u, v4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(v7, 1uLL);
  _InterlockedOr(v43, 0);
  if ( *(_QWORD *)(Count + 48) )
    ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v44 )
    KiUnstackDetachProcess((__int64)v54, 0LL);
  if ( KeGetCurrentThread()->ApcStateIndex != 1
    && ((NtGlobalFlag & 0x400000) != 0
     || KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[29]
     || *(_QWORD *)(Count + 96)) )
  {
    v13 = KeRaiseUserException(0xC0000235);
  }
  else
  {
    v13 = -1073741259;
  }
LABEL_37:
  v21 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1a;
LABEL_38:
  if ( v46 )
    ExReleaseRundownProtection(v21 + 139);
  return v13;
}
