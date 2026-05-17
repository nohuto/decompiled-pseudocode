/*
 * XREFs of EtwpFreeLoggerContext @ 0x180091018
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x180006FB0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     EtwpFreeStreamIndexMap @ 0x180091218 (EtwpFreeStreamIndexMap.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A46F0 (ZwDelayExecution.c)
 *     EtwpShutdownCompression @ 0x1801237AC (EtwpShutdownCompression.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v13; // r8
  __int64 v14; // rbp
  _QWORD *v15; // r14
  __int64 v16; // r8
  void *ProcessHeap; // rcx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+54h] [rbp+Ch]
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v19 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v18 = -3000000;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v18);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v20 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 408, &v20, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 120));
  NtClose(*(HANDLE *)(a1 + 112));
  RtlDeleteCriticalSection((__int64 *)(a1 + 72), v3, v4, v5);
  if ( *(_QWORD *)(a1 + 144) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 136));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 168));
  v6 = *(_QWORD **)(a1 + 448);
  while ( v6 != (_QWORD *)(a1 + 448) )
  {
    v13 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  }
  v7 = *(_QWORD **)(a1 + 464);
  while ( v7 != (_QWORD *)(a1 + 464) )
  {
    v14 = (__int64)v7;
    v15 = (_QWORD *)v7[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v15 == v7 + 3 )
        break;
      v16 = (__int64)v15;
      v15 = (_QWORD *)*v15;
      RtlFreeHeap((__int64)ProcessHeap, 0, v16);
    }
    v7 = (_QWORD *)*v7;
    RtlFreeHeap((__int64)ProcessHeap, 0, v14);
  }
  v8 = *(_QWORD *)(a1 + 496);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  v9 = *(_QWORD *)(a1 + 504);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  v10 = *(_QWORD *)(a1 + 520);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  v11 = *(_QWORD *)(a1 + 536);
  if ( v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  EtwpFreeStreamIndexMap(a1);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
