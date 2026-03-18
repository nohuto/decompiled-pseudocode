/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__ @ 0x180003B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010E860 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MsaaQualityMode", 2LL, 1LL);
  CCommonRegistryData::Scene::MsaaQualityMode = result;
  return result;
}
