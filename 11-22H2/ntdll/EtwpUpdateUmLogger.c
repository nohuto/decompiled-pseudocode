/*
 * XREFs of EtwpUpdateUmLogger @ 0x180124AC4
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18005EA20 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18005F480 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpQueryUmLogger @ 0x180062018 (EtwpQueryUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180062234 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180062284 (EtwpGetPrivateLoggerContext.c)
 */

__int64 __fastcall EtwpUpdateUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  _UNICODE_STRING v16; // xmm6
  NTSTATUS v17; // eax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234LL;
  result = EtwpGetPrivateLoggerContext(a4, &v19);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v19;
    if ( (*(_BYTE *)(a4 + 64) & 2) != 0 && (*(_BYTE *)(v19 + 308) & 1) != 0
      || (*(_BYTE *)(a4 + 64) & 1) != 0 && (*(_BYTE *)(v19 + 308) & 2) != 0
      || (*(_DWORD *)(a4 + 64) & 0x100) != 0
      || (v11 = *(_DWORD *)(v19 + 308), (v11 & 0x400) != 0)
      || (v11 & 0x10000) != 0
      || *(_DWORD *)(a4 + 76) && *(_DWORD *)(a4 + 68) )
    {
      v9 = 87;
LABEL_28:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v10 + 20) + 8));
      return v9;
    }
    *(_QWORD *)(a4 + 152) = a4 + 176;
    *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
    if ( *(_DWORD *)(a4 + 68) )
      *(_QWORD *)(v10 + 328) = EtwpOneSecond * *(unsigned int *)(a4 + 68);
    v12 = *(_DWORD *)(a4 + 76);
    if ( v12 )
    {
      v13 = *(_DWORD *)(a4 + 76);
      v14 = *(_DWORD *)(v10 + 200) - *(_DWORD *)(v10 + 188) - 1;
      if ( v12 > v14 )
      {
        *(_DWORD *)(a4 + 76) = v14;
        v13 = v14;
      }
      v12 = v13;
      if ( v13 < 0 )
      {
        *(_DWORD *)(a4 + 76) = 0;
        v12 = 0;
      }
    }
    *(_DWORD *)(v10 + 352) = v12;
    if ( *(_WORD *)(a4 + 128) )
    {
      v15 = *(_DWORD *)(v10 + 60);
      v16 = *(_UNICODE_STRING *)(v10 + 152);
      UnicodeString = v16;
      v9 = EtwpAddInstanceIdToLogFileName(a4, v15, (_UNICODE_STRING *)(v10 + 152));
      if ( v9 )
      {
LABEL_23:
        *(_UNICODE_STRING *)(v10 + 152) = v16;
        goto LABEL_28;
      }
      EtwpSynchronizeWithLogger(v10, 2);
      v17 = EtwpSynchronizeWithLogger(v10, 4);
      if ( v17 )
      {
        v9 = RtlNtStatusToDosError(v17);
        if ( v9 )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 152));
          goto LABEL_23;
        }
      }
      else
      {
        v9 = 0;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    EtwpQueryUmLogger(a1, a2, a3, a4);
    goto LABEL_28;
  }
  return result;
}
