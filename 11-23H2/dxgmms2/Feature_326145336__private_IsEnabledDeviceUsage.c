/*
 * XREFs of Feature_326145336__private_IsEnabledDeviceUsage @ 0x1C001A548
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C00B27D4 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     Feature_326145336__private_IsEnabledFallback @ 0x1C001A580 (Feature_326145336__private_IsEnabledFallback.c)
 */

__int64 Feature_326145336__private_IsEnabledDeviceUsage()
{
  if ( (Feature_326145336__private_featureState & 0x10) != 0 )
    return Feature_326145336__private_featureState & 1;
  else
    return Feature_326145336__private_IsEnabledFallback((unsigned int)Feature_326145336__private_featureState, 3LL);
}
