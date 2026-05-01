/*
 * XREFs of ??_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18056C8FC
 * Callers:
 *     ??_EDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x18020DBB0 (--_EDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@WC.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800F7E9C (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this,
        char a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
