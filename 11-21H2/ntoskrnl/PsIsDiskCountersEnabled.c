/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403D9790
 * Callers:
 *     sub_14085B800 @ 0x14085B800 (sub_14085B800.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return dword_140D06BE8 == 0;
}
