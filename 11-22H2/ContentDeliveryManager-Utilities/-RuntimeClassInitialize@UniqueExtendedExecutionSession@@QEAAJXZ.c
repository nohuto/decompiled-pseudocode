/*
 * XREFs of ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800A72F8
 * Callers:
 *     ??$MakeAndInitialize@VUniqueExtendedExecutionSession@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800A4864 (--$MakeAndInitialize@VUniqueExtendedExecutionSession@@UIInspectable@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003D9A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800724D8 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$ActivateInstance@UIExtendedExecutionSession@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIExtendedExecutionSession@ExtendedExecution@ApplicationModel@1@@Z @ 0x1800A405C (--$ActivateInstance@UIExtendedExecutionSession@ExtendedExecution@ApplicationModel@Windows@@@Foun.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_@@$0?0PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@PEAUIExtendedExecutionRevokedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@Z@Details@WRL@Microsoft@@V_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_@@$0?0PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@PEAUIExtendedExecutionRevokedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_@@@Z @ 0x1800A461C (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRev.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800A4AD4 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@Applicati.c)
 *     ??0?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800A4D24 (--0-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x1800A552C (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800A58A0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x1800A7880 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A7950 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize(struct IUnknown *this)
{
  struct IUnknown *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct IUnknownVtbl *lpVtbl; // rdi
  __int64 (__fastcall *v7)(struct IUnknownVtbl *, __int64); // rbx
  __int64 *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  struct IUnknownVtbl *v14; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  int v16; // eax
  DWORD v17; // edx
  int v18; // r8d
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rdi
  int v20; // eax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-D0h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _QWORD v27[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v27);
  v27[0] = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v27);
  v2 = this + 8;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset((__int64 *)&this[8]);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession",
    0x44u,
    0x43u);
  v3 = Windows::Foundation::ActivateInstance<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>(
         v26,
         &this[8].lpVtbl);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 125LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v3);
LABEL_26:
    CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v27);
    return v4;
  }
  v3 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD))v2->lpVtbl->QueryInterface + 7))(v2->lpVtbl, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 126LL;
    goto LABEL_5;
  }
  lpVtbl = v2->lpVtbl;
  v7 = (__int64 (__fastcall *)(struct IUnknownVtbl *, __int64))*((_QWORD *)v2->lpVtbl->QueryInterface + 9);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"UnlockActionHelper", 0x13u, 0x12u);
  v3 = v7(lpVtbl, v26);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 127LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v24 = UniqueExtendedExecutionSession::OnSessionRevoked;
  DWORD2(v24) = 0;
  hstringHeader.Reserved.Reserved1 = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v24;
  v8 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<IInspectable *,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>>::*)(IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_,-1,IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>,_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_>(
         &v23,
         (__int64)&hstringHeader);
  v10 = *v8;
  *(_QWORD *)&v24 = *v8;
  *v8 = 0LL;
  v11 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release(
      v11,
      v9);
  }
  v12 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64, struct IUnknown *))v2->lpVtbl->QueryInterface + 12))(
          v2->lpVtbl,
          v10,
          this + 9);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_25:
    v4 = v13;
    goto LABEL_26;
  }
  v22 = 0LL;
  v14 = v2->lpVtbl;
  QueryInterface = v2->lpVtbl->QueryInterface;
  v22 = 0LL;
  v16 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))QueryInterface
         + 14))(
          v14,
          &v22);
  v13 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_25;
  }
  v19 = v22;
  LODWORD(v23) = 0;
  v20 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> *>(
          v22,
          v17,
          v18);
  if ( v20 >= 0 )
    v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v19)[8])(v19, &v23);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v20,
      (int)v22);
  if ( (_DWORD)v23 )
  {
    UniqueExtendedExecutionSession::CloseSession(this, 0);
    v13 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)0x8000FFFFLL);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_25;
  }
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v27);
  return 0LL;
}
