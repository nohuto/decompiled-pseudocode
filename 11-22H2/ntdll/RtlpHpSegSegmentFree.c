/*
 * XREFs of RtlpHpSegSegmentFree @ 0x180065678
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1800345B8 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004AB08 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCompact @ 0x18005A438 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextCleanup @ 0x180065618 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegMgrRelease @ 0x180065774 (RtlpHpSegMgrRelease.c)
 *     RtlCSparseBitmapBitsClear @ 0x1800657E8 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHeapLogRangeRelease @ 0x1801153DC (RtlpHeapLogRangeRelease.c)
 */

unsigned int *__fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 i; // rcx
  unsigned int *result; // rax
  __int64 v10; // rcx

  v5 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &unk_1801859C0,
      2 * ((unsigned __int64)(a2 - qword_1801859B8) >> 20),
      2 * ((unsigned __int64)(unsigned int)v5 >> 20));
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
    return (unsigned int *)RtlpHeapLogRangeRelease(a1, a2, v5);
  return result;
}
