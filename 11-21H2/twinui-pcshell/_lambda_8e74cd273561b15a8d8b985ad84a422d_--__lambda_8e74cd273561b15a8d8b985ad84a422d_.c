/*
 * XREFs of _lambda_8e74cd273561b15a8d8b985ad84a422d_::__lambda_8e74cd273561b15a8d8b985ad84a422d_ @ 0x18000BFB4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_8e74cd273561b15a8d8b985ad84a422d___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_scalar_deleting_destructor_ @ 0x18000BBA0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18000BBA0.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18000BC14 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180071C30 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_180071C30.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180074D30 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEEA4 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall lambda_8e74cd273561b15a8d8b985ad84a422d_::__lambda_8e74cd273561b15a8d8b985ad84a422d_(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax

  *(_QWORD *)(a1 + 24) = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 24);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 336);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 312));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 120));
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    *(_DWORD *)(a1 + 80) = 2;
    v4 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
           v2,
           _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>(*(_QWORD *)(v4 + 8), a1 + 88);
  }
  *(_DWORD *)(a1 + 80) = 3;
  if ( *(_DWORD *)(a1 + 56) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 32));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 16);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
