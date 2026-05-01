/*
 * XREFs of ??1TouchGestureProcessor@@QEAA@XZ @ 0x18015EB70
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180064510 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 *     ??1TouchGestureComponent@@UEAA@XZ @ 0x18015EB1C (--1TouchGestureComponent@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x18058C3B4 (--1-$unique_ptr@VTouchGestureProcessor@@U-$default_delete@VTouchGestureProcessor@@@std@@@std@@QE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ @ 0x18015ECEC (--1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall TouchGestureProcessor::~TouchGestureProcessor(TouchGestureProcessor *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (TouchGestureProcessor *)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, 0LL);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v2 + 88LL))(*(_QWORD *)v2, *((_QWORD *)this + 5));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v2 + 104LL))(*(_QWORD *)v2, *((_QWORD *)this + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v2 + 120LL))(*(_QWORD *)v2, *((_QWORD *)this + 7));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 232LL))(
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 8));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 248LL))(
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 9));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 264LL))(
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 10));
    v5 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v5);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  }
  TouchGestureProcessor::PointerEventsDetector::~PointerEventsDetector((TouchGestureProcessor *)((char *)this + 112));
  if ( *((_QWORD *)this + 4) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchGestureProcessor *)((char *)this + 32));
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 2) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)this + 2);
  if ( *((_QWORD *)this + 1) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
