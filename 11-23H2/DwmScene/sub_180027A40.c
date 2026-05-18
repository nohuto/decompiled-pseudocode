/*
 * XREFs of sub_180027A40 @ 0x180027A40
 * Callers:
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 * Callees:
 *     sub_180027780 @ 0x180027780 (sub_180027780.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 */

__int64 __fastcall sub_180027A40(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 )
    sub_180027780(1u);
  if ( *((_BYTE *)a1 + 8) )
    sub_180027780(0x24u);
  result = sub_18002A570(v2);
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
