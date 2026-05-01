/*
 * XREFs of ??1TouchGestureProcessor@@QEAA@XZ @ 0x18017310C
 * Callers:
 *     ??1TouchGestureComponent@@UEAA@XZ @ 0x1801730A8 (--1TouchGestureComponent@@UEAA@XZ.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180173280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 *     ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x18064B21C (--1-$unique_ptr@VTouchGestureProcessor@@U-$default_delete@VTouchGestureProcessor@@@std@@@std@@QE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?TouchGesturesEnabled@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180173EB0 (-TouchGesturesEnabled@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGestur.c)
 *     ??1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ @ 0x180173F28 (--1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TouchGestureProcessor::~TouchGestureProcessor(TouchGestureProcessor *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rsi
  winrt::Windows::Foundation::IUnknown *v3; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (TouchGestureProcessor *)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled(
      (char *)this + 24,
      0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v2 + 88LL))(*(_QWORD *)v2, *((_QWORD *)this + 5));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v2 + 104LL))(*(_QWORD *)v2, *((_QWORD *)this + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v2 + 120LL))(*(_QWORD *)v2, *((_QWORD *)this + 7));
    v3 = (TouchGestureProcessor *)((char *)this + 32);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 232LL))(
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 8));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v3 + 248LL))(*(_QWORD *)v3, *((_QWORD *)this + 9));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v3 + 264LL))(*(_QWORD *)v3, *((_QWORD *)this + 10));
    v4 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v4);
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  }
  else
  {
    v3 = (TouchGestureProcessor *)((char *)this + 32);
  }
  TouchGestureProcessor::PointerEventsDetector::~PointerEventsDetector((TouchGestureProcessor *)((char *)this + 112));
  if ( *(_QWORD *)v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 2) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 2);
  if ( *((_QWORD *)this + 1) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
