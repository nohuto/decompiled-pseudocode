/*
 * XREFs of towlower @ 0x1800948B0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x1800926B0 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
