/*
 * XREFs of EtwpInitLoggerContext @ 0x18005EF28
 * Callers:
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18000EBB0 (RtlCreateUnicodeString.c)
 *     RtlQueryPerformanceCounter @ 0x180010B40 (RtlQueryPerformanceCounter.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     EtwpFreeStreamIndexMap @ 0x18005DF60 (EtwpFreeStreamIndexMap.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18005F480 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwCreateEvent @ 0x18009F6F0 (ZwCreateEvent.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x1801241E0 (EtwpFillProcessorStreamIndexMap.c)
 */

char *__fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v7; // si
  LARGE_INTEGER v10; // rax
  char *Heap; // rbx
  PVOID v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  char *result; // rax
  unsigned __int16 v20; // r8
  unsigned int i; // ecx
  PVOID v22; // rax
  void *v23; // rax
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // r8
  void *v27; // r8
  __int128 v28; // [rsp+30h] [rbp-48h]
  __int128 v29; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp+8h] BYREF

  v7 = 1;
  if ( a4 )
  {
    v20 = 0;
    v7 = 0;
    for ( i = 0; i < a5; i += (*(unsigned __int16 *)(i + a4 + 4) + 7) & 0xFFFFFFF8 )
    {
      ++v7;
      v20 += *(_WORD *)(i + a4 + 44);
    }
    a3 = v20;
  }
  *(_QWORD *)&v28 = MEMORY[0x7FFE0014];
  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    v10.QuadPart = MEMORY[0x7FFE0014];
  }
  else if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v10.QuadPart = __rdtsc();
  }
  else
  {
    PerformanceCounter.QuadPart = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v10 = PerformanceCounter;
  }
  *((LARGE_INTEGER *)&v28 + 1) = v10;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 568);
  if ( !Heap )
    return 0LL;
  v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *((_QWORD *)Heap + 67) = v12;
  if ( v12 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v7, a4, a5) )
        goto LABEL_45;
      v22 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 12LL * v7);
      *((_QWORD *)Heap + 62) = v22;
      if ( !v22 )
        goto LABEL_45;
    }
    else
    {
      v13 = 0;
      if ( a3 )
      {
        v14 = 0LL;
        do
        {
          *(_WORD *)(v14 + *((_QWORD *)Heap + 67)) = 0;
          v14 += 4LL;
          *(_WORD *)(*((_QWORD *)Heap + 67) + v14 - 2) = v13++;
        }
        while ( v13 < a3 );
      }
    }
    v15 = *(_DWORD *)(a1 + 48);
    if ( v15 )
    {
      if ( v15 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v15 = 0x4000;
      }
      v16 = v15 << 10;
    }
    else
    {
      v16 = 4096;
    }
    *((_DWORD *)Heap + 48) = v16;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(Heap + 136), *(PCWSTR *)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v29) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v23 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_19;
        v23 = Heap + 392;
      }
      *((_QWORD *)Heap + 48) = v23;
LABEL_19:
      v17 = 2048;
      *((_DWORD *)Heap + 5) = a2;
      *((_DWORD *)Heap + 77) = 2048;
      *((_DWORD *)Heap + 47) = a3;
      v18 = *(_DWORD *)(a1 + 64);
      if ( (v18 & 0x400) != 0 )
      {
        v17 = 3072;
        goto LABEL_23;
      }
      if ( (v18 & 2) != 0 )
      {
        v17 = 2050;
      }
      else
      {
        if ( (v18 & 8) != 0 )
        {
          v17 = 2056;
          *(_OWORD *)(Heap + 168) = v29;
          goto LABEL_23;
        }
        if ( (v18 & 1) == 0 )
          goto LABEL_24;
        v17 = 2049;
      }
      *(_OWORD *)(Heap + 152) = v29;
LABEL_23:
      *((_DWORD *)Heap + 77) = v17;
LABEL_24:
      *((_DWORD *)Heap + 77) = v17 | *(_DWORD *)(a1 + 64) & 0x34133024;
      *((_DWORD *)Heap + 94) = *(_DWORD *)(a1 + 108);
      *((_DWORD *)Heap + 53) = *((_DWORD *)Heap + 52);
      *(_OWORD *)(Heap + 44) = *(_OWORD *)(a1 + 24);
      *((_DWORD *)Heap + 76) = *(_DWORD *)(a1 + 60);
      *((_DWORD *)Heap + 50) = *(_DWORD *)(a1 + 56);
      *((_DWORD *)Heap + 51) = *(_DWORD *)(a1 + 52);
      *((_QWORD *)Heap + 28) = Heap + 216;
      *((_QWORD *)Heap + 27) = Heap + 216;
      *((_QWORD *)Heap + 31) = 0LL;
      *((_QWORD *)Heap + 29) = Heap + 248;
      *((_QWORD *)Heap + 30) = Heap + 248;
      *((_QWORD *)Heap + 34) = 0LL;
      *((_QWORD *)Heap + 32) = Heap + 272;
      *((_QWORD *)Heap + 33) = Heap + 272;
      *((_QWORD *)Heap + 37) = 0LL;
      *((_QWORD *)Heap + 35) = Heap + 296;
      *((_QWORD *)Heap + 36) = Heap + 296;
      *((_QWORD *)Heap + 57) = Heap + 448;
      *((_QWORD *)Heap + 56) = Heap + 448;
      *((_QWORD *)Heap + 59) = Heap + 464;
      *((_QWORD *)Heap + 58) = Heap + 464;
      *((_DWORD *)Heap + 4) = *(_DWORD *)(a1 + 40);
      *((_DWORD *)Heap + 15) = *(_DWORD *)(a1 + 96);
      *((_DWORD *)Heap + 88) = *(_DWORD *)(a1 + 76);
      if ( ZwCreateEvent((PHANDLE)Heap + 14, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0
        && ZwCreateEvent((PHANDLE)Heap + 15, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
      {
        RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(Heap + 72), 0, 0);
        *((_QWORD *)Heap + 8) = 0LL;
        result = Heap;
        *((_DWORD *)Heap + 78) = 1;
        *(_OWORD *)Heap = v28;
        return result;
      }
    }
  }
LABEL_45:
  v24 = (void *)*((_QWORD *)Heap + 15);
  if ( v24 )
  {
    NtClose(v24);
    *((_QWORD *)Heap + 15) = 0LL;
  }
  v25 = (void *)*((_QWORD *)Heap + 14);
  if ( v25 )
  {
    NtClose(v25);
    *((_QWORD *)Heap + 14) = 0LL;
  }
  v26 = (void *)*((_QWORD *)Heap + 62);
  if ( v26 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v26);
  v27 = (void *)*((_QWORD *)Heap + 67);
  if ( v27 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
  EtwpFreeStreamIndexMap((__int64)Heap);
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 136));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 168));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
