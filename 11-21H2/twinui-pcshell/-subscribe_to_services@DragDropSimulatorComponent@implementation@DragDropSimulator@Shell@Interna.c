/*
 * XREFs of ?subscribe_to_services@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800B4CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::subscribe_to_services(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this,
        struct IServiceProvider *a2)
{
  wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=((char *)this + 96, a2);
}
