/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MaxCoverage__ @ 0x180003980
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010E770 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MaxCoverage__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MajorityScreenTest_MaxCoverage", 10LL, 0LL);
  CCommonRegistryData::MajorityScreenTest_MaxCoverage = result;
  return result;
}
