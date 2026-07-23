/*
 * XREFs of sub_14079CBD8 @ 0x14079CBD8
 * Callers:
 *     sub_140715BA0 @ 0x140715BA0 (sub_140715BA0.c)
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 * Callees:
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14079CBD8(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2 + 4;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a2 + 4);
  sub_140AB4534(a2 + 4);
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)a2 = -1;
  return sub_140AB4534(v2);
}
