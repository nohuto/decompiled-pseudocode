/*
 * XREFs of sub_180063DA0 @ 0x180063DA0
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_180065C7C @ 0x180065C7C (sub_180065C7C.c)
 * Callees:
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 */

__int64 __fastcall sub_180063DA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_1800664E8() )
    sub_180065D00(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
