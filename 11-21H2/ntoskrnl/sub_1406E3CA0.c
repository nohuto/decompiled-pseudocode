/*
 * XREFs of sub_1406E3CA0 @ 0x1406E3CA0
 * Callers:
 *     sub_1406E3C60 @ 0x1406E3C60 (sub_1406E3C60.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406E3CA0(__int64 a1, __int64 a2)
{
  __int64 **v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  sub_14042A5E0(a1, a2);
  v4 = off_1400083D0;
  v5 = 3LL;
  do
  {
    result = sub_14042A5E0(a1, a2);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
