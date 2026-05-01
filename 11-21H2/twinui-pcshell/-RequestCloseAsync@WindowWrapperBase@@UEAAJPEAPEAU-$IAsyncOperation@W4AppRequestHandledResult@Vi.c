/*
 * XREFs of ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x18040BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x1800C3858 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18030BB50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18030BB50.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_7406a721fa5d252aee7de31cc0a40e84___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_7406a721fa5d252aee7de31cc0a40e84___ @ 0x180407FD8 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180407FD8.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1804080F8 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3e87ed8f2ab8c127964bc6cd9a92329c___ @ 0x180408498 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3e87ed8f2ab8c127964bc6cd9a92329c.c)
 *     ??$copy_to@U?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@?$com_ptr_t@VAppRequestOperation@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180408DC4 (--$copy_to@U-$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Window.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18040BA38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WindowWrapperBase::RequestCloseAsync(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-50h] BYREF
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-38h] BYREF
  char v20; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  volatile __int32 *v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  *a2 = 0LL;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 272) + 200LL))(*(_QWORD *)(a1 + 272), &v17);
    v22 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>((AppRequestOperation **)&v22);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3B3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v16);
    if ( *(_BYTE *)(a1 + 565) )
    {
      _InterlockedExchange(v22 + 42, 1);
      (*(void (__fastcall **)(volatile __int32 *))(*((_QWORD *)v22 + 2) + 128LL))(v22 + 4);
    }
    else
    {
      v19[1] = a1 - 8;
      v20 = 1;
      *(_BYTE *)(a1 + 565) = 1;
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v16, a1 - 8);
      *(_QWORD *)&v18 = a1 - 8;
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        (_QWORD *)&v18 + 1,
        v16);
      v19[0] = (__int64)v22;
      if ( v22 )
        (*(void (**)(void))(*(_QWORD *)v22 + 8LL))();
      v7 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_7406a721fa5d252aee7de31cc0a40e84___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_7406a721fa5d252aee7de31cc0a40e84___(
             &v24,
             (__int64)&v18);
      v23 = *v7;
      *v7 = 0LL;
      v9 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
          v9,
          v8);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v19);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v18 + 1);
      *(_QWORD *)&v18 = a1 - 8;
      *((_QWORD *)&v18 + 1) = &v23;
      CurrentThreadId = GetCurrentThreadId();
      v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3e87ed8f2ab8c127964bc6cd9a92329c___(
              v11,
              CurrentThreadId,
              &v18);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3E9,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v12,
          v16);
      v20 = 0;
      v13 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
    }
    wil::com_ptr_t<AppRequestOperation,wil::err_exception_policy>::copy_to<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v22,
      a2);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v22);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3F3,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v14);
    return (unsigned int)v22;
  }
  return result;
}
