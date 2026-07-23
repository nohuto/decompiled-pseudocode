/*
 * XREFs of sub_14040079C @ 0x14040079C
 * Callers:
 *     sub_140400108 @ 0x140400108 (sub_140400108.c)
 *     sub_140400770 @ 0x140400770 (sub_140400770.c)
 * Callees:
 *     sub_1404000A8 @ 0x1404000A8 (sub_1404000A8.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 */

__int64 __fastcall sub_14040079C(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // ebx

  v2 = sub_1404000A8(a1);
  v4 = sub_140401350(v2, v3);
  return v4 + (unsigned int)sub_140407254(a1) + 64;
}
