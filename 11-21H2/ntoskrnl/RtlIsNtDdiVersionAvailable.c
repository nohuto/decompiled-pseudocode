/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x1403D9CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA00000B;
}
