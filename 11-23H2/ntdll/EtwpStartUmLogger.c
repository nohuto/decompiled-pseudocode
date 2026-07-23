/*
 * XREFs of EtwpStartUmLogger @ 0x18005BB9C
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18005BA20 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     EtwpFreeLoggerContext @ 0x18005AA6C (EtwpFreeLoggerContext.c)
 *     EtwpCreateEtwThread @ 0x18005BEC0 (EtwpCreateEtwThread.c)
 *     EtwpInitLoggerContext @ 0x18005BF28 (EtwpInitLoggerContext.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18005C500 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetNextAvailableLoggerId @ 0x18005C5C4 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005C6AC (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSendSessionNotification @ 0x18005E45C (EtwpSendSessionNotification.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x18005F0C0 (EtwpGetUmLoggerInfoFromContext.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 *     EtwpRegisterPrivateSession @ 0x180125960 (EtwpRegisterPrivateSession.c)
 *     EtwpInitializeCompression @ 0x1801265D8 (EtwpInitializeCompression.c)
 */

ULONG __fastcall EtwpStartUmLogger(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v4; // cf
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // r8d
  unsigned __int64 v10; // rcx
  int v11; // eax
  ULONG result; // eax
  unsigned int NumberOfProcessors; // r8d
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r9
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  ULONG TraceBufferPool; // esi
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 EtwThread; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // edx
  NTSTATUS v27; // eax
  void *v28; // rcx
  char v29[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 inited; // [rsp+38h] [rbp-51h]
  unsigned int v31; // [rsp+40h] [rbp-49h] BYREF
  __int64 v32; // [rsp+48h] [rbp-41h] BYREF
  _DWORD *v33; // [rsp+50h] [rbp-39h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v35; // [rsp+68h] [rbp-21h]

  v33 = a3;
  v4 = *(_DWORD *)a4 < 0xB0u;
  inited = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( v4 )
    return 87;
  v9 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v9 & 0x40B) != 0 )
  {
    v10 = (v9 & 0x40B) - (((unsigned __int64)(v9 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v10 & 0x3333333333333333LL)
          + ((v10 >> 2) & 0x3333333333333333LL)
          + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 == 1 )
      goto LABEL_4;
    return 87;
  }
  v9 |= 1u;
  *(_DWORD *)(a4 + 64) = v9;
LABEL_4:
  if ( (v9 & 0x2000000) != 0
    || (v9 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87;
  }
  v11 = *(_DWORD *)(a4 + 76);
  if ( v11 )
  {
    if ( *(_DWORD *)(a4 + 68) || v11 < 0 )
      return 87;
  }
  if ( (v9 & 6) == 6
    || (v9 & 0xC000) == 0xC000
    || (v9 & 0x4000000) != 0 && ((v9 & 2) != 0 || (v9 & 4) != 0 || (v9 & 0x20) != 0 || (v9 & 0x400) != 0) )
  {
    return 87;
  }
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(inited + 20) + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v31);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v26 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v8 = *(_DWORD *)a4 - v26;
      v7 = a4 + v26;
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v14 = v31;
    inited = EtwpInitLoggerContext(a4, v31, NumberOfProcessors, v7, v8);
    v15 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v14 + 8));
      return 8;
    }
    v16 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    *(_DWORD *)(inited + 192) = ~(v35 - 1) & (*(_DWORD *)(inited + 192) + v35 - 1);
    if ( (*(_DWORD *)(v15 + 308) & 0x4000000) != 0 )
    {
      v27 = EtwpInitializeCompression(v15);
      if ( v27 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v27);
        if ( TraceBufferPool )
          goto LABEL_54;
      }
    }
    if ( (*(_DWORD *)(v15 + 308) & 0x400) == 0 )
    {
      LOBYTE(v17) = (*(_DWORD *)(v15 + 308) & 4) != 0;
      v18 = EtwpAddLogHeaderToLogFile(v15, v7, v8, v17);
      if ( v18 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v18);
        if ( TraceBufferPool )
          goto LABEL_54;
      }
    }
    v19 = *(unsigned int *)(v15 + 192);
    v20 = 0xFFFF;
    if ( (unsigned __int64)(v19 - 72) < 0xFFFF )
      v20 = v19 - 72;
    *(_DWORD *)(v15 + 196) = v20 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(v15);
    if ( TraceBufferPool )
      goto LABEL_54;
    if ( (*(_DWORD *)(v15 + 308) & 0x20000) == 0 )
    {
      TraceBufferPool = EtwpRegisterPrivateSession(*(unsigned __int16 *)(v15 + 20), &v32, v29);
      if ( TraceBufferPool )
        goto LABEL_54;
      *(_QWORD *)(v15 + 544) = v32;
    }
    v22 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v22 + 8));
    v23 = inited;
    if ( (*(_DWORD *)(v15 + 308) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(EtwpLogger, inited);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
        goto LABEL_28;
      }
      *(_QWORD *)(v23 + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, v23, v29);
    _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 8 * v22), v23);
    EtwpSendSessionNotification(inited, 5LL, 0LL);
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v22 + 8));
    if ( !TraceBufferPool )
    {
      v25 = v33;
      *a2 = *(_DWORD *)a4;
      *v25 = *(_DWORD *)a4;
      return TraceBufferPool;
    }
    v15 = inited;
LABEL_54:
    v28 = *(void **)(v15 + 128);
    if ( v28 )
    {
      NtClose(v28);
      *(_QWORD *)(v15 + 128) = 0LL;
    }
    EtwpFreeLoggerContext((unsigned int *)v15);
    return TraceBufferPool;
  }
  return result;
}
