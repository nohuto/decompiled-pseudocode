/*
 * XREFs of Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage @ 0x1C00380D4
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CF10 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C0033D08 (ndisIfCreateCompartmentBlock.c)
 *     ndisIfCreateCompartment @ 0x1C00B825C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B867C (ndisIfDeleteCompartment.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01607AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledFallback @ 0x1C003810C (Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CompartmentNotificationRaceCondition__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CompartmentNotificationRaceCondition__private_featureState & 1;
  else
    return Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_featureState,
             3LL);
}
