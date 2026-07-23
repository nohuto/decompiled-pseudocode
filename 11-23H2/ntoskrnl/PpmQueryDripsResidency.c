/*
 * XREFs of PpmQueryDripsResidency @ 0x140585EE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1403D7180 (PpmQueryPlatformStateResidency.c)
 */

__int64 PpmQueryDripsResidency()
{
  return PpmQueryPlatformStateResidency(dword_140CF7D80);
}
