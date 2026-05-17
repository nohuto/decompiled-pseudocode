/*
 * XREFs of EtwpIncrementUmLoggerFile @ 0x1801226D4
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180006C90 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     EtwpQueryUmLogger @ 0x180007D88 (EtwpQueryUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180007EC0 (EtwpGetPrivateLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x180090FC8 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpIncrementUmLoggerFile(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  ULONG v10; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 0LL;
  result = EtwpGetPrivateLoggerContext(a4, &v12);
  if ( !(_DWORD)result )
  {
    v9 = v12;
    if ( (*(_BYTE *)(v12 + 308) & 8) == 0 )
    {
      v10 = 87;
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return v10;
    }
    EtwpSynchronizeWithLogger(v12, 2);
    v11 = EtwpSynchronizeWithLogger(v9, 4);
    if ( v11 )
    {
      v10 = RtlNtStatusToDosError(v11);
      if ( v10 )
        goto LABEL_10;
    }
    else
    {
      v10 = 0;
    }
    EtwpQueryUmLogger(a1, a2, a3, a4);
    goto LABEL_10;
  }
  return result;
}
