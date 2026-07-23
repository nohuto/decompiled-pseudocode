/*
 * XREFs of iswalnum @ 0x1403DA350
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14097011C (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x1409D32F4 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1409D4A48 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403DC524 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
