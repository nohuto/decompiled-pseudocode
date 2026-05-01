/*
 * XREFs of ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180431D04
 * Callers:
 *     ?StopActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180149FF0 (-StopActivity@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@MEAAXXZ @ 0x18042EAE0 (-StopActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@MEAAXXZ @ 0x18047D470 (-StopActivity@CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@MEAAXXZ @ 0x18047D6B0 (-StopActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
