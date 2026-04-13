/*
 * XREFs of ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006969C
 * Callers:
 *     _lambda_83dc6366a20d9229952004eea2bdcbca_::operator() @ 0x180067830 (_lambda_83dc6366a20d9229952004eea2bdcbca_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C254 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180045458 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180065A90 (--$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEB.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180066D1C (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ??1SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x1800674FC (--1SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ?GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z @ 0x18006861C (-GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180068FD4 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z @ 0x1800690F8 (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006A350 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x18006A7F0 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x18006A894 (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(
        RTL_SRWLOCK *this)
{
  __int64 v2; // r15
  unsigned int v3; // r14d
  const unsigned __int16 *v4; // rdx
  struct _FILETIME *v5; // r9
  _QWORD *Ptr; // r13
  _QWORD *i; // rsi
  CreativeFramework::SubscribedContentStore::Details *v8; // rbx
  struct _FILETIME **v9; // rdi
  CreativeFramework::SubscribedContentStore *v10; // rcx
  unsigned __int64 SubscriptionLastUpdated; // rax
  unsigned __int16 **v12; // r8
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  int BoolSetting; // eax
  struct _FILETIME *v16; // rax
  __int64 *v17; // rdi
  __int64 *v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // [rsp+28h] [rbp-E0h]
  bool v23[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IInspectable *v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v26; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v27[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"SubscriptionManagerContentUpdatedActivity");
  v27[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::StartActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v27);
  AcquireSRWLockExclusive(this + 10);
  v24 = (struct IInspectable *)&this[10];
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)this);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v24);
  v2 = 0LL;
  v3 = 0;
  AcquireSRWLockShared(this + 10);
  v26 = this + 10;
  Ptr = this[11].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v8 = (CreativeFramework::SubscribedContentStore::Details *)(i + 2);
    v9 = (struct _FILETIME **)(i + 6);
    v2 += (__int64)(*(_QWORD *)(i[6] + 16LL) - *(_QWORD *)(i[6] + 8LL)) >> 3;
    if ( i[5] < 8uLL )
      v10 = (CreativeFramework::SubscribedContentStore *)(i + 2);
    else
      v10 = *(CreativeFramework::SubscribedContentStore **)v8;
    SubscriptionLastUpdated = (unsigned __int64)CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
                                                  v10,
                                                  v4);
    v5 = *v9;
    v4 = (const unsigned __int16 *)((*v9)[4].dwLowDateTime + ((unsigned __int64)(*v9)[4].dwHighDateTime << 32));
    if ( SubscriptionLastUpdated > (unsigned __int64)v4 )
    {
      v5[4] = (struct _FILETIME)SubscriptionLastUpdated;
      if ( i[5] >= 8uLL )
        v8 = *(CreativeFramework::SubscribedContentStore::Details **)v8;
      v24 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v24,
        0LL);
      CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(v8, (unsigned __int16 *)&v24, v12);
      BoolSetting = CreativeFramework::ContentDeliveryManagerSettings::GetBoolSetting((const WCHAR *)v24, v13, v14, v23);
      if ( BoolSetting < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1BB,
          (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
          (const char *)(unsigned int)BoolSetting,
          v22);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v24);
      v16 = *v9;
      v17 = (__int64 *)(*v9)[1];
      v18 = (__int64 *)v16[2];
      while ( v17 != v18 )
      {
        v19 = *v17;
        v25 = v19;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v24 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<ContentManagement::TargetedContent::Internal::ISubscriptionPriv>(
                    (Microsoft::WRL::WeakRef *)&v25,
                    &v24) >= 0 )
        {
          LOBYTE(v20) = v23[0];
          v21 = ((__int64 (__fastcall *)(struct IInspectable *, __int64))v24->lpVtbl[1].QueryInterface)(v24, v20);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC6,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
              (const char *)(unsigned int)v21);
          ++v3;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        ++v17;
      }
    }
  }
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v27,
    v2,
    v3,
    (unsigned int)v5,
    v22);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v26);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::~SubscriptionManagerContentUpdatedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v27);
}
