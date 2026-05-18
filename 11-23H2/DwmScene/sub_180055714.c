/*
 * XREFs of sub_180055714 @ 0x180055714
 * Callers:
 *     sub_1800CC518 @ 0x1800CC518 (sub_1800CC518.c)
 * Callees:
 *     sub_180051F00 @ 0x180051F00 (sub_180051F00.c)
 */

__int64 __fastcall sub_180055714(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180051F00(v1);
  return result;
}
