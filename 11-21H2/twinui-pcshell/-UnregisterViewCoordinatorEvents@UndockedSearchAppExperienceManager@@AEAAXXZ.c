/*
 * XREFs of ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FF78
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x18038E2C8 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x180020090 (-HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3a3935ecbddde1d51cea1162795583a1___ @ 0x180199A74 (Windows--Internal--ComTaskPool--QueueTask__lambda_3a3935ecbddde1d51cea1162795583a1___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___ @ 0x180199D64 (Windows--Internal--ComTaskPool--QueueTask__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___.c)
 *     _lambda_3a3935ecbddde1d51cea1162795583a1_::_lambda_3a3935ecbddde1d51cea1162795583a1_ @ 0x18019B22C (_lambda_3a3935ecbddde1d51cea1162795583a1_--_lambda_3a3935ecbddde1d51cea1162795583a1_.c)
 *     _lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_::_lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_ @ 0x18019B304 (_lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_--_lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_.c)
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnregisterViewCoordinatorEvents(
        UndockedSearchAppExperienceManager *this)
{
  char IsEnabled; // al
  char *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  int v12[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  if ( UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents(this) )
  {
    wil::AcquireSRWLockExclusive(&v16, (char *)this + 216);
    v14 = *((_QWORD *)this + 29);
    *((_QWORD *)this + 29) = 0LL;
    v15 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = 0LL;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl);
    v3 = (char *)this + 224;
    if ( IsEnabled )
    {
      v4 = lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_::_lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb_(v12, v3, &v14, &v15);
      v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___(
             v6,
             v5,
             *((unsigned int *)this + 38),
             v4);
      winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal((winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal *)v12);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9FE,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          v12[0]);
    }
    else
    {
      v8 = lambda_3a3935ecbddde1d51cea1162795583a1_::_lambda_3a3935ecbddde1d51cea1162795583a1_(v12, v3, &v14);
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_3a3935ecbddde1d51cea1162795583a1___(
              v10,
              v9,
              *((unsigned int *)this + 38),
              v8);
      winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal((winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal *)v12);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA0D,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v11,
          v12[0]);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
  }
}
