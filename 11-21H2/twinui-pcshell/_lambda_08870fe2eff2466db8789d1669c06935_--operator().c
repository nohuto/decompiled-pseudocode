/*
 * XREFs of _lambda_08870fe2eff2466db8789d1669c06935_::operator() @ 0x180610F98
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_08870fe2eff2466db8789d1669c06935___::Invoke @ 0x180611340 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--_ea_180611340.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$query@UIXamlSnapAssistViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXamlSnapAssistViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801EA380 (--$query@UIXamlSnapAssistViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_p.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?revoke@?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x18060FE28 (-revoke@-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8typ.c)
 */

void __fastcall lambda_08870fe2eff2466db8789d1669c06935_::operator()(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (__fastcall ****v2)(_QWORD, GUID *, _QWORD *); // rbx
  _QWORD *v3; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlSnapAssistViewController__, a1);
  v4[0] = v1;
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))__abi_winrt_ptr_ctor(v1);
  v4[1] = (__int64)v2;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v2 )
  {
    v3 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IXamlSnapAssistViewHostInternal>(
           v2 + 7,
           v4);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 24LL))(*v3);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v4);
    _revoke___factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAAXXZ((winrt::Windows::Foundation::IUnknown *)(v2 + 46));
    ((void (__fastcall *)(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*v2)[2])(v2);
  }
}
