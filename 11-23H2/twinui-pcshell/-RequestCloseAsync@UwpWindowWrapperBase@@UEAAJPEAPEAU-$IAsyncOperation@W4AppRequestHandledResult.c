/*
 * XREFs of ?RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804F1570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F730 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18004F730.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x18006B878 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1804E3648 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     ??$copy_to@U?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@?$com_ptr_t@VAppRequestOperation@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804E5858 (--$copy_to@U-$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Window.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804EB728 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_ed7f0a6228c8488fd474f055f2d85ce3___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_ed7f0a6228c8488fd474f055f2d85ce3___ @ 0x1804EFCC4 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1804EFCC4.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3223cd2118d3dd12188a1bdf6e3b7b75___ @ 0x1804EFF2C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3223cd2118d3dd12188a1bdf6e3b7b75.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall UwpWindowWrapperBase::RequestCloseAsync(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
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
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-50h] BYREF
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
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 272) + 208LL))(*(_QWORD *)(a1 + 272), &SRWLock);
    v22 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>((AppRequestOperation **)&v22);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3D1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
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
      v7 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_ed7f0a6228c8488fd474f055f2d85ce3___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_ed7f0a6228c8488fd474f055f2d85ce3___(
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
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18 + 1);
      *(_QWORD *)&v18 = a1 - 8;
      *((_QWORD *)&v18 + 1) = &v23;
      CurrentThreadId = GetCurrentThreadId();
      v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3223cd2118d3dd12188a1bdf6e3b7b75___(
              v11,
              CurrentThreadId,
              &v18);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x407,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v12,
          v16);
      v20 = 0;
      v13 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    }
    wil::com_ptr_t<AppRequestOperation,wil::err_exception_policy>::copy_to<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v22,
      a2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x411,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                     v14);
    return (unsigned int)v22;
  }
  return result;
}
