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

LOGICAL __fastcall EtwpFreeLoggerContext(unsigned int *BaseAddress)
{
  __int64 v1; // rdx
  unsigned int *v3; // rdi
  unsigned int *v4; // rdi
  void *v5; // r8
  void *v6; // r8
  void *v7; // r8
  void *v8; // r8
  unsigned int *v10; // r8
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  unsigned int *v13; // r8
  void *ProcessHeap; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  v1 = BaseAddress[5];
  DelayInterval.QuadPart = -3000000LL;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0, &DelayInterval);
    while ( *(int *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8) > 1 );
  }
  if ( (BaseAddress[77] & 0x4000000) != 0 )
    EtwpShutdownCompression(BaseAddress);
  if ( *((_QWORD *)BaseAddress + 51) )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)BaseAddress + 51, &RegionSize, 0x8000u);
  }
  NtClose(*((HANDLE *)BaseAddress + 15));
  NtClose(*((HANDLE *)BaseAddress + 14));
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(BaseAddress + 18));
  if ( *((_QWORD *)BaseAddress + 18) )
    RtlFreeUnicodeString((PUNICODE_STRING)(BaseAddress + 34));
  if ( *((_QWORD *)BaseAddress + 20) )
    RtlFreeUnicodeString((PUNICODE_STRING)(BaseAddress + 38));
  if ( *((_QWORD *)BaseAddress + 22) )
    RtlFreeUnicodeString((PUNICODE_STRING)(BaseAddress + 42));
  v3 = (unsigned int *)*((_QWORD *)BaseAddress + 56);
  while ( v3 != BaseAddress + 112 )
  {
    v10 = v3;
    v3 = *(unsigned int **)v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  v4 = (unsigned int *)*((_QWORD *)BaseAddress + 58);
  while ( v4 != BaseAddress + 116 )
  {
    v11 = v4;
    v12 = (unsigned int *)*((_QWORD *)v4 + 3);
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v12 == v4 + 6 )
        break;
      v13 = v12;
      v12 = *(unsigned int **)v12;
      RtlFreeHeap(ProcessHeap, 0, v13);
    }
    v4 = *(unsigned int **)v4;
    RtlFreeHeap(ProcessHeap, 0, v11);
  }
  v5 = (void *)*((_QWORD *)BaseAddress + 62);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  v6 = (void *)*((_QWORD *)BaseAddress + 63);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = (void *)*((_QWORD *)BaseAddress + 65);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  v8 = (void *)*((_QWORD *)BaseAddress + 67);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  EtwpFreeStreamIndexMap(BaseAddress);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * BaseAddress[5]), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
