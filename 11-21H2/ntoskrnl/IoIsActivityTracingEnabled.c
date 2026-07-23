/*
 * XREFs of IoIsActivityTracingEnabled @ 0x14022E390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (dword_140D0110C & 4) != 0 && (dword_140D01110 & 1) != 0;
}
