/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x18011FCA8
 * Callers:
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHeapLogRangeRelease @ 0x180114FF4 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  signed __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = ((v4 >> 12) + ((v4 >> 1) & 1)) << 12;
  v8 = *a2;
  v9 = (1LL << ((unsigned __int8)v4 >> 2))
     - (((1LL << ((unsigned __int8)v4 >> 2)) - 1) & (v5 + (1LL << ((unsigned __int8)v4 >> 2)) - 1))
     + v5
     - 1;
  RtlpHpFreeVA((PVOID *)&v10, (PSIZE_T)&v9, 0x8000, &v8);
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v6 = 2147353480LL;
  if ( *(_BYTE *)v6 )
    RtlpHeapLogRangeRelease((__int64)a2, v10, v9);
  v8 = *a2;
  return RtlpHpMetadataFree(a1, &v8);
}
