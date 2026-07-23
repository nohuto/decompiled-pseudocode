/*
 * XREFs of sub_140237628 @ 0x140237628
 * Callers:
 *     sub_1402375D8 @ 0x1402375D8 (sub_1402375D8.c)
 *     sub_1403795D4 @ 0x1403795D4 (sub_1403795D4.c)
 * Callees:
 *     sub_1402376A4 @ 0x1402376A4 (sub_1402376A4.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

__int64 __fastcall sub_140237628(__int64 a1, __int16 a2, _OWORD *a3, unsigned int a4)
{
  unsigned int v7; // edi

  v7 = sub_1402376A4(a1, a4);
  if ( v7 != -1073741650 )
  {
    v7 = 0;
    *(_WORD *)(a1 + 58) = a2;
    if ( a3 )
    {
      *(_OWORD *)(a1 + 64) = *a3;
      *(_OWORD *)(a1 + 80) = a3[1];
      *(_OWORD *)(a1 + 96) = a3[2];
    }
    KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  }
  return v7;
}
