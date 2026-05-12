/*
 * XREFs of RaValidateMiniportSystemThreadPriority @ 0x1C004DF20
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaValidateMiniportSystemThreadPriority(int a1)
{
  return a1 >= 7 && (a1 <= 8 || a1 > 11 && (a1 <= 15 || a1 == 18));
}
