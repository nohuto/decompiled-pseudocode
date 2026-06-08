/*
 * XREFs of ClearEnumerationContext @ 0x1C0003B64
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
