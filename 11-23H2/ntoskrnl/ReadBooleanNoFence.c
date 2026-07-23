/*
 * XREFs of ReadBooleanNoFence @ 0x14040F790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UCHAR __stdcall ReadBooleanNoFence(const volatile BOOLEAN *Source)
{
  return *Source;
}
