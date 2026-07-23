/*
 * XREFs of sub_1402B4E80 @ 0x1402B4E80
 * Callers:
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402B4E80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  return *(_BYTE *)(a1 + 34057) == *(_BYTE *)(a2 + 34057)
      && (v2 = *(_QWORD *)(a1 + 16)) != 0
      && v2 != *(_QWORD *)(a1 + 24)
      && (**(_BYTE **)(a1 + 56) & 0x7Fu) >= 0x10;
}
