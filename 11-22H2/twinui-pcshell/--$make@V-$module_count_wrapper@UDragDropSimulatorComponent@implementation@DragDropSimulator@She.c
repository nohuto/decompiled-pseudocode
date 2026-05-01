/*
 * XREFs of ??$make@V?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18008C278
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008B900 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@Dra.c)
 * Callees:
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008AD98 (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

_QWORD *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>,>(
        _QWORD *a1)
{
  _QWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x70uLL);
  memset_0(v3, 0, 0x70uLL);
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>((winrt::immersive_shell_component *)v3);
  *v3 = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v3[1] = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v3[2] = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v3[4] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::`vftable';
  *a1 = v3;
  return a1;
}
