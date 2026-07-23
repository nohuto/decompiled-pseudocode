/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14036F2C4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14080ADAC (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  CmpRegistryProcess = 0LL;
  *(_OWORD *)&xmmword_140C13EF0 = 0LL;
  xmmword_140C13F00 = 0LL;
}
