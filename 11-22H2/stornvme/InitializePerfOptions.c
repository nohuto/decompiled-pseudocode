/*
 * XREFs of InitializePerfOptions @ 0x1C000A558
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DAA0 (NVMeControllerInitPart2.c)
 * Callees:
 *     <none>
 */

char __fastcall InitializePerfOptions(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  StorPortExtendedFunction(14LL, a1, 1LL);
  return 0;
}
