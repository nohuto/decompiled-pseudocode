/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800CBF34
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x18020DB90 (--_E-$heap_implements@V-$module_count_wrapper@UDragDropSimulatorComponent@implement_ea_18020DB90.c)
 * Callees:
 *     ??1?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1800CBF70 (--1-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::immersive_shell_component *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>>::`vector deleting destructor'(
        winrt::immersive_shell_component *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::~module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x70uLL);
  return a1;
}
