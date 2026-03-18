/*
 * XREFs of MiPageCombiningActive @ 0x140268A48
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140267CA8 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 16264) == 0;
  else
    v1 = dword_140C51DC4 == 0;
  return !v1;
}
