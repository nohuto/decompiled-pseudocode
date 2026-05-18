/*
 * XREFs of sub_180027B00 @ 0x180027B00
 * Callers:
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 * Callees:
 *     sub_180027780 @ 0x180027780 (sub_180027780.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 */

__int64 __fastcall sub_180027B00(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 || !*((_BYTE *)a1 + 8) )
    sub_180027780(1u);
  result = sub_18002A62C(v2);
  *((_BYTE *)a1 + 8) = 0;
  return result;
}
