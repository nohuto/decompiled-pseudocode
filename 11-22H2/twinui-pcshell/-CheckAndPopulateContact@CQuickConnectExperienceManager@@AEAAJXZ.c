/*
 * XREFs of ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18044C80C
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18044E7E0 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x18044EE80 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0f768bc8971e0bee1fc73f6126b3910e___ @ 0x18044B8B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_0f768bc8971e0bee1fc73f6126b3910e___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c080f31e4a013481e3d9e91b0ac65f7c___ @ 0x18044B94C (Windows--Internal--ComTaskPool--QueueTask__lambda_c080f31e4a013481e3d9e91b0ac65f7c___.c)
 *     _lambda_0f768bc8971e0bee1fc73f6126b3910e_::_lambda_0f768bc8971e0bee1fc73f6126b3910e_ @ 0x18044BB2C (_lambda_0f768bc8971e0bee1fc73f6126b3910e_--_lambda_0f768bc8971e0bee1fc73f6126b3910e_.c)
 *     _lambda_c080f31e4a013481e3d9e91b0ac65f7c_::_lambda_c080f31e4a013481e3d9e91b0ac65f7c_ @ 0x18044BBC4 (_lambda_c080f31e4a013481e3d9e91b0ac65f7c_--_lambda_c080f31e4a013481e3d9e91b0ac65f7c_.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044BDA8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18044BDA8.c)
 *     _lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_ @ 0x18044BFA8 (_lambda_0f768bc8971e0bee1fc73f6126b3910e_--__lambda_0f768bc8971e0bee1fc73f6126b3910e_.c)
 *     _lambda_c080f31e4a013481e3d9e91b0ac65f7c_::__lambda_c080f31e4a013481e3d9e91b0ac65f7c_ @ 0x18044BFE0 (_lambda_c080f31e4a013481e3d9e91b0ac65f7c_--__lambda_c080f31e4a013481e3d9e91b0ac65f7c_.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C154 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x18044CB64 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x18044F670 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x18044F708 (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18044FCCC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CQuickConnectExperienceManager::CheckAndPopulateContact(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  CQuickConnectExperienceManager *v4; // rcx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v18; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[320]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[40]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v21[44]; // [rsp+2D0h] [rbp+1D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+458h] [rbp+358h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"ExperienceManager_CheckAndPopulateContact");
  v20[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::StartActivity((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v20);
  v2 = *((_QWORD *)this + 40);
  if ( !v2 )
    goto LABEL_18;
  if ( !*((_QWORD *)this + 41) )
  {
    v3 = (unsigned int)this;
LABEL_10:
    if ( *((_BYTE *)this + 364) && *((_QWORD *)this + 46) )
    {
      v10 = *((_QWORD *)this + 40);
      v17 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v16 = *((_QWORD *)this + 46);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v20, v19);
      v11 = lambda_c080f31e4a013481e3d9e91b0ac65f7c_::_lambda_c080f31e4a013481e3d9e91b0ac65f7c_(
              v21,
              &v17,
              &v16,
              (__int64)v19);
      v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_c080f31e4a013481e3d9e91b0ac65f7c___(v13, v12, v3, v11);
      lambda_c080f31e4a013481e3d9e91b0ac65f7c_::__lambda_c080f31e4a013481e3d9e91b0ac65f7c_(v21);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x443,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v19);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 46);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    }
LABEL_18:
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
    v6 = 0;
    goto LABEL_19;
  }
  v17 = *((_QWORD *)this + 40);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v16 = *((_QWORD *)this + 41);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  LOBYTE(v15) = *((_BYTE *)this + 364);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  v5 = CQuickConnectExperienceManager::CopyContactCardOptions(
         v4,
         *((struct Windows::ApplicationModel::Contacts::IContactCardOptions **)this + 42),
         &v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v20, v19);
    v7 = lambda_0f768bc8971e0bee1fc73f6126b3910e_::_lambda_0f768bc8971e0bee1fc73f6126b3910e_(
           (__int64)v21,
           &v17,
           &v16,
           &v18,
           &v15,
           (__int64)v19);
    v3 = (unsigned int)this;
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_0f768bc8971e0bee1fc73f6126b3910e___(
           v9,
           v8,
           (unsigned int)this,
           v7);
    lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_(v21);
    if ( v6 >= 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x425,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x410,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
LABEL_19:
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v20);
  return (unsigned int)v6;
}
