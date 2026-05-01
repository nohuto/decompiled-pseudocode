/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180594330
 * Callers:
 *     ?GetTrustLevel@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180594020 (-GetTrustLevel@-$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 24LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
