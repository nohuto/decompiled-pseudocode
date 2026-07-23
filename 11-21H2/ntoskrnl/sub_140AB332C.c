/*
 * XREFs of sub_140AB332C @ 0x140AB332C
 * Callers:
 *     sub_140963330 @ 0x140963330 (sub_140963330.c)
 * Callees:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB3358 @ 0x140AB3358 (sub_140AB3358.c)
 */

__int64 __fastcall sub_140AB332C(__int64 a1)
{
  __int64 result; // rax

  result = sub_140AB3358();
  if ( (int)result >= 0 )
    return sub_140AB28B8(a1, 0LL);
  return result;
}
