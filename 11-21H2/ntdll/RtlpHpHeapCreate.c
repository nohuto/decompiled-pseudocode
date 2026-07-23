/*
 * XREFs of RtlpHpHeapCreate @ 0x180054CB4
 * Callers:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x18008B890 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhContextInitialize @ 0x180054B7C (RtlpHpLfhContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x180054F9C (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x1800550B4 (RtlpHpSegContextReserve.c)
 *     RtlpHpVsContextInitialize @ 0x1800551A8 (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x180055288 (RtlpHpHeapAllocate.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x180055570 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpRegisterEnvironment @ 0x1800555C0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180114E08 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x180114ED0 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x180116D3C (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int128 v10; // xmm0
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // [rsp+28h] [rbp-39h]
  __int128 v22; // [rsp+58h] [rbp-9h] BYREF
  void *v23; // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall *v24)(__int64, __int64, __int64, char); // [rsp+70h] [rbp+Fh]
  __int64 (__fastcall *v25)(int); // [rsp+78h] [rbp+17h]
  __int64 (__fastcall *v26)(__int64, unsigned __int64, unsigned int); // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp+27h]
  unsigned int ProcessorCount; // [rsp+D0h] [rbp+6Fh]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  ProcessorCount = RtlpHpEnvQueryProcessorCount();
  v22 = *a4;
  v7 = RtlpHpHeapAllocate(a1, ProcessorCount, &v22);
  v8 = v7;
  v9 = v7;
  if ( v7 )
  {
    v10 = *a4;
    *(_DWORD *)(v7 + 16) = -571548178;
    v11 = 0;
    *(_DWORD *)(v7 + 20) = a1;
    *(_OWORD *)v7 = v10;
    if ( BYTE1(*(_QWORD *)a4) >= 2u )
    {
      v11 = 16;
      if ( (*(_BYTE *)(v7 + 30) & 1) == 0 )
      {
        v19 = *(_QWORD *)(v7 + 240);
        v20 = *(_QWORD *)(v7 + 248);
        if ( v19 > v20 && v19 - v20 >= 0x100000 && v20 - v8 <= 0x100000 )
          v11 = 48;
      }
    }
    v12 = v11 | 4;
    if ( (a1 & 0x4000000) == 0 )
      v12 = v11;
    v22 = v10;
    RtlpHpSegContextInitialize(v8 + 320, 0x100000, v8, v8 + 896, v8 + 704, v8 + 128, v8 + 160, (__int64)&v22, v12);
    v13 = *(_QWORD *)a4 >> 8;
    v14 = v12 & 0xFFFFFFDF;
    v22 = *a4;
    if ( (unsigned __int8)v13 < 2u )
      v14 = v12;
    RtlpHpSegContextInitialize(v8 + 512, 0x1000000, v8, 0, 0LL, v8 + 128, v8 + 176, (__int64)&v22, v14);
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = 0LL;
    *(_QWORD *)(v8 + 224) = 0LL;
    if ( (*(_DWORD *)(v8 + 20) & 0x20000000) != 0 )
      *(_DWORD *)(v8 + 24) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    v27 = 0LL;
    v23 = RtlpHpSegVsAllocate;
    v24 = RtlpHpSegLfhVsFree;
    v25 = RtlpHpSegLfhVsCommit;
    v26 = RtlpHpSegLfhVsDecommit;
    RtlpHpVsContextInitialize(
      v8 + 704,
      v8 + 320,
      (unsigned int)&v23,
      *(_DWORD *)a4 & 1,
      v21,
      (__int64)&qword_18017EFE8 + 4);
    v23 = RtlpHpSegLfhAllocate;
    v24 = RtlpHpSegLfhVsFree;
    v25 = RtlpHpSegLfhVsCommit;
    v26 = RtlpHpSegLfhVsDecommit;
    v27 = RtlpHpSegLfhExtendContext;
    RtlpHpLfhContextInitialize(
      v8 + 896,
      v8 + 320,
      ProcessorCount,
      *(_DWORD *)a4 & 1,
      (__int64)&v23,
      v8 + 128,
      &qword_18017EFE8);
    *(_QWORD *)(v8 + 112) = 0LL;
    if ( (int)RtlpHpSegContextReserve(v8 + 320, a2, a3) < 0 )
    {
      v8 = 0LL;
      RtlpHpHeapDestroy(v9);
    }
    else
    {
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v15 = 2147353480LL;
      if ( *(_BYTE *)v15 )
        RtlpHeapLogRangeCreate(v8, *(_QWORD *)(v8 + 248) - v8, a1);
      v16 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v17 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v17 = 2147353472LL;
      if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapCreateEvent(v8, a1, *(_QWORD *)(v8 + 248) - v8, *(_DWORD *)(v8 + 240) - v8, *(unsigned __int8 *)v16);
      }
    }
  }
  else
  {
    v8 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0LL);
  }
  return v8;
}
