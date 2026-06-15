/*
 * XREFs of ?_Xrange@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x18003D794
 * Callers:
 *     ?GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z @ 0x18003C270 (-GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z.c)
 * Callees:
 *     <none>
 */

void std::vector<unsigned long>::_Xrange()
{
  std::_Xout_of_range("invalid vector subscript");
  __debugbreak();
  JUMPOUT(0x18003D7ACLL);
}
