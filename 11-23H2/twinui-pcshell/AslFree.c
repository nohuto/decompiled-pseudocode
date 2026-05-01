/*
 * XREFs of AslFree @ 0x180738B18
 * Callers:
 *     ?PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284950 (-PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 *     ?PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284D78 (-PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AslFree(void *a1, void *a2)
{
  BOOLEAN result; // al

  if ( a2 )
    return RtlFreeHeap(a1, 0, a2);
  return result;
}
