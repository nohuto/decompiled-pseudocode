/*
 * XREFs of iswalpha @ 0x1403DA18C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14096FF1C (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403DC344 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
