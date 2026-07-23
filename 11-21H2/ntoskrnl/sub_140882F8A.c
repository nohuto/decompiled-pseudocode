/*
 * XREFs of sub_140882F8A @ 0x140882F8A
 * Callers:
 *     sub_1403D683C @ 0x1403D683C (sub_1403D683C.c)
 *     sub_1409E21EC @ 0x1409E21EC (sub_1409E21EC.c)
 *     sub_1409E22CC @ 0x1409E22CC (sub_1409E22CC.c)
 *     sub_1409E2420 @ 0x1409E2420 (sub_1409E2420.c)
 *     sub_1409E2580 @ 0x1409E2580 (sub_1409E2580.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140882F8A(_OWORD *a1, __int64 a2)
{
  if ( a2 )
    *a1 = *(_OWORD *)(a2 + 1432);
  else
    *a1 = 0LL;
}
