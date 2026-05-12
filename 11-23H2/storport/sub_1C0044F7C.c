/*
 * XREFs of sub_1C0044F7C @ 0x1C0044F7C
 * Callers:
 *     sub_1C0044E98 @ 0x1C0044E98 (sub_1C0044E98.c)
 *     sub_1C004D190 @ 0x1C004D190 (sub_1C004D190.c)
 *     sub_1C004DD04 @ 0x1C004DD04 (sub_1C004DD04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0044F7C(_DWORD *a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r8

  if ( a1[5] )
    return 0LL;
  v2 = a1[6];
  if ( !v2 )
    return 0LL;
  if ( v2 < a2 + 1 )
    return 0LL;
  v3 = (unsigned int)a1[7];
  if ( (unsigned int)v3 < 0x28 )
    return 0LL;
  else
    return (__int64)&a1[6 * a2] + v3;
}
