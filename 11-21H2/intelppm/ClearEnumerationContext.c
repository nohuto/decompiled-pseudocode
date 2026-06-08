/*
 * XREFs of ClearEnumerationContext @ 0x1C0001BB8
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
