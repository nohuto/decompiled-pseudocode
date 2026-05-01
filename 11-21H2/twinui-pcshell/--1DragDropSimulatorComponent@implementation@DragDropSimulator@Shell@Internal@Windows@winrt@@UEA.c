/*
 * XREFs of ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18056C5C4
 * Callers:
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent__::_1_::dtor$0 @ 0x18021C533 (_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell--DragDropSimulator--implemen.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::~DragDropSimulatorComponent(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
