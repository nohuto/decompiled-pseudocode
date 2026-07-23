/*
 * XREFs of sub_140292B8C @ 0x140292B8C
 * Callers:
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_1405723EC @ 0x1405723EC (sub_1405723EC.c)
 *     sub_14057303C @ 0x14057303C (sub_14057303C.c)
 *     sub_14085634C @ 0x14085634C (sub_14085634C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140292B8C(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}
