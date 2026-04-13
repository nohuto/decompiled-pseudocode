/*
 * XREFs of ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180068950
 * Callers:
 *     ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180048A00 (-ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPE.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180065A5C (--$As@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@.c)
 *     ??$AsWeak@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@YAJPEAUISubscriptionManager@Internal@TargetedContent@ContentManagement@@PEAVWeakRef@01@@Z @ 0x180065C10 (--$AsWeak@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@YAJP.c)
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISubscriptionManager@Internal@TargetedContent@ContentManagement@@@Z @ 0x180065FE4 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006769C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180079440 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 (__fastcall ****__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        bool *a3))(_QWORD, GUID *, __int64 *)
{
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 *v8; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 *v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v15; // [rsp+68h] [rbp+38h] BYREF

  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", (const unsigned __int16 *)&v13, a3);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v4,
      v11);
  if ( !(_BYTE)v13 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)0x80070005LL,
      v11);
  v14 = 0LL;
  Microsoft::WRL::WeakRef::As<ContentManagement::TargetedContent::Internal::ISubscriptionManager>(
    (__int64)retaddr,
    (__int64 *)&v14);
  v5 = v14;
  if ( !v14 )
  {
    AcquireSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
    v15 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton;
    Microsoft::WRL::WeakRef::As<ContentManagement::TargetedContent::Internal::ISubscriptionManager>(v6, (__int64 *)&v14);
    if ( !v14 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      v7 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl,ContentManagement::TargetedContent::Internal::ISubscriptionManager,>(&v14);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x100,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v7,
          v11);
      v13 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v13);
      v9 = Microsoft::WRL::AsWeak<ContentManagement::TargetedContent::Internal::ISubscriptionManager>(v14, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x101,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v9,
          v11);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    v5 = v14;
  }
  *a1 = 0LL;
  if ( a1 != &v14 )
  {
    *a1 = v5;
    v14 = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return a1;
}
