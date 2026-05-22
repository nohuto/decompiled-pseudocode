/*
 * XREFs of ?SetOwner@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXPEAUIInteractionTrackerOwner@2345@@Z @ 0x18013B148
 * Callers:
 *     ?RuntimeClassInitialize@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUIInteractionTrackerOwner@2345@@Z @ 0x18013A984 (-RuntimeClassInitialize@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVComposi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::SetOwner(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *a2)
{
  __int64 *v2; // rdi
  struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 336);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 42);
  if ( (struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *)*v2 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = (struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *)*v2;
    *v2 = (__int64)a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v5);
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    22,
    a2 != 0LL ? 0x1003 : 0);
}
