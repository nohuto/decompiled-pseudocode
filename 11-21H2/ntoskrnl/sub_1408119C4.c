/*
 * XREFs of sub_1408119C4 @ 0x1408119C4
 * Callers:
 *     sub_1406D8814 @ 0x1406D8814 (sub_1406D8814.c)
 *     sub_1406D88A4 @ 0x1406D88A4 (sub_1406D88A4.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1408119C4(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
