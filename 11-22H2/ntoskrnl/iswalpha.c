/*
 * XREFs of iswalpha @ 0x1403D9B2C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14096FFCC (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403DBCE4 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
