/*
 * XREFs of sub_140259000 @ 0x140259000
 * Callers:
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_140259000(__int64 a1, __int64 a2)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r11

  v4 = 0;
  v5 = sub_140317A10(a2) & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  v6 = sub_140317A80(a2);
  v7 = 1LL;
  if ( v6 && (unsigned int)sub_140229550() )
    v4 = v7;
  *(_QWORD *)a2 = v5;
  if ( v4 )
    sub_1402294F0(a2, v5);
  return sub_1402CF280(*(_QWORD *)(a1 + 16), a2 << 25 >> 16, v7, 0LL);
}
