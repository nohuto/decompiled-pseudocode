/*
 * XREFs of ?GetRuntimeClassName@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@EEBA?AUhstring@2@XZ @ 0x180593D30
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1805982E4 (-get@-$runtime_class_name@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhstring@3@X.c)
 */

__int64 __fastcall winrt::implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::IInspectable,void>::get(a2);
  return a2;
}
