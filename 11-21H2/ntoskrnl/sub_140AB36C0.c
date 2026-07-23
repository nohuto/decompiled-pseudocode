/*
 * XREFs of sub_140AB36C0 @ 0x140AB36C0
 * Callers:
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB26C8 @ 0x140AB26C8 (sub_140AB26C8.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB34D0 @ 0x140AB34D0 (sub_140AB34D0.c)
 *     sub_140AB35BC @ 0x140AB35BC (sub_140AB35BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AB36C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r10
  __int64 v4; // r9
  int v5; // r11d
  __int64 result; // rax

  v3 = *(_BYTE *)(a1 + 1);
  v4 = a3 >> (v3 - 1);
  v5 = *((unsigned __int8 *)qword_14003BD40 + (unsigned __int8)a3);
  if ( v3 < 0x40u )
    a3 &= (1LL << v3) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFFF3B;
  result = a3 == 0 ? 0x10 : 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 4 * (v5 | result | (32 * (v4 & 1)));
  return result;
}
