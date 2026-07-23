/*
 * XREFs of iswalpha @ 0x1403DA36C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14097011C (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403DC524 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
