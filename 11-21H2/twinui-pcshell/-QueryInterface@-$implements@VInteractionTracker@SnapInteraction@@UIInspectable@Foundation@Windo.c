/*
 * XREFs of ?QueryInterface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F83E0
 * Callers:
 *     ?QueryInterface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020EF70 (-QueryInterface@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Fou_ea_18020EF70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::query_interface(a1 + 24);
}
