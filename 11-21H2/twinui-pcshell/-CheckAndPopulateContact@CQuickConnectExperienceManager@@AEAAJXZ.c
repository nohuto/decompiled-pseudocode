/*
 * XREFs of ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180376AEC
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180378B20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1803791C0 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe_____lambda_f35c72982d94b155c6e22210e02e73fe___ @ 0x180374AFC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_524e7201540b0d78c05a86380e3a64a5___ @ 0x180375C68 (Windows--Internal--ComTaskPool--QueueTask__lambda_524e7201540b0d78c05a86380e3a64a5___.c)
 *     _lambda_524e7201540b0d78c05a86380e3a64a5_::_lambda_524e7201540b0d78c05a86380e3a64a5_ @ 0x180375EA8 (_lambda_524e7201540b0d78c05a86380e3a64a5_--_lambda_524e7201540b0d78c05a86380e3a64a5_.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180375FD4 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180375FD4.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18037608C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18037608C.c)
 *     _lambda_524e7201540b0d78c05a86380e3a64a5_::__lambda_524e7201540b0d78c05a86380e3a64a5_ @ 0x180376280 (_lambda_524e7201540b0d78c05a86380e3a64a5_--__lambda_524e7201540b0d78c05a86380e3a64a5_.c)
 *     _lambda_f35c72982d94b155c6e22210e02e73fe_::__lambda_f35c72982d94b155c6e22210e02e73fe_ @ 0x1803762B0 (_lambda_f35c72982d94b155c6e22210e02e73fe_--__lambda_f35c72982d94b155c6e22210e02e73fe_.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18037642C (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x180376EEC (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x1803799B0 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x180379A3C (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037A048 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::CheckAndPopulateContact(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rbx
  __int64 *v3; // r15
  __int64 v4; // rdi
  char v5; // r12
  CQuickConnectExperienceManager *v6; // rcx
  int v7; // eax
  int v8; // esi
  void *v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v23; // [rsp+60h] [rbp-A0h] BYREF
  char v24; // [rsp+68h] [rbp-98h]
  void **v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[320]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v27[40]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+468h] [rbp+368h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"ExperienceManager_CheckAndPopulateContact");
  v27[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::StartActivity((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v27);
  v2 = *((_QWORD *)this + 40);
  if ( !v2 )
    goto LABEL_22;
  v3 = (__int64 *)((char *)this + 328);
  if ( !*((_QWORD *)this + 41) )
  {
LABEL_14:
    if ( *((_BYTE *)this + 364) )
    {
      v12 = (struct Windows::ApplicationModel::Contacts::IContactCardOptions *)*((_QWORD *)this + 46);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 40);
        v19 = v13;
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v12 = (struct Windows::ApplicationModel::Contacts::IContactCardOptions *)*((_QWORD *)this + 46);
        }
        v18 = v12;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v27, v26);
        v14 = lambda_524e7201540b0d78c05a86380e3a64a5_::_lambda_524e7201540b0d78c05a86380e3a64a5_(
                &v21,
                &v19,
                (__int64 *)&v18,
                (__int64)v26);
        v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_524e7201540b0d78c05a86380e3a64a5___(
               v16,
               v15,
               (unsigned int)this,
               v14);
        lambda_524e7201540b0d78c05a86380e3a64a5_::__lambda_524e7201540b0d78c05a86380e3a64a5_(&v21);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x441,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
          QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
          v11 = &v19;
          goto LABEL_20;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 46);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      }
    }
LABEL_22:
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
    v8 = 0;
    goto LABEL_23;
  }
  v20[0] = *((_QWORD *)this + 40);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = *v3;
  v19 = *v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  v5 = *((_BYTE *)this + 364);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  v7 = CQuickConnectExperienceManager::CopyContactCardOptions(
         v6,
         *((struct Windows::ApplicationModel::Contacts::IContactCardOptions **)this + 42),
         &v18);
  v8 = v7;
  if ( v7 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v27, v26);
    v21 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v22 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
    v23 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    v24 = v5;
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v25,
      (__int64)v26);
    v25 = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    v9 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
      v10 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe_____lambda_f35c72982d94b155c6e22210e02e73fe___(
              (__int64)v9,
              (__int64)&v21);
    else
      v10 = 0LL;
    v8 = SHTaskPoolQueueTask(3LL, 2LL, (unsigned int)this, 0LL, v10, 0LL);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    lambda_f35c72982d94b155c6e22210e02e73fe_::__lambda_f35c72982d94b155c6e22210e02e73fe_(&v21);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x424,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x410,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  v11 = v20;
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
LABEL_23:
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v27);
  return (unsigned int)v8;
}
