/*
 * XREFs of StorPortGetLogicalUnit @ 0x1C0025FF0
 * Callers:
 *     sub_1C0065A40 @ 0x1C0065A40 (sub_1C0065A40.c)
 *     sub_1C00B2290 @ 0x1C00B2290 (sub_1C00B2290.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

_DWORD *__fastcall StorPortGetLogicalUnit(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *result; // rax
  char v3; // r9
  char v4; // r10
  char v5; // r11
  __int64 v6; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = 0LL;
  HIBYTE(v7) = 0;
  result = sub_1C000E2EC(a1);
  if ( result )
  {
    LOBYTE(v7) = v5;
    BYTE1(v7) = v4;
    BYTE2(v7) = v3;
    v6 = sub_1C00081BC((__int64)result, v7);
    if ( v6 )
      return *(_DWORD **)(v6 + 16);
    return (_DWORD *)v1;
  }
  return result;
}
