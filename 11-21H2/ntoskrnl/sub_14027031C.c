/*
 * XREFs of sub_14027031C @ 0x14027031C
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 * Callees:
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_14058BE04 @ 0x14058BE04 (sub_14058BE04.c)
 */

void __fastcall sub_14027031C(volatile signed __int64 *a1, int a2)
{
  if ( _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( a2 )
      sub_14058BE04();
    else
      sub_1402700FC((PVOID)a1);
  }
}
