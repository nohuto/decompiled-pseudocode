/*
 * XREFs of sub_1C0045338 @ 0x1C0045338
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0048B44 @ 0x1C0048B44 (sub_1C0048B44.c)
 */

__int64 __fastcall sub_1C0045338(int a1, __int64 a2)
{
  return sub_1C0048B44(
           a1,
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 8),
           *(_DWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 24),
           *(_QWORD *)(a2 + 32),
           *(_BYTE *)(a2 + 40),
           *(_QWORD *)(a2 + 48),
           *(_DWORD *)(a2 + 56));
}
