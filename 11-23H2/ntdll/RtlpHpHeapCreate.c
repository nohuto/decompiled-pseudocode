/*
 * XREFs of RtlpHpHeapCreate @ 0x180065EE8
 * Callers:
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x180065A70 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapDestroy @ 0x1800652A8 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegContextInitialize @ 0x1800662D4 (RtlpHpSegContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x1800663EC (RtlpHpHeapAllocate.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800666DC (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpSegContextReserve @ 0x18006672C (RtlpHpSegContextReserve.c)
 *     RtlpHpRegisterEnvironment @ 0x18006681C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVsContextInitialize @ 0x180066A8C (RtlpHpVsContextInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x180066B6C (RtlpHpLfhContextInitialize.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1801166E8 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x180116738 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x1801185A8 (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v7; // rbx
  unsigned __int32 ProcessorCount; // r14d
  signed __int32 v9; // eax
  __int64 v10; // rax
  __int128 v11; // xmm0
  int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // r12d
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v21; // [rsp+28h] [rbp-39h]
  __int128 v22; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall *v23)(int, int, char, int, __int64); // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall *v24)(__int64, __int64, __int64, char); // [rsp+70h] [rbp+Fh]
  __int64 (__fastcall *v25)(__int64, __int64); // [rsp+78h] [rbp+17h]
  __int64 (__fastcall *v26)(__int64, unsigned __int64, unsigned int); // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v27)(__int64); // [rsp+88h] [rbp+27h]
  __int64 v28; // [rsp+D0h] [rbp+6Fh]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  ProcessorCount = dword_18018826C;
  if ( !dword_18018826C )
  {
    ProcessorCount = RtlpHpEnvQueryProcessorCount();
    v9 = _InterlockedCompareExchange(&dword_18018826C, ProcessorCount, 0);
    if ( v9 )
      ProcessorCount = v9;
  }
  v22 = *a4;
  v10 = RtlpHpHeapAllocate(a1, ProcessorCount, &v22);
  v28 = v10;
  v7 = v10;
  if ( v10 )
  {
    v11 = *a4;
    *(_DWORD *)(v10 + 16) = -571548178;
    v12 = 0;
    *(_DWORD *)(v10 + 20) = a1;
    *(_OWORD *)v10 = v11;
    if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
    {
      v12 = 16;
      if ( (*(_BYTE *)(v10 + 30) & 1) == 0 )
      {
        v13 = *(_QWORD *)(v10 + 240);
        v14 = *(_QWORD *)(v10 + 248);
        if ( v13 > v14 && v13 - v14 >= 0x100000 && v14 - v7 <= 0x100000 )
          v12 = 48;
      }
    }
    v15 = v12 | 4;
    if ( (a1 & 0x4000000) == 0 )
      v15 = v12;
    v22 = v11;
    RtlpHpSegContextInitialize(v7 + 320, 0x100000, v7, v7 + 896, v7 + 704, v7 + 128, v7 + 160, (__int64)&v22, v15);
    v16 = v15;
    if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
      v16 = v15 & 0xFFFFFFDF;
    v22 = *a4;
    RtlpHpSegContextInitialize(v7 + 512, 0x1000000, v7, 0, 0LL, v7 + 128, v7 + 176, (__int64)&v22, v16);
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_QWORD *)(v7 + 80) = 0LL;
    *(_QWORD *)(v7 + 224) = 0LL;
    *(_QWORD *)(v7 + 64) = 0LL;
    if ( (*(_DWORD *)(v7 + 20) & 0x20000000) != 0 )
      *(_DWORD *)(v7 + 24) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    v27 = 0LL;
    v23 = (__int64 (__fastcall *)(int, int, char, int, __int64))RtlpHpSegVsAllocate;
    v24 = RtlpHpSegLfhVsFree;
    v25 = RtlpHpSegLfhVsCommit;
    v26 = RtlpHpSegLfhVsDecommit;
    RtlpHpVsContextInitialize(
      v7 + 704,
      v7 + 320,
      (unsigned int)&v23,
      *(_DWORD *)a4 & 1,
      v21,
      (__int64)&qword_18018C358 + 4);
    v23 = RtlpHpSegLfhAllocate;
    v24 = RtlpHpSegLfhVsFree;
    v25 = RtlpHpSegLfhVsCommit;
    v26 = RtlpHpSegLfhVsDecommit;
    v27 = RtlpHpSegLfhExtendContext;
    RtlpHpLfhContextInitialize(
      v7 + 896,
      v7 + 320,
      ProcessorCount,
      *(_DWORD *)a4 & 1,
      (__int64)&v23,
      v7 + 128,
      (__int64)&qword_18018C358);
    *(_QWORD *)(v7 + 112) = 0LL;
    if ( (int)RtlpHpSegContextReserve(v7 + 320, a2, a3) >= 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v17 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v17 = 2147353480LL;
      if ( *(_BYTE *)v17 )
        RtlpHeapLogRangeCreate(v7, *(_QWORD *)(v7 + 248) - v7, a1);
      v18 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v19 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v19 = 2147353472LL;
      if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v18 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapCreateEvent(v7, a1, *(_QWORD *)(v7 + 248) - v7, *(_DWORD *)(v7 + 240) - v7, *(unsigned __int8 *)v18);
      }
    }
    else
    {
      v7 = 0LL;
      RtlpHpHeapDestroy(v28);
    }
  }
  else
  {
    RtlpHpRegisterEnvironment(a4, 0LL);
  }
  return v7;
}
