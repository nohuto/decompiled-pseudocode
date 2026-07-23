/*
 * XREFs of sub_140A9A0B8 @ 0x140A9A0B8
 * Callers:
 *     sub_140A992BC @ 0x140A992BC (sub_140A992BC.c)
 *     sub_140A9933C @ 0x140A9933C (sub_140A9933C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140A9A0B8(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 56) && ((*(_BYTE *)(a2 + 72) ^ *(_BYTE *)(a1 + 72)) & 2) == 0;
}
