/*
 * XREFs of sub_180087F80 @ 0x180087F80
 * Callers:
 *     sub_180105D15 @ 0x180105D15 (sub_180105D15.c)
 * Callees:
 *     sub_180030B98 @ 0x180030B98 (sub_180030B98.c)
 */

__int64 __fastcall sub_180087F80(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_180030B98(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
