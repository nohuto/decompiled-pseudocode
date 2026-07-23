/*
 * XREFs of HalpApic1EndOfInterrupt @ 0x14041AD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void HalpApic1EndOfInterrupt()
{
  *(_DWORD *)(HalpLocalApic + 176) = 0;
}
