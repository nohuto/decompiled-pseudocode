/*
 * XREFs of ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806AA3DC
 * Callers:
 *     ?StopActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@MEAAXXZ @ 0x1802526F0 (-StopActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@MEAAXXZ @ 0x180252920 (-StopActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@MEAAXXZ @ 0x180252B50 (-StopActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x1806A5BD8 (-Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x1806A5E68 (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A60F8 (-Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemR.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A63D8 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 *     ?StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ @ 0x1806A6900 (-StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ @ 0x1806A6B40 (-StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@MEAAXXZ @ 0x1806A6D80 (-StopActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ @ 0x1806A6FC0 (-StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ @ 0x18075C0A0 (-StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  SRWLock = 0LL;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
