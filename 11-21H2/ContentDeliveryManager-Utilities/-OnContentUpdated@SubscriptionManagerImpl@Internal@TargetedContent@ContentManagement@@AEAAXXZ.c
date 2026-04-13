/*
 * XREFs of ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180070E64
 * Callers:
 *     _lambda_83dc6366a20d9229952004eea2bdcbca_::operator() @ 0x18006E8B8 (_lambda_83dc6366a20d9229952004eea2bdcbca_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18005F34C (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006E01C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F960 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x18007065C (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800723F0 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x180072910 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x180072A38 (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r14
  __int64 v3; // r13
  unsigned int v4; // r12d
  const unsigned __int16 *v5; // rdx
  struct _FILETIME *v6; // r9
  RTL_SRWLOCK *Ptr; // rax
  RTL_SRWLOCK *v8; // rsi
  CreativeFramework::SubscribedContentStore **v9; // rbx
  struct _FILETIME **v10; // r15
  CreativeFramework::SubscribedContentStore *v11; // rcx
  unsigned __int64 SubscriptionLastUpdated; // rax
  int v13; // eax
  const unsigned __int16 *v14; // r9
  char *v15; // rdi
  int SettingValue; // ebx
  void **v17; // rdi
  void **v18; // r15
  void *v19; // rbx
  LPVOID v20; // rcx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // [rsp+28h] [rbp-E0h]
  unsigned int *v24; // [rsp+30h] [rbp-D8h]
  bool v25; // [rsp+48h] [rbp-C0h]
  LPVOID v26; // [rsp+50h] [rbp-B8h] BYREF
  bool v27[8]; // [rsp+58h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v28; // [rsp+60h] [rbp-A8h]
  RTL_SRWLOCK *v29; // [rsp+68h] [rbp-A0h]
  LPVOID pv[5]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v31[4]; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+B8h] [rbp-50h]
  int *v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+D0h] [rbp-38h] BYREF
  char v36; // [rsp+D4h] [rbp-34h]
  int v37; // [rsp+F8h] [rbp-10h] BYREF
  const char *v38; // [rsp+100h] [rbp-8h]
  __int64 v39; // [rsp+108h] [rbp+0h]
  char v40; // [rsp+110h] [rbp+8h]
  __int64 v41; // [rsp+118h] [rbp+10h]
  char v42[152]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v43; // [rsp+1B8h] [rbp+B0h]
  __int128 v44; // [rsp+1C0h] [rbp+B8h]
  __int64 v45; // [rsp+1D0h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v31[1] = 0LL;
  v31[2] = v31;
  v31[3] = 0LL;
  v32 = 0;
  v33 = &v37;
  v34 = &v35;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v37 = 0;
  v38 = "SubscriptionManagerContentUpdatedActivity";
  v39 = 0LL;
  v41 = 1LL;
  v43 = 0LL;
  memset_0(v42, 0, sizeof(v42));
  v44 = 0LL;
  v45 = 0LL;
  v31[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::StartActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v31);
  v2 = this + 10;
  v29 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  v28 = this + 10;
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)this);
  if ( this != (RTL_SRWLOCK *)-80LL )
    ReleaseSRWLockExclusive(this + 10);
  v3 = 0LL;
  v4 = 0;
  AcquireSRWLockShared(this + 10);
  pv[3] = &this[10];
  Ptr = (RTL_SRWLOCK *)this[11].Ptr;
  v28 = Ptr;
  v8 = (RTL_SRWLOCK *)Ptr->Ptr;
  while ( v8 != Ptr )
  {
    v9 = (CreativeFramework::SubscribedContentStore **)&v8[2];
    v10 = (struct _FILETIME **)&v8[6];
    v3 += (__int64)(*((_QWORD *)v8[6].Ptr + 2) - *((_QWORD *)v8[6].Ptr + 1)) >> 3;
    if ( v8[5].Ptr < (PVOID)8 )
      v11 = (CreativeFramework::SubscribedContentStore *)&v8[2];
    else
      v11 = *v9;
    SubscriptionLastUpdated = (unsigned __int64)CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
                                                  v11,
                                                  v5);
    v6 = *v10;
    v5 = (const unsigned __int16 *)((*v10)[4].dwLowDateTime + ((unsigned __int64)(*v10)[4].dwHighDateTime << 32));
    if ( SubscriptionLastUpdated > (unsigned __int64)v5 )
    {
      v6[4] = (struct _FILETIME)SubscriptionLastUpdated;
      if ( v8[5].Ptr >= (PVOID)8 )
        v9 = (CreativeFramework::SubscribedContentStore **)*v9;
      v26 = 0LL;
      memset(pv, 0, 24);
      v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)pv,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
              v9);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          54LL,
          (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStoreShared.h",
          (const char *)(unsigned int)v13,
          v23);
      v15 = (char *)pv[0];
      v26 = pv[0];
      v25 = 0;
      SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                       (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000001LL,
                       (const WCHAR *)pv[0],
                       L"UpdateDrivenByExpiration",
                       v14,
                       v27,
                       v24);
      if ( SettingValue >= 0 )
      {
        v25 = *(_DWORD *)v27 != 0;
        SettingValue = 0;
      }
      else
      {
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x12B,
          (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
          (const char *)(unsigned int)SettingValue,
          (int)"RegKey: %ws %ws",
          v15);
      }
      if ( SettingValue < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          443LL,
          (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
          (const char *)(unsigned int)SettingValue,
          v23);
      if ( v15 )
        CoTaskMemFree(v15);
      v17 = (void **)(*v10)[1];
      v18 = (void **)(*v10)[2];
      while ( v17 != v18 )
      {
        v19 = *v17;
        pv[4] = v19;
        if ( v19 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 8LL))(v19);
        v20 = 0LL;
        v26 = 0LL;
        if ( v19 )
        {
          v21 = (*(__int64 (__fastcall **)(void *, GUID *, LPVOID *))(*(_QWORD *)v19 + 24LL))(
                  v19,
                  &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                  &v26);
          v20 = v26;
        }
        else
        {
          v21 = 0;
        }
        if ( v21 >= 0 )
        {
          LOBYTE(v5) = v25;
          v22 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *))(*(_QWORD *)v20 + 48LL))(v20, v5);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC6,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
              (const char *)(unsigned int)v22);
          ++v4;
          v20 = v26;
        }
        if ( v20 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 16LL))(v20);
        }
        if ( v19 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
        ++v17;
      }
      v2 = v29;
    }
    v8 = (RTL_SRWLOCK *)v8->Ptr;
    Ptr = v28;
  }
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v31,
    v3,
    v4,
    (unsigned int)v6,
    v23);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  v31[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v31);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
}
