/*
 * XREFs of LdrpFindTlsEntry @ 0x180029A8C
 * Callers:
 *     LdrpCallTlsInitializers @ 0x1800299A4 (LdrpCallTlsInitializers.c)
 *     LdrpReleaseTlsEntry @ 0x18007FA5C (LdrpReleaseTlsEntry.c)
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
