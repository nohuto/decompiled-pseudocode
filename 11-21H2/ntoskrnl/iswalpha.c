/*
 * XREFs of iswalpha @ 0x1403E1BCC
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14095BE9C (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403E3CE0 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
