/*
 * XREFs of sub_1405C8B90 @ 0x1405C8B90
 * Callers:
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __fastcall sub_1405C8B90(unsigned __int64 a1)
{
  ULONG result; // eax
  __int64 v3; // rdx

  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( result != 1 )
  {
    v3 = 0xFFFFFFFFFFFFLL;
    if ( a1 <= 0xFFFFFFFFFFFFLL )
      v3 = a1;
    _InterlockedExchange64(&qword_140D00B70, (unsigned __int16)--result | (unsigned __int64)(v3 << 16));
  }
  return result;
}
