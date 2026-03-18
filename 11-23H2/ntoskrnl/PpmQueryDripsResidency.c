/*
 * XREFs of PpmQueryDripsResidency @ 0x1405859F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1403D6FA0 (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency(dword_140CF7D80);
}
