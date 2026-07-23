/*
 * XREFs of RtlDeleteCriticalSection @ 0x18001E130
 * Callers:
 *     RtlDeleteResource @ 0x18001E420 (RtlDeleteResource.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x18010F2E0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFreeDebugInfo @ 0x18001E3C0 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 *     RtlStdReleaseStackTrace @ 0x18010E020 (RtlStdReleaseStackTrace.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r14d
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // r8
  _LIST_ENTRY *p_ProcessLocksList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rdx
  signed __int64 v11; // rax
  __int64 v12; // rdx
  signed __int64 v13; // rcx
  __int64 v14; // rdx
  signed __int64 v15; // rdx
  signed __int64 v16; // rtt
  _QWORD *v17; // r9
  __int64 i; // rcx
  __int64 v19; // rax
  bool v20; // zf
  signed __int64 v21; // rax
  __int64 v22; // rdi
  void *v23; // rax
  signed __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx

  LockSemaphore = (char *)CriticalSection->LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = NtClose(LockSemaphore);
  else
    v3 = 0;
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].SpareUSHORT + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = CriticalSection->SpinCount & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    Flink = DebugInfo->ProcessLocksList.Flink;
    if ( Flink )
    {
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, 1LL);
    if ( v11 != 1 )
    {
      v7 = -1LL;
      do
      {
        v13 = v11 & 6;
        v14 = 3LL;
        if ( v13 != 2 )
          v14 = -1LL;
        v15 = v11 + v14;
        v16 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v15, v11);
      }
      while ( v16 != v11 );
      if ( v13 == 2 )
      {
        while ( (v15 & 1) == 0 )
        {
LABEL_20:
          v7 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( i = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v17[1] )
          {
            v25 = v17;
            v17 = (_QWORD *)*v17;
            v17[2] = v25;
          }
          if ( v17 != (_QWORD *)v7 )
            *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = i;
          if ( (*(_DWORD *)(i + 36) & 1) != 0 )
          {
            v19 = *(_QWORD *)(i + 16);
            if ( v19 )
            {
              *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v19;
              *(_QWORD *)(i + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_26:
                v22 = *(_QWORD *)(i + 16);
                v23 = *(void **)(i + 24);
                _interlockedbittestandset((volatile signed __int32 *)(i + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(i + 36), 1u) )
                  ZwAlertThreadByThreadId(v23);
                i = v22;
              }
              while ( v22 );
              goto LABEL_11;
            }
          }
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, v15);
          v20 = v15 == v21;
          v15 = v21;
          if ( v20 )
            goto LABEL_26;
        }
        while ( 1 )
        {
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v15 - 4, v15);
          v20 = v15 == v24;
          v15 = v24;
          if ( v20 )
            break;
          if ( (v24 & 1) == 0 )
            goto LABEL_20;
        }
      }
    }
LABEL_11:
    v12 = DebugInfo->CreatorBackTraceIndex + (DebugInfo->CreatorBackTraceIndexHigh << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( (_DWORD)v12 )
      {
        if ( (unsigned int)v12 <= HIDWORD(RtlpStackTraceDatabase[22].Ptr) )
        {
          v26 = *(_QWORD *)(RtlpStackTraceDatabase[23].Value - 8 * v12);
          if ( v26 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace(RtlpStackTraceDatabase, v26, v7);
          }
        }
      }
    }
    *(_OWORD *)&DebugInfo->Type = 0LL;
    DebugInfo->ProcessLocksList = 0LL;
    *(_OWORD *)&DebugInfo->EntryCount = 0LL;
    if ( !v6 )
      RtlpFreeDebugInfo(DebugInfo);
  }
  *(_OWORD *)&CriticalSection->DebugInfo = 0LL;
  *(_OWORD *)&CriticalSection->OwningThread = 0LL;
  CriticalSection->SpinCount = 0LL;
  return v3;
}
