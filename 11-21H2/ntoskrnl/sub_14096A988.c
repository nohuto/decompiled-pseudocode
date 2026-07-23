/*
 * XREFs of sub_14096A988 @ 0x14096A988
 * Callers:
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     sub_14058617C @ 0x14058617C (sub_14058617C.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_14058732C @ 0x14058732C (sub_14058732C.c)
 */

__int64 __fastcall sub_14096A988(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v11; // r8d
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v12 = 0LL;
  v15 = 0;
  v13 = 0LL;
  if ( !(unsigned int)sub_14058732C() )
    return 3221225626LL;
  v11 = a5;
  if ( a4 )
  {
    if ( a5 != 1 )
    {
      sub_140586E78((a2 >> 18) & 0x3FFFFF);
      v11 = 1;
    }
  }
  v16 = a2;
  v17 = a3;
  v14 = 38;
  return sub_14058617C(a1, (__int64)&v12, v11, a6);
}
