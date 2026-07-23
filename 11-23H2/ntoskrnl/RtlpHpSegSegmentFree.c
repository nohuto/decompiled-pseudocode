/*
 * XREFs of RtlpHpSegSegmentFree @ 0x140315484
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14024E790 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentAllocate @ 0x140312508 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCompact @ 0x140338030 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextCleanup @ 0x1405B6F90 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlpHpSegMgrRelease @ 0x140315558 (RtlpHpSegMgrRelease.c)
 *     RtlCSparseBitmapBitsClear @ 0x140315698 (RtlCSparseBitmapBitsClear.c)
 */

__int64 __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 i; // rcx
  __int64 result; // rax

  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &unk_140C71110,
      2 * ((unsigned __int64)(a2 - qword_140C71108) >> 20),
      2 * ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 20));
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1, a2, a3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(result + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  return result;
}
