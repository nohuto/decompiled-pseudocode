/*
 * XREFs of RtlpHpSegSegmentFree @ 0x180057A70
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1800150D8 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800563A4 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCleanup @ 0x180056E50 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitsClear @ 0x180058070 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x180058608 (RtlpHpSegMgrRelease.c)
 *     RtlpHeapLogRangeRelease @ 0x180114FF4 (RtlpHeapLogRangeRelease.c)
 */

unsigned int *__fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rbp
  unsigned __int64 i; // rcx
  unsigned int *result; // rax
  __int64 v10; // rcx

  v6 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &unk_18017B720,
      2 * ((unsigned __int64)(a2 - qword_18017B718) >> 20),
      2 * ((unsigned __int64)(unsigned int)v6 >> 20));
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1, a2, a3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v10 = *((_QWORD *)result + 18) + 558LL;
  }
  else
  {
    v10 = 2147353480LL;
  }
  if ( *(_BYTE *)v10 )
    return (unsigned int *)RtlpHeapLogRangeRelease(a1, a2, v6);
  return result;
}
