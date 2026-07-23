/*
 * XREFs of EtwpStopUmLogger @ 0x180062480
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18005EA20 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x180082058 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     EtwpFreeLoggerContext @ 0x18005DA64 (EtwpFreeLoggerContext.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180061F50 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpSynchronizeWithLogger @ 0x180062234 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180062284 (EtwpGetPrivateLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x1800625A4 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  char v6; // r12
  unsigned int PrivateLoggerContext; // edi
  _DWORD *v8; // rbx
  char v9; // r15
  int v10; // ebp
  void *v11; // r14
  NTSTATUS v12; // eax
  unsigned int v13; // esi
  int v15; // eax
  unsigned int v16; // [rsp+60h] [rbp+8h]
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h]
  int v19; // [rsp+74h] [rbp+1Ch]

  v19 = HIDWORD(a3);
  BaseAddress = 0LL;
  v4 = 0;
  v18 = 0;
  v6 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &BaseAddress);
  if ( PrivateLoggerContext )
    return PrivateLoggerContext;
  v8 = BaseAddress;
  v9 = 1;
  v10 = *((_DWORD *)BaseAddress + 77) & 0x400;
  v11 = (void *)*((_QWORD *)BaseAddress + 4);
  v16 = *((_DWORD *)BaseAddress + 5);
  if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
  {
    v6 = 1;
    v4 = *((_DWORD *)BaseAddress + 92);
    v18 = *((_DWORD *)BaseAddress + 93);
    *((_DWORD *)BaseAddress + 92) = *(_DWORD *)(a4 + 104);
    v8[93] = *(_DWORD *)(a4 + 112);
    if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
      *((_QWORD *)v8 + 45) = *(_QWORD *)(a4 + 16);
  }
  PrivateLoggerContext = EtwpStopLoggerInstance(v8);
  if ( !PrivateLoggerContext )
  {
    if ( v10 || (v12 = EtwpSynchronizeWithLogger((__int64)v8, 8), v12 >= 0) )
    {
      EtwpGetUmLoggerInfoFromContext(a4, (__int64)v8, 0LL);
      v13 = v16;
      v9 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v16 + 8));
      if ( v10 )
        EtwpFreeLoggerContext((unsigned int *)BaseAddress);
      v8 = 0LL;
      BaseAddress = 0LL;
      if ( v11 )
      {
        NtWaitForSingleObject(v11, 0, 0LL);
        NtClose(v11);
      }
      goto LABEL_10;
    }
    PrivateLoggerContext = RtlNtStatusToDosError(v12);
  }
  v13 = v16;
LABEL_10:
  if ( v6 && v8 )
  {
    v15 = v18;
    v8[92] = v4;
    v8[93] = v15;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v13 + 8));
  return PrivateLoggerContext;
}
