/*
 * XREFs of atoi @ 0x1403D9440
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140A7124C (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A71714 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D9460 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
