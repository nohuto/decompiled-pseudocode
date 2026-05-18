/*
 * XREFs of sub_1800317EC @ 0x1800317EC
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_1800E5D33 @ 0x1800E5D33 (sub_1800E5D33.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_1800317EC(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180011B24(v1);
  return result;
}
