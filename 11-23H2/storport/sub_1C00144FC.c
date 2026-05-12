/*
 * XREFs of sub_1C00144FC @ 0x1C00144FC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

__int64 __fastcall sub_1C00144FC(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  __int64 v4; // r9
  _DWORD *v5; // r10
  __int64 v6; // rax
  unsigned int v8; // [rsp+40h] [rbp+18h]

  HIBYTE(v8) = 0;
  v3 = a3;
  if ( a3 >= 0x10 )
    return 3238002694LL;
  v5 = sub_1C000E2EC(a1);
  if ( !v5 )
    return 3238002694LL;
  if ( !v4 )
    return 3238002694LL;
  if ( *(_WORD *)v4 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(v4 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v8) = *(_WORD *)(v4 + 8);
  BYTE2(v8) = *(_BYTE *)(v4 + 10);
  v6 = sub_1C00081BC((__int64)v5, v8);
  if ( !v6 )
    return 3238002694LL;
  *(_DWORD *)(v6 + 1872) = *(_DWORD *)(v6 + 1872) & 0xFFFFFFB1 | (2 * (v3 & 7 | (4 * (v3 & 8))));
  return 0LL;
}
