/*
 * XREFs of sub_1409596B0 @ 0x1409596B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 */

__int64 __fastcall sub_1409596B0(__int64 a1, void **a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  int v6; // ebx
  __int64 v7; // r8
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(unsigned __int16 *)a2;
  v9 = 0LL;
  WORD1(v9) = v4;
  LOWORD(v9) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v6 = sub_14077C610((void **)&v9 + 1, a2[1], v4, 2u, a4, 1);
  if ( v6 >= 0 )
  {
    v6 = sub_14065F5D4((__int64)&v9, 16, v7, 1, 0LL);
    sub_1402DF554(a4, *((void **)&v9 + 1));
  }
  return (unsigned int)v6;
}
