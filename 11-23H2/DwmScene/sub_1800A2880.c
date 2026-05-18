/*
 * XREFs of sub_1800A2880 @ 0x1800A2880
 * Callers:
 *     sub_1800A2510 @ 0x1800A2510 (sub_1800A2510.c)
 *     sub_1800EB3EC @ 0x1800EB3EC (sub_1800EB3EC.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_1800A2880(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B24(v2 + 32);
  return sub_18002B83C(a1);
}
