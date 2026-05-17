/*
 * XREFs of iswxdigit @ 0x180092670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswxdigit(wint_t C)
{
  return iswctype(C, 0x80u);
}
