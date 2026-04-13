/*
 * XREFs of ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180055B2C
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18005DB98 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180037C98 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004A6CC (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::_)(Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d__&__1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d__&__1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___ @ 0x18005110C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2_____::_MakeAllocator_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2_____ @ 0x180052EB0 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--AsyncOperation_Windows--Foundation--IA.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18005AF44 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::ContentManagementService::EnsureOpenConnection(
        ContentManagement::ContentManagementService *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  __int64 *v4; // rsi
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v5; // rax
  __int64 v6; // rax
  struct Windows::ApplicationModel::AppService::IAppServiceConnection **v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  void *v11; // rdi
  __int64 (__fastcall *v12)(void *, void *, char *); // r12
  void *v13; // rbx
  void *v14; // rax
  int v15; // edi
  __int64 v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  void *v18; // [rsp+60h] [rbp+40h] BYREF
  __int64 v19; // [rsp+68h] [rbp+48h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+50h] BYREF
  ContentManagement::ContentManagementService *v21; // [rsp+78h] [rbp+58h] BYREF

  v4 = (__int64 *)((char *)this + 128);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 16);
  v5 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
  *a2 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
  if ( v5 )
    return 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, (RTL_SRWLOCK *)this + 15);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
  v6 = *v4;
  *a2 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
  if ( v6 )
  {
LABEL_18:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  v8 = ContentManagement::OpenAndValidateConnection((ContentManagement *)&v18, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x291,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return v9;
  }
  v11 = v18;
  v12 = *(__int64 (__fastcall **)(void *, void *, char *))(*(_QWORD *)v18 + 112LL);
  v21 = this;
  v13 = 0LL;
  v14 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = (__int64)v14;
  if ( v14 )
  {
    v13 = (void *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::___Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d_____1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d_____1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___(
                    (__int64)v14,
                    &v21);
    v19 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2_____::_MakeAllocator_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2_____((void **)&v19);
  v19 = (__int64)v13;
  v15 = v12(v11, v13, (char *)this + 136);
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v15 >= 0 )
  {
    v16 = (__int64)v18;
    if ( (void *)*v4 != v18 )
    {
      v19 = (__int64)v18;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v19);
      v19 = *v4;
      *v4 = v16;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
    *a2 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29E,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v15;
}
