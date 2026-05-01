/*
 * XREFs of ?zInternalStart@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806AA32C
 * Callers:
 *     ?StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerRequestPinItemResult@2@@Z @ 0x180252310 (-StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerReq.c)
 *     ?StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x180252410 (-StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x1802524F0 (-StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ @ 0x1806A580C (-StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z @ 0x1806A58BC (-StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXXZ @ 0x1806A5978 (-StartActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z @ 0x1806A5A20 (-StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  SRWLock = 0LL;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = (_DWORD *)wil::details::static_lazy<PinManagerTelemetry>::get(
                   v3,
                   (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    memset_0((void *)(v2 + 8), 0, 0x10uLL);
  v5 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
