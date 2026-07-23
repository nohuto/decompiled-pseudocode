/*
 * XREFs of sub_1406528CC @ 0x1406528CC
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_14064331C @ 0x14064331C (sub_14064331C.c)
 *     sub_1406528E8 @ 0x1406528E8 (sub_1406528E8.c)
 *     sub_140652CAC @ 0x140652CAC (sub_140652CAC.c)
 *     sub_140652DB0 @ 0x140652DB0 (sub_140652DB0.c)
 *     sub_140A08710 @ 0x140A08710 (sub_140A08710.c)
 *     sub_140A087A4 @ 0x140A087A4 (sub_140A087A4.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall sub_1406528CC(__int64 a1)
{
  if ( a1 )
    return _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 88), 0, 0);
  else
    return 0;
}
