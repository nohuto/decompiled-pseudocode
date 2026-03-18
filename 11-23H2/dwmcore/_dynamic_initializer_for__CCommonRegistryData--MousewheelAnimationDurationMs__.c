/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MousewheelAnimationDurationMs__ @ 0x180003AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010E770 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MousewheelAnimationDurationMs__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MousewheelAnimationDurationMs", 250LL, 0LL);
  CCommonRegistryData::MousewheelAnimationDurationMs = result;
  return result;
}
