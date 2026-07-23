/*
 * XREFs of EtwpStopUmLogger @ 0x180005B64
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180006C90 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x180085D68 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     EtwpGetPrivateLoggerContext @ 0x180007EC0 (EtwpGetPrivateLoggerContext.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180007F54 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpStopLoggerInstance @ 0x1800909A0 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x180090FC8 (EtwpSynchronizeWithLogger.c)
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  ULONG PrivateLoggerContext; // esi
  _DWORD *v7; // rbx
  char v8; // r15
  __int64 v9; // r13
  int v10; // ebp
  void *v11; // r14
  NTSTATUS v12; // eax
  int v14; // [rsp+60h] [rbp+8h]
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+74h] [rbp+1Ch]

  v17 = HIDWORD(a3);
  BaseAddress = 0LL;
  v4 = 0;
  v14 = 0;
  v16 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &BaseAddress);
  if ( !PrivateLoggerContext )
  {
    v7 = BaseAddress;
    v8 = 1;
    v9 = *((unsigned int *)BaseAddress + 5);
    v10 = *((_DWORD *)BaseAddress + 77) & 0x400;
    v11 = (void *)*((_QWORD *)BaseAddress + 4);
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v4 = 1;
      v14 = *((_DWORD *)BaseAddress + 92);
      v16 = *((_DWORD *)BaseAddress + 93);
      *((_DWORD *)BaseAddress + 92) = *(_DWORD *)(a4 + 104);
      v7[93] = *(_DWORD *)(a4 + 112);
      if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
        *((_QWORD *)v7 + 45) = *(_QWORD *)(a4 + 16);
    }
    PrivateLoggerContext = EtwpStopLoggerInstance(v7);
    if ( !PrivateLoggerContext )
    {
      if ( v10 || (v12 = EtwpSynchronizeWithLogger(v7, 8LL), v12 >= 0) )
      {
        EtwpGetUmLoggerInfoFromContext(a4, v7, 0LL);
        v8 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
        if ( v10 )
          EtwpFreeLoggerContext(BaseAddress);
        v7 = 0LL;
        BaseAddress = 0LL;
        if ( v11 )
        {
          NtWaitForSingleObject(v11, 0, 0LL);
          NtClose(v11);
        }
      }
      else
      {
        PrivateLoggerContext = RtlNtStatusToDosError(v12);
      }
    }
    if ( v4 && v7 )
    {
      v7[92] = v14;
      v7[93] = v16;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
  }
  return PrivateLoggerContext;
}
