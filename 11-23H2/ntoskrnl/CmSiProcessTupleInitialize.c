/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14036F124
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14080AADC (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  CmpRegistryProcess = 0LL;
  *(_OWORD *)&xmmword_140C13F30 = 0LL;
  xmmword_140C13F40 = 0LL;
}
