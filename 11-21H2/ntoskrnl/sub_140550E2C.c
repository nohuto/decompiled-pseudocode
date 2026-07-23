/*
 * XREFs of sub_140550E2C @ 0x140550E2C
 * Callers:
 *     sub_140B263A0 @ 0x140B263A0 (sub_140B263A0.c)
 * Callees:
 *     sub_140550B6C @ 0x140550B6C (sub_140550B6C.c)
 *     sub_140550BFC @ 0x140550BFC (sub_140550BFC.c)
 *     sub_140550C9C @ 0x140550C9C (sub_140550C9C.c)
 */

__int64 __fastcall sub_140550E2C(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  sub_140550B6C(a1, a2);
  if ( !(unsigned int)sub_140550BFC(v3, v2) )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  dword_140D0186C = 3;
  return sub_140550C9C(v5, v4);
}
