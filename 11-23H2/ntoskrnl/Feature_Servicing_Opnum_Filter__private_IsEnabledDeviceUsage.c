/*
 * XREFs of Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage @ 0x14041A310
 * Callers:
 *     AdtpWriteToEtw @ 0x14083CD50 (AdtpWriteToEtw.c)
 * Callees:
 *     Feature_Servicing_Opnum_Filter__private_IsEnabledFallback @ 0x14041A348 (Feature_Servicing_Opnum_Filter__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Opnum_Filter__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_Opnum_Filter__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Opnum_Filter__private_featureState & 1;
  else
    return Feature_Servicing_Opnum_Filter__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Opnum_Filter__private_featureState,
             3LL);
}
