/*
 * XREFs of ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x180732144
 * Callers:
 *     ?Execute@SwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731B70 (-Execute@SwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18008D098 (--$open_and_watch_errors@V-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsCurrentVDRemote@@YA_NXZ @ 0x1805FB74C (-IsCurrentVDRemote@@YA_NXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180725DD8 (-GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA-AUhst.c)
 *     ?Add@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@AEBU?$com_ptr@UIVirtualDesktop@@@6@@Z @ 0x18072FDDC (-Add@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@AEB.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x180731318 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA-A_.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::RecreateDesktopWithViewsAssociation(
        PSRWLOCK *this,
        const struct winrt::hstring *a2)
{
  int v4; // eax
  const WCHAR *v5; // rax
  UINT32 v6; // edx
  HRESULT v7; // eax
  int v8; // eax
  int v9; // eax
  void **v10; // rax
  _WORD *v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  int v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v18; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v21; // [rsp+50h] [rbp-B0h]
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[24]; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v28[24]; // [rsp+A8h] [rbp-58h] BYREF
  int v29; // [rsp+C0h] [rbp-40h]
  std::_Ref_count_base *v30; // [rsp+D8h] [rbp-28h]
  IID rclsid; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  tip::open_and_watch_errors<tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v27);
  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PSRWLOCK, GUID *, __int64 *))(*this)->Ptr)(
         *this,
         &GUID_53f5ca0b_158f_4124_900c_057158060b27,
         &v16);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3A,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v4,
      v15[0]);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::GetRemoteDesktopName(&v18);
  v5 = winrt::hstring::c_str((winrt::hstring *)&v18);
  v7 = WindowsCreateStringReference(v5, v6, &hstringHeader, &string);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v7,
      v15[0]);
  *(_QWORD *)v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v16 + 152LL))(v16, string, v15);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x42,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v8,
      v15[0]);
  if ( IsCurrentVDRemote() )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 160LL))(v16, *(_QWORD *)v15, 1LL);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x46,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v9,
        v15[0]);
  }
  if ( *(_QWORD *)v15 )
  {
    tip::open_and_watch_errors<tip::tip_test<_tip_RecoverRemoteSessionTipTest>>((struct wil::details::IFailureCallback *)v22);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v22) )
    {
      rclsid = 0LL;
      (*(void (__fastcall **)(_QWORD, IID *))(**(_QWORD **)v15 + 32LL))(*(_QWORD *)v15, &rclsid);
      pv = 0LL;
      v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
      StringFromCLSID(&rclsid, (LPOLESTR *)v10);
      v11 = pv;
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v20,
        &v25);
      v12 = v20;
      tip::details::test_common_data<1>::begin_update(v20 + 8);
      v13 = -1LL;
      do
        ++v13;
      while ( v11[v13] );
      v14 = v12 + 216;
      if ( !v12 )
        v14 = 40LL;
      std::wstring::assign((char *)v14, v11, v13);
      if ( v12 )
      {
        tip::details::test_common_data<1>::end_update(v12 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v20);
      }
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      if ( pv )
        CoTaskMemFree(pv);
    }
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    if ( v24 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  }
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Add(this[1], (__int64 *)a2, v15);
  if ( *(_QWORD *)v15 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
  if ( v16 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v29 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v28);
}
