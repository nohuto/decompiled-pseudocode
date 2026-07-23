/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14074F6E0
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140224210 @ 0x140224210 (sub_140224210.c)
 *     sub_1402D53C0 @ 0x1402D53C0 (sub_1402D53C0.c)
 *     sub_1402D56AC @ 0x1402D56AC (sub_1402D56AC.c)
 * Callees:
 *     sub_14074F700 @ 0x14074F700 (sub_14074F700.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(_QWORD *a1)
{
  a1[7] = 0LL;
  return sub_14074F700(a1);
}
