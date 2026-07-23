/*
 * XREFs of sub_140B31380 @ 0x140B31380
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 */

__int64 sub_140B31380()
{
  __int64 result; // rax

  qword_140D3CB18 = 0LL;
  qword_140D3CEB0 = (__int64)&qword_140D3CEA8;
  qword_140D3CEA8 = (__int64)&qword_140D3CEA8;
  result = HalQueryMaximumProcessorCount();
  dword_140D3CA8C = result;
  return result;
}
