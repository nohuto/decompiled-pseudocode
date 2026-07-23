/*
 * XREFs of KsepCacheHwIdFree @ 0x140581210
 * Callers:
 *     <none>
 * Callees:
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C40704);
  }
}
