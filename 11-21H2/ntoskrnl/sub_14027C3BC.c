/*
 * XREFs of sub_14027C3BC @ 0x14027C3BC
 * Callers:
 *     sub_14027B6A4 @ 0x14027B6A4 (sub_14027B6A4.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

signed __int64 __fastcall sub_14027C3BC(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  result = sub_140317A10(a1);
  do
  {
    if ( (result & 0x200) != 0 )
      break;
    if ( (dword_140D06880 & 0x4000000) != 0 )
      _mm_lfence();
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result | 0x220, result);
  }
  while ( v3 != result );
  return result;
}
