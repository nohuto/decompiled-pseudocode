/*
 * XREFs of ?QueryInterface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9F30
 * Callers:
 *     ?QueryInterface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB260 (-QueryInterface@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Fou_ea_1802AB260.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::query_interface(
           (volatile signed __int64 *)(a1 + 24),
           a2,
           a3);
}
