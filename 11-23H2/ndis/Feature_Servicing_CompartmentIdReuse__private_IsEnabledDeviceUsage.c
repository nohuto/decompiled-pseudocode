/*
 * XREFs of Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage @ 0x1C0038080
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C0033834 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C0033D08 (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     Feature_Servicing_CompartmentIdReuse__private_IsEnabledFallback @ 0x1C00380B8 (Feature_Servicing_CompartmentIdReuse__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CompartmentIdReuse__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CompartmentIdReuse__private_featureState & 1;
  else
    return Feature_Servicing_CompartmentIdReuse__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CompartmentIdReuse__private_featureState,
             3LL);
}
