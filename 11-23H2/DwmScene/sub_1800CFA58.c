/*
 * XREFs of sub_1800CFA58 @ 0x1800CFA58
 * Callers:
 *     sub_1800CFE40 @ 0x1800CFE40 (sub_1800CFE40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800CFAA0 @ 0x1800CFAA0 (sub_1800CFAA0.c)
 */

__int64 __fastcall sub_1800CFA58(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  sub_1800CFAA0();
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
    sub_180010530(v3);
  return a1;
}
