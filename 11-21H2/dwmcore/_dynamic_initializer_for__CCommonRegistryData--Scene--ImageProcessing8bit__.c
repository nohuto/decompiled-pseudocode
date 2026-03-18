/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessing8bit__ @ 0x180003650
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x180025D4C (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessing8bit__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"ImageProcessing8bit", 0LL, 1LL);
  CCommonRegistryData::Scene::ImageProcessing8bit = result;
  return result;
}
