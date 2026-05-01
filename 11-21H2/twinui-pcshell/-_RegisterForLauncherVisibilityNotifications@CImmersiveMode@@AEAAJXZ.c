/*
 * XREFs of ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x1800B81AC
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800B5E00 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     <none>
 */

signed int __fastcall CImmersiveMode::_RegisterForLauncherVisibilityNotifications(CImmersiveMode *this)
{
  NTSTATUS v2; // eax
  signed int result; // eax
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF

  v2 = RtlQueryWnfStateData(&v4, WNF_IMSN_LAUNCHERVISIBILITY, CImmersiveMode::ImmersiveLauncherWNFCallback, this);
  if ( v2 >= 0 )
    v2 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 376,
           WNF_IMSN_LAUNCHERVISIBILITY,
           v4,
           CImmersiveMode::ImmersiveLauncherWNFCallback,
           this,
           0LL,
           0,
           1);
  result = RtlNtStatusToDosError(v2);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
