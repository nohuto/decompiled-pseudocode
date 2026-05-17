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

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char *v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  signed __int64 v14; // rax
  __int64 v15; // rdx
  signed __int64 v16; // rcx
  __int64 v17; // rdx
  signed __int64 v18; // rdx
  signed __int64 v19; // rtt
  _QWORD *v20; // r9
  __int64 i; // rcx
  __int64 v22; // rax
  bool v23; // zf
  signed __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  signed __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx

  v5 = (char *)a1[3];
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v6 = NtClose(v5);
  else
    v6 = 0;
  v7 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, a2, a3, a4);
    v11 = v7 + 16;
    v12 = *(_QWORD *)(v7 + 16);
    if ( v12 )
    {
      v13 = *(_QWORD **)(v7 + 24);
      if ( *(_QWORD *)(v12 + 8) != v11 || *v13 != v11 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
    }
    v14 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, 1LL);
    if ( v14 != 1 )
    {
      v10 = -1LL;
      do
      {
        v16 = v14 & 6;
        v17 = 3LL;
        if ( v16 != 2 )
          v17 = -1LL;
        v18 = v14 + v17;
        v19 = v14;
        v14 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v18, v14);
      }
      while ( v19 != v14 );
      if ( v16 == 2 )
      {
        while ( (v18 & 1) == 0 )
        {
LABEL_20:
          v10 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
          v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( i = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v20[1] )
          {
            v28 = v20;
            v20 = (_QWORD *)*v20;
            v20[2] = v28;
          }
          if ( v20 != (_QWORD *)v10 )
            *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = i;
          if ( (*(_DWORD *)(i + 36) & 1) != 0 )
          {
            v22 = *(_QWORD *)(i + 16);
            if ( v22 )
            {
              *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v22;
              *(_QWORD *)(i + 16) = 0LL;
              _InterlockedAnd64(&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_26:
                v25 = *(_QWORD *)(i + 16);
                v26 = *(_QWORD *)(i + 24);
                _interlockedbittestandset((volatile signed __int32 *)(i + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(i + 36), 1u) )
                  ZwAlertThreadByThreadId(v26);
                i = v25;
              }
              while ( v25 );
              goto LABEL_11;
            }
          }
          v24 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, v18);
          v23 = v18 == v24;
          v18 = v24;
          if ( v23 )
            goto LABEL_26;
        }
        while ( 1 )
        {
          v27 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v18 - 4, v18);
          v23 = v18 == v27;
          v18 = v27;
          if ( v23 )
            break;
          if ( (v27 & 1) == 0 )
            goto LABEL_20;
        }
      }
    }
LABEL_11:
    v15 = *(unsigned __int16 *)(v7 + 2) + (*(unsigned __int16 *)(v7 + 44) << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( (_DWORD)v15 )
      {
        if ( (unsigned int)v15 <= *(_DWORD *)(RtlpStackTraceDatabase + 180) )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(RtlpStackTraceDatabase + 184) - 8 * v15);
          if ( v29 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace(RtlpStackTraceDatabase, v29, v10);
          }
        }
      }
    }
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    if ( !v9 )
      RtlpFreeDebugInfo(v7);
  }
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  a1[4] = 0LL;
  return v6;
}
