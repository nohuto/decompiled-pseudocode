/*
 * XREFs of sub_14063A5D8 @ 0x14063A5D8
 * Callers:
 *     sub_140A89D94 @ 0x140A89D94 (sub_140A89D94.c)
 *     sub_140A9AF9C @ 0x140A9AF9C (sub_140A9AF9C.c)
 *     sub_140A9E0D0 @ 0x140A9E0D0 (sub_140A9E0D0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14063A5D8(int a1)
{
  _InterlockedAnd(&dword_140D069E8, ~a1);
}
