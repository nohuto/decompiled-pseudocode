/*
 * XREFs of ??1CompositionNotificationDeferral@Composition@UI@Windows@@EEAA@XZ @ 0x180187DC8
 * Callers:
 *     ??_GCompositionNotificationDeferral@Composition@UI@Windows@@EEAAPEAXI@Z @ 0x180123BD0 (--_GCompositionNotificationDeferral@Composition@UI@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InvokeCompletedHandler@CompositionNotificationDeferral@Composition@UI@Windows@@AEAAXXZ @ 0x180187FC0 (-InvokeCompletedHandler@CompositionNotificationDeferral@Composition@UI@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionNotificationDeferral::~CompositionNotificationDeferral(
        Windows::UI::Composition::CompositionNotificationDeferral *this,
        volatile int *a2)
{
  __int64 v3; // rcx

  *(_QWORD *)this = &Windows::UI::Composition::CompositionNotificationDeferral::`vftable';
  *((_QWORD *)this + 1) = &Windows::UI::Composition::CompositionNotificationDeferral::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::UI::Composition::CompositionNotificationDeferral::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 16, 1, 0) )
    Windows::UI::Composition::CompositionNotificationDeferral::InvokeCompletedHandler(this);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>(
    (__int64)this,
    a2);
}
