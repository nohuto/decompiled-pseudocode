/*
 * XREFs of Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage @ 0x1C00D53EC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1C00D5148 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledFallback @ 0x1C00D5424 (Feature_EndInertiaOnKeyPress__private_IsEnabledFallback.c)
 */

__int64 Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsage()
{
  if ( (Feature_EndInertiaOnKeyPress__private_featureState & 0x10) != 0 )
    return Feature_EndInertiaOnKeyPress__private_featureState & 1;
  else
    return Feature_EndInertiaOnKeyPress__private_IsEnabledFallback(
             (unsigned int)Feature_EndInertiaOnKeyPress__private_featureState,
             3LL);
}
