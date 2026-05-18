/*
 * XREFs of sub_180084CC0 @ 0x180084CC0
 * Callers:
 *     sub_18004F704 @ 0x18004F704 (sub_18004F704.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180082FC8 @ 0x180082FC8 (sub_180082FC8.c)
 *     sub_180083008 @ 0x180083008 (sub_180083008.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180084CC0(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  sub_180085130(a1, &v6);
  v2 = 0;
  result = sub_180082FC8(v6);
  if ( (_DWORD)result )
  {
    do
    {
      v4 = sub_180083008(v6, v2);
      v5 = v4;
      if ( *(_DWORD *)(v4 + 36) == 8 )
      {
        v8 = 0LL;
        sub_180085680(a1, v4, &v8);
        v8 = 0LL;
        sub_180085870(a1, v5, &v8);
      }
      ++v2;
      result = sub_180082FC8(v6);
    }
    while ( v2 < (unsigned int)result );
  }
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
