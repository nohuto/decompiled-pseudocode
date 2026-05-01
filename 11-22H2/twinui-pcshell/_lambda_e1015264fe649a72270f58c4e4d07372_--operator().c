/*
 * XREFs of _lambda_e1015264fe649a72270f58c4e4d07372_::operator() @ 0x1802817F8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_e1015264fe649a72270f58c4e4d07372___::Invoke @ 0x180281960 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180281960.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x180554994 (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18071D9F0 (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_e1015264fe649a72270f58c4e4d07372_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v9; // [rsp+48h] [rbp+18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  *(_OWORD *)v7 = 0LL;
  std::_Ptr_base<CAppThumbnailWindow>::_Construct_from_weak<CAppThumbnailWindow>(v7, a1);
  v3 = v7[0];
  if ( v7[0] )
  {
    v10 = 0LL;
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v7[0] + 6))(
           *((_QWORD *)v7[0] + 6),
           &GUID_53f5ca0b_158f_4124_900c_057158060b27,
           &v10);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x52,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v4,
        (int)v7[0]);
    winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(*((PSRWLOCK *)v3 + 7));
    v5 = v9;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 160LL))(v10, v9, 1LL);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x56,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v6,
        (int)v7[0]);
    winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke((char *)v3 + 72);
    if ( v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
  }
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
}
