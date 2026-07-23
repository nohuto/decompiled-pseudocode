/*
 * XREFs of RtlpDestroyHeapSegment @ 0x1800497B4
 * Callers:
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046B30 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x18011685C (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpDestroyHeapSegment(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  void *v7; // rax
  __int64 v8; // rdi
  unsigned __int32 v9; // ebx
  __int64 v10; // rdx
  ULONG_PTR v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *v4;
  if ( *v4 == v5 && v6 == v2 )
  {
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v2, v5, v6, 0LL);
  }
  v7 = *(void **)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 40);
  v12 = 0LL;
  v13 = v7;
  v9 = RtlpSecMemFreeVirtualMemory((__int64)v4, &v13, &v12, 0x8000u);
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v10 = 2147353480LL;
  if ( *(_BYTE *)v10 )
    RtlpHeapLogRangeRelease(v8, v13, v12);
  return v9;
}
