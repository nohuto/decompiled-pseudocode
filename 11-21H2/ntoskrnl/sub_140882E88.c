/*
 * XREFs of sub_140882E88 @ 0x140882E88
 * Callers:
 *     sub_14026AEB0 @ 0x14026AEB0 (sub_14026AEB0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140882E88(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 2288);
  return !v2 || (*(_BYTE *)(v2 + 104) & 1) == 0 && a2;
}
