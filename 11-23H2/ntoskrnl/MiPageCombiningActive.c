/*
 * XREFs of MiPageCombiningActive @ 0x14021AB5C
 * Callers:
 *     MiAbortCombineScan @ 0x14021AAAC (MiAbortCombineScan.c)
 *     MiSignalLargePageRebuild @ 0x14021D424 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140C67244 != 0;
  if ( *(_DWORD *)(a1 + 16584) )
    return 1;
  return result;
}
