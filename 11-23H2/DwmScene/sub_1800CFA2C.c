/*
 * XREFs of sub_1800CFA2C @ 0x1800CFA2C
 * Callers:
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800CFA84 @ 0x1800CFA84 (sub_1800CFA84.c)
 */

__int64 __fastcall sub_1800CFA2C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  sub_1800CFA84();
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
    sub_180010530(v3);
  return a1;
}
