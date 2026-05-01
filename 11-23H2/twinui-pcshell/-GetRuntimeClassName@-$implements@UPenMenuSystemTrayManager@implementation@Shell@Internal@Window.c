/*
 * XREFs of ?GetRuntimeClassName@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@EEBA?AUhstring@2@XZ @ 0x18048ED00
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180392254 (-get@-$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA-AUhstring@3@XZ.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  winrt::impl::runtime_class_name<IObjectWithSite,void>::get(a2);
  return a2;
}
