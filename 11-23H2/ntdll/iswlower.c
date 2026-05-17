/*
 * XREFs of iswlower @ 0x180092E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswlower(wint_t C)
{
  return iswctype(C, 2u);
}
