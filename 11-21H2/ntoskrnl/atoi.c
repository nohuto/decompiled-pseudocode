/*
 * XREFs of atoi @ 0x1403E0CC0
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140A33600 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A33AD0 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403E0CE0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
