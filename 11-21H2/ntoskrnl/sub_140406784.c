/*
 * XREFs of sub_140406784 @ 0x140406784
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 * Callees:
 *     sub_140406800 @ 0x140406800 (sub_140406800.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_14040721C @ 0x14040721C (sub_14040721C.c)
 */

__int64 __fastcall sub_140406784(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax

  v6 = (unsigned int)sub_14040721C((unsigned int)a1[9], a1[2] & 0xF);
  v7 = sub_1404068E0(a2, v6, a1);
  return sub_140406800((_DWORD)a1, a1[23], (int)a1 + 104, v7, v6 + a2, a3 - v6);
}
