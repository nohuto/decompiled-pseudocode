/*
 * XREFs of sub_140771F34 @ 0x140771F34
 * Callers:
 *     sub_140771B04 @ 0x140771B04 (sub_140771B04.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_140771F34(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v14[5]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  __int128 v20; // [rsp+70h] [rbp-10h]

  v14[0] = 0LL;
  v16 = 0;
  v20 = 0LL;
  result = sub_14077DE44(a1, a3, v14);
  if ( (int)result >= 0 )
  {
    if ( v14[0] )
    {
      v14[3] = a5;
      v14[4] = a6;
      v17 = a8;
      v15 = a7;
      v18 = a9;
      v19 = a10;
      v14[2] = a4;
      return sub_14042A5E0(a1, a2);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
