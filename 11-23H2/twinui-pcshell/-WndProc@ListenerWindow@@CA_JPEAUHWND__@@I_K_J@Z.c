/*
 * XREFs of ?WndProc@ListenerWindow@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800DA080
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RVListenerWindow@@UListenerWindowNotificationArgs@@@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x1800441D4 (--$-RVListenerWindow@@UListenerWindowNotificationArgs@@@-$event@U-$EventHandler@UIInspectable@Fo.c)
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall ListenerWindow::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v8; // r15
  __int64 v9; // rbx
  HWND v10; // rcx
  const char *v12; // r9
  _QWORD v13[3]; // [rsp+20h] [rbp-68h] BYREF
  int v14; // [rsp+38h] [rbp-50h]
  WPARAM v15; // [rsp+40h] [rbp-48h]
  LPARAM v16; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v8 = WindowLongPtrW;
  v9 = 0LL;
  if ( !WindowLongPtrW || (v10 = *(HWND *)(WindowLongPtrW + 24)) == 0LL )
    JUMPOUT(0x1803144CBLL);
  switch ( a2 )
  {
    case 0x82u:
      SetWindowLongPtrW(v10, 0, 0LL);
      *(_QWORD *)(v8 + 24) = 0LL;
      break;
    case 0x401u:
      if ( !DestroyWindow(v10) )
        wil::details::in1diag3::_Throw_GetLastError(
          retaddr,
          (void *)0x5A,
          (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
          v12);
      break;
    case 0x402u:
      v13[2] = &winrt::impl::produce<ListenerWindowNotificationArgs,winrt::Windows::Foundation::IInspectable>::`vftable';
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v13[1] = 1LL;
      v13[0] = &ListenerWindowNotificationArgs::`vftable';
      v14 = 1026;
      v15 = a3;
      v16 = a4;
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<ListenerWindow,ListenerWindowNotificationArgs>(
        WindowLongPtrW + 32,
        WindowLongPtrW,
        (__int64)v13);
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)v13);
      winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
      break;
    default:
      return DefWindowProcW(v10, a2, a3, a4);
  }
  return v9;
}
