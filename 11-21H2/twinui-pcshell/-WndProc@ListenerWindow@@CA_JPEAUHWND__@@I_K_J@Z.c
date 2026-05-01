/*
 * XREFs of ?WndProc@ListenerWindow@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18013C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ??$?RVListenerWindow@@UListenerWindowNotificationArgs@@@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x18003840C (--$-RVListenerWindow@@UListenerWindowNotificationArgs@@@-$event@U-$EventHandler@UIInspectable@Fo.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall ListenerWindow::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v8; // r15
  __int64 v9; // rbx
  HWND v10; // rcx
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v16[3]; // [rsp+20h] [rbp-68h] BYREF
  int v17; // [rsp+38h] [rbp-50h]
  WPARAM v18; // [rsp+40h] [rbp-48h]
  LPARAM v19; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v8 = WindowLongPtrW;
  v9 = 0LL;
  if ( !WindowLongPtrW || (v10 = *(HWND *)(WindowLongPtrW + 24)) == 0LL )
    JUMPOUT(0x1802C2CBFLL);
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
          (void *)0x57,
          (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
          v12);
      break;
    case 0x402u:
      v16[2] = &winrt::impl::produce<ListenerWindowNotificationArgs,winrt::Windows::Foundation::IInspectable>::`vftable';
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v16[1] = 1LL;
      v16[0] = &ListenerWindowNotificationArgs::`vftable';
      v17 = 1026;
      v18 = a3;
      v19 = a4;
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<ListenerWindow,ListenerWindowNotificationArgs>(
        WindowLongPtrW + 32,
        WindowLongPtrW,
        (__int64)v16);
      winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference((__int64)v16);
      winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v13, v14, v15);
      break;
    default:
      return DefWindowProcW(v10, a2, a3, a4);
  }
  return v9;
}
