/*
 * XREFs of sub_18002A050 @ 0x18002A050
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_18002BA30 @ 0x18002BA30 (sub_18002BA30.c)
 */

__int64 __fastcall sub_18002A050(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r11

  v2 = *a2;
  v3 = sub_180028544(*a2);
  result = sub_18002BA30(v4, v3);
  if ( !(_BYTE)result )
    return sub_18002A630(v6, v2);
  return result;
}
