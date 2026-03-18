/*
 * XREFs of atoi @ 0x1403D9260
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140A70F9C (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A71464 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D9280 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
