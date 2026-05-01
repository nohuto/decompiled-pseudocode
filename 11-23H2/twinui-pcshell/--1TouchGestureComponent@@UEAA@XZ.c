/*
 * XREFs of ??1TouchGestureComponent@@UEAA@XZ @ 0x1801730A8
 * Callers:
 *     ??_G?$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z @ 0x18017306C (--_G-$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18017310C (--1TouchGestureProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall TouchGestureComponent::~TouchGestureComponent(TouchGestureComponent *this)
{
  __int64 *v2; // rcx
  void *v3; // rdi

  v2 = (__int64 *)((char *)this + 104);
  if ( *v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 12) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 12);
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    TouchGestureProcessor::~TouchGestureProcessor(*((TouchGestureProcessor **)this + 11));
    operator delete(v3, 0x110uLL);
  }
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
