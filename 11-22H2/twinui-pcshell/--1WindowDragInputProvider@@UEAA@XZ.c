/*
 * XREFs of ??1WindowDragInputProvider@@UEAA@XZ @ 0x18068AD90
 * Callers:
 *     ??_EWindowDragInputProvider@@UEAAPEAXI@Z @ 0x18067A590 (--_EWindowDragInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ??1?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x180111BB0 (--1-$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Window.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 */

void __fastcall WindowDragInputProvider::~WindowDragInputProvider(
        WindowDragInputProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  HWND v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 3) == 0LL;
  *(_QWORD *)this = &WindowDragInputProvider::`vftable';
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x27,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      a4);
  __1__factory_event_revoker_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEA_AA_impl_winrt__QEAA_XZ((WindowDragInputProvider *)((char *)this + 88));
  if ( *((_QWORD *)this + 8) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref((unsigned int **)this + 8);
  if ( *((_QWORD *)this + 7) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((WindowDragInputProvider *)((char *)this + 56));
  if ( *((_QWORD *)this + 6) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((WindowDragInputProvider *)((char *)this + 48));
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((WindowDragInputProvider *)((char *)this + 40));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  v6 = (HWND)*((_QWORD *)this + 3);
  if ( v6 )
    DestroyWindow(v6);
  v7 = *((_QWORD *)this + 1);
  while ( v7 >= 0 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v7 - 1, v7);
    if ( v8 == v7 )
      goto LABEL_18;
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v7));
LABEL_18:
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
