/*
 * XREFs of ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180392254
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x18022DE70 (-GetRuntimeClassName@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@S.c)
 *     ?GetRuntimeClassName@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@EEBA?AUhstring@2@XZ @ 0x18048ED00 (-GetRuntimeClassName@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::runtime_class_name<IObjectWithSite,void>::get(
        struct winrt::impl::hstring_header **a1)
{
  *a1 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"{fc4801a3-2ba9-11cf-a229-00aa003d7352}",
          (winrt::impl *)0x26);
  return a1;
}
