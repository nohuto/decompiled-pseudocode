/*
 * XREFs of EtwpInitLoggerContext @ 0x18005BF28
 * Callers:
 *     EtwpStartUmLogger @ 0x18005BB9C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     RtlQueryPerformanceCounter @ 0x180010930 (RtlQueryPerformanceCounter.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     EtwpFreeStreamIndexMap @ 0x18005AF60 (EtwpFreeStreamIndexMap.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18005C480 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005CDF0 (RtlInitializeCriticalSectionEx.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A17B0 (ZwCreateEvent.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x180125690 (EtwpFillProcessorStreamIndexMap.c)
 */

__int64 __fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int16 v7; // si
  unsigned __int64 v10; // rax
  __int64 Heap; // rbx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 result; // rax
  unsigned __int16 v20; // r8
  unsigned int i; // ecx
  __int64 v22; // rax
  void *v23; // rax
  void *v24; // rcx
  void *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-58h]
  __int128 v29; // [rsp+30h] [rbp-48h]
  __int128 v30; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp+8h] BYREF

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
  *(_QWORD *)&v29 = MEMORY[0x7FFE0014];
  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    v10 = MEMORY[0x7FFE0014];
  }
  else if ( *(_DWORD *)(a1 + 40) == 3 )
  {
    v10 = __rdtsc();
  }
  else
  {
    v31 = 0LL;
    RtlQueryPerformanceCounter(&v31, 1LL);
    v10 = v31;
  }
  *((_QWORD *)&v29 + 1) = v10;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 568);
  if ( !Heap )
    return 0LL;
  v12 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *(_QWORD *)(Heap + 536) = v12;
  if ( v12 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v7, a4, a5) )
        goto LABEL_45;
      v22 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 12LL * v7);
      *(_QWORD *)(Heap + 496) = v22;
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
          *(_WORD *)(v14 + *(_QWORD *)(Heap + 536)) = 0;
          v14 += 4LL;
          *(_WORD *)(*(_QWORD *)(Heap + 536) + v14 - 2) = v13++;
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
    *(_DWORD *)(Heap + 192) = v16;
    if ( RtlCreateUnicodeString(Heap + 136, *(_WORD **)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v30) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v23 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
          goto LABEL_19;
        v23 = (void *)(Heap + 392);
      }
      *(_QWORD *)(Heap + 384) = v23;
LABEL_19:
      v17 = 2048;
      *(_DWORD *)(Heap + 20) = a2;
      *(_DWORD *)(Heap + 308) = 2048;
      *(_DWORD *)(Heap + 188) = a3;
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
          *(_OWORD *)(Heap + 168) = v30;
          goto LABEL_23;
        }
        if ( (v18 & 1) == 0 )
          goto LABEL_24;
        v17 = 2049;
      }
      *(_OWORD *)(Heap + 152) = v30;
LABEL_23:
      *(_DWORD *)(Heap + 308) = v17;
LABEL_24:
      *(_DWORD *)(Heap + 308) = v17 | *(_DWORD *)(a1 + 64) & 0x34133024;
      *(_DWORD *)(Heap + 376) = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(Heap + 212) = *(_DWORD *)(Heap + 208);
      *(_OWORD *)(Heap + 44) = *(_OWORD *)(a1 + 24);
      *(_DWORD *)(Heap + 304) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(Heap + 200) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(Heap + 204) = *(_DWORD *)(a1 + 52);
      *(_QWORD *)(Heap + 224) = Heap + 216;
      *(_QWORD *)(Heap + 216) = Heap + 216;
      *(_QWORD *)(Heap + 248) = 0LL;
      *(_QWORD *)(Heap + 232) = Heap + 248;
      *(_QWORD *)(Heap + 240) = Heap + 248;
      *(_QWORD *)(Heap + 272) = 0LL;
      *(_QWORD *)(Heap + 256) = Heap + 272;
      *(_QWORD *)(Heap + 264) = Heap + 272;
      *(_QWORD *)(Heap + 296) = 0LL;
      *(_QWORD *)(Heap + 280) = Heap + 296;
      *(_QWORD *)(Heap + 288) = Heap + 296;
      *(_QWORD *)(Heap + 456) = Heap + 448;
      *(_QWORD *)(Heap + 448) = Heap + 448;
      *(_QWORD *)(Heap + 472) = Heap + 464;
      *(_QWORD *)(Heap + 464) = Heap + 464;
      *(_DWORD *)(Heap + 16) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(Heap + 60) = *(_DWORD *)(a1 + 96);
      *(_DWORD *)(Heap + 352) = *(_DWORD *)(a1 + 76);
      if ( (int)ZwCreateEvent(Heap + 112, 2031619LL, 0LL, 1LL, 0) >= 0 )
      {
        LOBYTE(v28) = 0;
        if ( (int)ZwCreateEvent(Heap + 120, 2031619LL, 0LL, 1LL, v28) >= 0 )
        {
          RtlInitializeCriticalSectionEx(Heap + 72, 0LL, 0LL);
          *(_QWORD *)(Heap + 64) = 0LL;
          result = Heap;
          *(_DWORD *)(Heap + 312) = 1;
          *(_OWORD *)Heap = v29;
          return result;
        }
      }
    }
  }
LABEL_45:
  v24 = *(void **)(Heap + 120);
  if ( v24 )
  {
    NtClose(v24);
    *(_QWORD *)(Heap + 120) = 0LL;
  }
  v25 = *(void **)(Heap + 112);
  if ( v25 )
  {
    NtClose(v25);
    *(_QWORD *)(Heap + 112) = 0LL;
  }
  v26 = *(_QWORD *)(Heap + 496);
  if ( v26 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v26);
  v27 = *(_QWORD *)(Heap + 536);
  if ( v27 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v27);
  EtwpFreeStreamIndexMap(Heap);
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 136));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(Heap + 168));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
