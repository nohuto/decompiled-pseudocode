/*
 * XREFs of HalpHvInitSystem @ 0x140A916C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvInitDiscard @ 0x140B6DCC0 (HalpHvInitDiscard.c)
 */

__int64 __fastcall HalpHvInitSystem(int a1)
{
  if ( a1 == 7 )
    HalpHvInitDiscard();
  return 0LL;
}
