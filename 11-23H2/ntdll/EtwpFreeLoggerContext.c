/*
 * XREFs of EtwpFreeLoggerContext @ 0x18005AA6C
 * Callers:
 *     EtwpLogger @ 0x18005B0E0 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x18005BB9C (EtwpStartUmLogger.c)
 *     EtwpStopUmLogger @ 0x18005F5F0 (EtwpStopUmLogger.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x18005ACD0 (RtlDeleteCriticalSection.c)
 *     EtwpFreeStreamIndexMap @ 0x18005AF60 (EtwpFreeStreamIndexMap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A1530 (ZwDelayExecution.c)
 *     EtwpShutdownCompression @ 0x18012669C (EtwpShutdownCompression.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v10; // r8
  __int64 v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // r8
  void *ProcessHeap; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v16 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v15 = -3000000;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v15);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v17 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 408, &v17, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 120));
  NtClose(*(HANDLE *)(a1 + 112));
  RtlDeleteCriticalSection(a1 + 72);
  if ( *(_QWORD *)(a1 + 144) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 136));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 168));
  v3 = *(_QWORD **)(a1 + 448);
  while ( v3 != (_QWORD *)(a1 + 448) )
  {
    v10 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  v4 = *(_QWORD **)(a1 + 464);
  while ( v4 != (_QWORD *)(a1 + 464) )
  {
    v11 = (__int64)v4;
    v12 = (_QWORD *)v4[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v12 == v4 + 3 )
        break;
      v13 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      RtlFreeHeap((__int64)ProcessHeap, 0, v13);
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap((__int64)ProcessHeap, 0, v11);
  }
  v5 = *(_QWORD *)(a1 + 496);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  v6 = *(_QWORD *)(a1 + 504);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = *(_QWORD *)(a1 + 520);
  if ( v7 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  v8 = *(_QWORD *)(a1 + 536);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  EtwpFreeStreamIndexMap(a1);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
