/*
 * XREFs of ?SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180106E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::SetLights(CBatchOptimizer *this, struct CHwLightCollectionBuffer *a2)
{
  *((_QWORD *)this + 2) = a2;
}
