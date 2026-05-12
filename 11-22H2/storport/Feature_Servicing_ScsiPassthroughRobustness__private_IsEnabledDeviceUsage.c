/*
 * XREFs of Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsage @ 0x1C00228A8
 * Callers:
 *     DllInitialize @ 0x1C0063C00 (DllInitialize.c)
 * Callees:
 *     Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledFallback @ 0x1C00228E0 (Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_ScsiPassthroughRobustness__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ScsiPassthroughRobustness__private_featureState & 1;
  else
    return Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ScsiPassthroughRobustness__private_featureState,
             3LL);
}
