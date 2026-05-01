/*
 * XREFs of ?Unregister@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x1805B6810
 * Callers:
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x1805B5B5C (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
 *     ?Register@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAJPEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x1805B6408 (-Register@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplication.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Unregister(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v1);
  }
  return result;
}
