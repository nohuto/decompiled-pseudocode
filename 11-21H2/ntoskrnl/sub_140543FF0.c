/*
 * XREFs of sub_140543FF0 @ 0x140543FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140545BD8 @ 0x140545BD8 (sub_140545BD8.c)
 */

__int64 __fastcall sub_140543FF0(__int64 a1, __int16 a2, __int16 a3, unsigned int a4, unsigned int a5)
{
  __int16 v5; // ax
  __int64 v7; // [rsp+20h] [rbp-18h]

  HIDWORD(v7) = 0x200000;
  LOWORD(v7) = a2;
  if ( a3 == 1 )
  {
    v5 = 0;
  }
  else if ( a3 == 2 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 2;
    if ( a3 != 4 )
      return 3221225485LL;
  }
  WORD1(v7) = v5;
  return sub_140545BD8(a1, v7, a4, a5);
}
