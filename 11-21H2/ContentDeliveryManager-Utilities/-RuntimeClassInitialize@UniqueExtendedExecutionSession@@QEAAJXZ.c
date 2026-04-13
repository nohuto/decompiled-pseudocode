/*
 * XREFs of ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800B7268
 * Callers:
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x1800B5848 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800B34DC (--$WaitForCompletion@PEAU-$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@Applicati.c)
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x1800B3F80 (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800B4560 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x1800B7954 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B7AA0 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize(UniqueExtendedExecutionSession *this)
{
  __int64 **v2; // rdi
  __int64 v3; // rcx
  HRESULT v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 *v9; // rbx
  __int64 (__fastcall *v10)(__int64 *, HSTRING); // rsi
  HRESULT v11; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  int v14; // eax
  int v15; // esi
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  DWORD v19; // edx
  int v20; // r8d
  int v21; // edi
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rdi
  int v23; // eax
  int v25[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+38h] [rbp-D0h]
  _BYTE v28[24]; // [rsp+48h] [rbp-C0h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+78h] [rbp-90h] BYREF
  HSTRING_HEADER v31; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v32; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v33[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v34; // [rsp+C8h] [rbp-40h]
  int *v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h] BYREF
  char v38; // [rsp+E4h] [rbp-24h]
  int v39; // [rsp+108h] [rbp+0h] BYREF
  const char *v40; // [rsp+110h] [rbp+8h]
  __int64 v41; // [rsp+118h] [rbp+10h]
  char v42; // [rsp+120h] [rbp+18h]
  __int64 v43; // [rsp+128h] [rbp+20h]
  _BYTE v44[152]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v45; // [rsp+1C8h] [rbp+C0h]
  __int128 v46; // [rsp+1D0h] [rbp+C8h]
  __int64 v47; // [rsp+1E0h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v33[1] = 0LL;
  v33[2] = v33;
  v33[3] = 0LL;
  v34 = 0;
  v35 = &v39;
  v36 = &v37;
  v37 = 0;
  v38 = 0;
  v42 = 0;
  v39 = 0;
  v40 = "ExtendedExecutionRequested";
  v41 = 0LL;
  v43 = 1LL;
  v45 = 0LL;
  memset_0(v44, 0, sizeof(v44));
  v46 = 0LL;
  v47 = 0LL;
  v33[0] = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v33);
  v2 = (__int64 **)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  string = 0LL;
  v4 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession",
         0x43u,
         &hstringHeader,
         &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  *v2 = 0LL;
  v5 = RoActivateInstance(string, v25);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v2 = *(__int64 **)v25;
    }
    else
    {
      v5 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v25)(
             *(_QWORD *)v25,
             &GUID_af908a2d_118b_48f1_9308_0c4fc41e200f,
             (char *)this + 64);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
    }
  }
  string = 0LL;
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 125LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)v6);
LABEL_42:
    CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v33);
    return (unsigned int)v5;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v2 + 56))(*v2, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 126LL;
LABEL_13:
    v6 = (unsigned int)v8;
    goto LABEL_14;
  }
  v9 = *v2;
  v10 = *(__int64 (__fastcall **)(__int64 *, HSTRING))(**v2 + 72);
  v32 = 0LL;
  v11 = WindowsCreateStringReference(L"UnlockActionHelper", 0x12u, &v31, &v32);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    JUMPOUT(0x1800B77D1LL);
  }
  v8 = v10(v9, v32);
  v5 = v8;
  v32 = 0LL;
  if ( v8 < 0 )
  {
    v7 = 127LL;
    goto LABEL_13;
  }
  *(_QWORD *)&v27 = UniqueExtendedExecutionSession::OnSessionRevoked;
  DWORD2(v27) = 0;
  *(_QWORD *)v28 = this;
  *(_OWORD *)&v28[8] = v27;
  v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    v12[3] = 1;
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v13 + 1) = *(_OWORD *)v28;
    *((_QWORD *)v13 + 4) = *(_QWORD *)&v28[16];
    *(_QWORD *)v13 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<IInspectable *,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>>::*)(IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_,-1,IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)&v27 = v13;
  v14 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(**v2 + 96))(*v2, v13, (char *)this + 72);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v14);
    if ( v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    v5 = v15;
    goto LABEL_42;
  }
  v26 = 0LL;
  v16 = *v2;
  v17 = **v2;
  v26 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v17 + 112))(
          v16,
          &v26);
  v21 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v18);
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[2])(v26);
    if ( v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_41:
    v5 = v21;
    goto LABEL_42;
  }
  v22 = v26;
  v25[0] = 0;
  v23 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> *>(
          v26,
          v19,
          v20);
  if ( v23 >= 0 )
    v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*v22)[8])(v22, v25);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1647LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v23,
      v25[0]);
  if ( v25[0] )
  {
    UniqueExtendedExecutionSession::CloseSession(this, 0);
    v21 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)0x8000FFFFLL);
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[2])(v26);
    if ( v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_41;
  }
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v33);
  if ( v26 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[2])(v26);
  if ( v13 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v33);
  return 0LL;
}
