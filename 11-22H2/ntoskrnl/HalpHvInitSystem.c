/*
 * XREFs of HalpHvInitSystem @ 0x140A91840
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvInitDiscard @ 0x140B6F12C (HalpHvInitDiscard.c)
 */

__int64 __fastcall HalpHvInitSystem(int a1)
{
  if ( a1 == 7 )
    HalpHvInitDiscard();
  return 0LL;
}
