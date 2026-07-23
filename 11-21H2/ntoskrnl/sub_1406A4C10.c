/*
 * XREFs of sub_1406A4C10 @ 0x1406A4C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022CFE4 @ 0x14022CFE4 (sub_14022CFE4.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1406A4C10(__int64 a1)
{
  *(_DWORD *)(a1 + 132) |= sub_14022CFE4(
                             *(_QWORD *)(a1 + 88),
                             (__int64)KeGetCurrentThread(),
                             *(_QWORD *)(a1 + 96),
                             *(_BYTE *)(a1 + 128));
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
