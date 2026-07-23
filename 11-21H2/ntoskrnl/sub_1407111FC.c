/*
 * XREFs of sub_1407111FC @ 0x1407111FC
 * Callers:
 *     sub_140711058 @ 0x140711058 (sub_140711058.c)
 * Callees:
 *     sub_1406AD624 @ 0x1406AD624 (sub_1406AD624.c)
 */

_BOOL8 __fastcall sub_1407111FC(__int16 a1)
{
  _BOOL8 result; // rax
  _UNKNOWN **v2; // rax
  __int16 v3; // dx

  result = 1;
  if ( a1 != -31132 )
  {
    v2 = sub_1406AD624(4);
    if ( !v2 || *((_WORD *)v2 + 1) != v3 )
      return 0;
  }
  return result;
}
