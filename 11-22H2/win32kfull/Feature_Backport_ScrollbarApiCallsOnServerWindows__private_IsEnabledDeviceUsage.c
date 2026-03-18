/*
 * XREFs of Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage @ 0x1C013CAD8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxGetScrollBarInfo @ 0x1C00C73CC (xxxGetScrollBarInfo.c)
 *     xxxShowScrollBar @ 0x1C0231FE0 (xxxShowScrollBar.c)
 * Callees:
 *     Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledFallback @ 0x1C013CB10 (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_featureState & 0x10) != 0 )
    return Feature_Backport_ScrollbarApiCallsOnServerWindows__private_featureState & 1;
  else
    return Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_ScrollbarApiCallsOnServerWindows__private_featureState,
             3LL);
}
