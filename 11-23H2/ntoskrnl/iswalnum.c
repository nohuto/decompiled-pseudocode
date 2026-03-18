/*
 * XREFs of iswalnum @ 0x1403DA170
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14096FF1C (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x1409D30F4 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1409D4848 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403DC344 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
