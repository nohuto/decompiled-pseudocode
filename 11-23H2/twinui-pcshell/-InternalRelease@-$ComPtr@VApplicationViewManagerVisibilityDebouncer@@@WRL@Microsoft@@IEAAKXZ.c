/*
 * XREFs of ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180164114
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800C9510 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1800FE118 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18012DA34 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ??1?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@QEAA@XZ @ 0x1803CC9E0 (--1-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180164200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180164200.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(
             v1,
             v1);
  }
  return result;
}
