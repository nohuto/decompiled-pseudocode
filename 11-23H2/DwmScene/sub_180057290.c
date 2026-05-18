/*
 * XREFs of sub_180057290 @ 0x180057290
 * Callers:
 *     sub_1800570D8 @ 0x1800570D8 (sub_1800570D8.c)
 *     sub_1800616CC @ 0x1800616CC (sub_1800616CC.c)
 * Callees:
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 */

__int64 __fastcall sub_180057290(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800385C8(v1);
  return result;
}
