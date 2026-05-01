/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180164200
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800C9510 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x180153E70 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--operator().c)
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x180153F2C (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180164114 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::_scalar_deleting_destructor_ @ 0x180164140 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--_scalar_deleting_destructo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::_scalar_deleting_destructor_ @ 0x1801641A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--_scala.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180292690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180292690.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1802926B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1802926B0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1802926D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1802926D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1802926F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1802926F0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 17);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 17, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
