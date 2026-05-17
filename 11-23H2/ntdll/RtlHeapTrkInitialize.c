/*
 * XREFs of RtlHeapTrkInitialize @ 0x18010BE00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x1800A14D0 (NtQueryPerformanceCounter.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FF15C (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010C1B4 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x18010C620 (RtlpHeapTrkGenerateHashRandoms.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *Heap; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  char *v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[2]; // [rsp+60h] [rbp-1h] BYREF
  __int128 v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v17)(); // [rsp+88h] [rbp+27h]
  int v18; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+6Fh]
  __int64 v20; // [rsp+D8h] [rbp+77h]
  __int64 v21; // [rsp+E0h] [rbp+7Fh] BYREF

  v20 = 0x10000LL;
  v19 = 0LL;
  v21 = 0LL;
  if ( Handle )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection() < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v19 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v19 + 52) > 0x40u
    || *(_DWORD *)(v19 + 56) > 2u
    || !*(_QWORD *)(v19 + 8)
    || *(_QWORD *)(v19 + 8) == -1LL
    || !*(_QWORD *)(v19 + 16)
    || *(_QWORD *)(v19 + 16) == -1LL
    || !*(_QWORD *)(v19 + 24)
    || *(_QWORD *)(v19 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = NtQueryPerformanceCounter();
  if ( (int)result >= 0 )
  {
    if ( qword_180188350 )
    {
      dword_1801886B8 = *(_DWORD *)(v19 + 56);
      RtlpHeapTrkGenerateHashRandoms((unsigned int)dword_1801886B8, v3, v4, v5, 0LL, &v21);
      Heap = (_DWORD *)RtlCreateHeap(
                         *(_DWORD *)(v19 + 52) == 0 ? 2 : 0,
                         0LL,
                         (unsigned int)(*(_DWORD *)(v19 + 52) << 20),
                         0LL,
                         0LL,
                         0LL);
      qword_180188A40 = (__int64)Heap;
      if ( Heap )
      {
        v18 = 2;
        RtlSetHeapInformation(Heap, 0, (__int64)&v18, 4uLL);
        dword_180188A30 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180188358, &qword_180188A50, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180188A20, &qword_180188A18, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180188A38, &qword_180188A10, 8LL) )
            {
              qword_1801886A0 = RtlAllocateHeap(qword_180188A40, 0, 126704LL);
              if ( qword_1801886A0 )
              {
                v7 = RtlAllocateHeap(qword_180188A40, 0, 126704LL);
                qword_1801886B0 = v7;
                if ( v7 )
                {
                  v8 = (_QWORD *)qword_1801886A0;
                  v9 = 7919LL;
                  Handle = a1;
                  v10 = qword_1801886A0 - v7;
                  dword_1801886A8 = 0;
                  v11 = v7 - qword_1801886A0;
                  do
                  {
                    v12 = (char *)v8 + v11;
                    *v8 = v8;
                    *(_QWORD *)&v12[v10 + 8] = v8;
                    v13 = (_QWORD *)((char *)v8 + v11);
                    v8 += 2;
                    *((_QWORD *)v12 + 1) = v13;
                    *v13 = v13;
                    --v9;
                  }
                  while ( v9 );
                  v14[0] = RtlpHeapTrkInterceptor;
                  v14[1] = 0LL;
                  v16 = 0LL;
                  v17 = RtlpHeapTrkLeakCallback;
                  v15 = 0LL;
                  if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v14) >= 0 )
                  {
                    NtUnmapViewOfSection();
                    return 0LL;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(qword_180188A40);
        qword_180188A40 = 0LL;
        qword_180188A50 = 0LL;
        qword_1801886A0 = 0LL;
        qword_180188A20 = 0LL;
        qword_180188A18 = 0LL;
        qword_1801886B0 = 0LL;
        qword_180188A38 = 0LL;
        qword_180188A10 = 0LL;
        if ( v19 )
          NtUnmapViewOfSection();
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
      }
    }
    return 3221225473LL;
  }
  return result;
}
