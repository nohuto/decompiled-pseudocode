/*
 * XREFs of RtlpHpHeapCreate @ 0x180066018
 * Callers:
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x180065BA0 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapDestroy @ 0x1800653D8 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegContextInitialize @ 0x1800662F0 (RtlpHpSegContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x180066408 (RtlpHpHeapAllocate.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800666F8 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpSegContextReserve @ 0x180066748 (RtlpHpSegContextReserve.c)
 *     RtlpHpRegisterEnvironment @ 0x180066838 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVsContextInitialize @ 0x180066AA8 (RtlpHpVsContextInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x180066B88 (RtlpHpLfhContextInitialize.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180115268 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x1801152B8 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x180117128 (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int128 v9; // xmm0
  int v10; // ecx
  int v11; // r15d
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // [rsp+28h] [rbp-49h]
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  __int128 v21; // [rsp+68h] [rbp-9h] BYREF
  __int64 (__fastcall *v22)(int, int, char, int, __int64); // [rsp+78h] [rbp+7h] BYREF
  __int64 (__fastcall *v23)(__int64, __int64, __int64, char); // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall *v24)(__int64, __int64); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v25)(__int64, unsigned __int64, unsigned int); // [rsp+90h] [rbp+1Fh]
  __int64 (__fastcall *v26)(__int64); // [rsp+98h] [rbp+27h]
  unsigned int ProcessorCount; // [rsp+E0h] [rbp+6Fh]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  ProcessorCount = RtlpHpEnvQueryProcessorCount();
  v20 = *a4;
  v7 = RtlpHpHeapAllocate(a1, ProcessorCount, &v20);
  *(_QWORD *)&v20 = v7;
  v8 = v7;
  if ( v7 )
  {
    v9 = *a4;
    *(_DWORD *)(v7 + 16) = -571548178;
    v10 = 0;
    *(_DWORD *)(v7 + 20) = a1;
    *(_OWORD *)v7 = v9;
    if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
    {
      v10 = 16;
      if ( (*(_BYTE *)(v7 + 30) & 1) == 0 )
      {
        v17 = *(_QWORD *)(v7 + 240);
        v18 = *(_QWORD *)(v7 + 248);
        if ( v17 > v18 && v17 - v18 >= 0x100000 && v18 - v8 <= 0x100000 )
          v10 = 48;
      }
    }
    v11 = v10 | 4;
    if ( (a1 & 0x4000000) == 0 )
      v11 = v10;
    v21 = v9;
    RtlpHpSegContextInitialize(v8 + 320, 0x100000, v8, v8 + 896, v8 + 704, v8 + 128, v8 + 160, (__int64)&v21, v11);
    v12 = v11;
    if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
      v12 = v11 & 0xFFFFFFDF;
    v21 = *a4;
    RtlpHpSegContextInitialize(v8 + 512, 0x1000000, v8, 0, 0LL, v8 + 128, v8 + 176, (__int64)&v21, v12);
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = 0LL;
    *(_QWORD *)(v8 + 224) = 0LL;
    if ( (*(_DWORD *)(v8 + 20) & 0x20000000) != 0 )
      *(_DWORD *)(v8 + 24) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    v26 = 0LL;
    v22 = (__int64 (__fastcall *)(int, int, char, int, __int64))RtlpHpSegVsAllocate;
    v23 = RtlpHpSegLfhVsFree;
    v24 = RtlpHpSegLfhVsCommit;
    v25 = RtlpHpSegLfhVsDecommit;
    RtlpHpVsContextInitialize(
      v8 + 704,
      v8 + 320,
      (unsigned int)&v22,
      *(_DWORD *)a4 & 1,
      v19,
      (__int64)&qword_180189288 + 4);
    v22 = RtlpHpSegLfhAllocate;
    v23 = RtlpHpSegLfhVsFree;
    v24 = RtlpHpSegLfhVsCommit;
    v25 = RtlpHpSegLfhVsDecommit;
    v26 = RtlpHpSegLfhExtendContext;
    RtlpHpLfhContextInitialize(
      v8 + 896,
      v8 + 320,
      ProcessorCount,
      *(_DWORD *)a4 & 1,
      (__int64)&v22,
      v8 + 128,
      (__int64)&qword_180189288);
    *(_QWORD *)(v8 + 112) = 0LL;
    if ( (int)RtlpHpSegContextReserve(v8 + 320, a2, a3) < 0 )
    {
      v8 = 0LL;
      RtlpHpHeapDestroy(v20);
    }
    else
    {
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v13 = 2147353480LL;
      if ( *(_BYTE *)v13 )
        RtlpHeapLogRangeCreate(v8, *(_QWORD *)(v8 + 248) - v8, a1);
      v14 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v15 = 2147353472LL;
      if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v14 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapCreateEvent(v8, a1, *(_QWORD *)(v8 + 248) - v8, *(_DWORD *)(v8 + 240) - v8, *(unsigned __int8 *)v14);
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
