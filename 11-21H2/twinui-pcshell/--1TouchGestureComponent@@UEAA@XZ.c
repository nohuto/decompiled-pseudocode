/*
 * XREFs of ??1TouchGestureComponent@@UEAA@XZ @ 0x18015EB1C
 * Callers:
 *     ??_G?$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z @ 0x18015EAE0 (--_G-$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18015EB70 (--1TouchGestureProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall TouchGestureComponent::~TouchGestureComponent(TouchGestureComponent *this)
{
  __int64 *v2; // rcx
  void *v3; // rdi

  v2 = (__int64 *)((char *)this + 96);
  if ( *v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v2);
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    TouchGestureProcessor::~TouchGestureProcessor(*((TouchGestureProcessor **)this + 11));
    operator delete(v3, 0x110uLL);
  }
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
