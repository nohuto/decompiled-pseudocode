/*
 * XREFs of ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18062A620
 * Callers:
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent__::_1_::dtor$0 @ 0x1802B52DD (_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell--DragDropSimulator--implemen.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::~DragDropSimulatorComponent(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this)
{
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
