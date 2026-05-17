/*
 * XREFs of LdrpFindTlsEntry @ 0x180042D54
 * Callers:
 *     LdrpCallTlsInitializers @ 0x180042C6C (LdrpCallTlsInitializers.c)
 *     LdrpReleaseTlsEntry @ 0x180084CD8 (LdrpReleaseTlsEntry.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall LdrpFindTlsEntry(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)LdrpTlsList; result != &LdrpTlsList; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}
