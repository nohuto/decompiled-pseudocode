/*
 * XREFs of ??1?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x180111BB0
 * Callers:
 *     ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x180111728 (--0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$7 @ 0x1802BDE3C (_WindowDragInputProvider--WindowDragInputProvider_--_1_--dtor$7.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x18068AD90 (--1WindowDragInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??_9type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BEA@AA @ 0x1802ABC90 (--_9type@-$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@i.c)
 */

void __fastcall __1__factory_event_revoker_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEA_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Foundation::IUnknown *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)this;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v3);
     winrt::impl::abi<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,void>::type::`vcall'{64,{flat}}(
      v1,
      *((_QWORD *)this + 1));
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  }
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
