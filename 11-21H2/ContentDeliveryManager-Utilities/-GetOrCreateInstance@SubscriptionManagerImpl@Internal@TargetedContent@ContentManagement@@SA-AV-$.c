/*
 * XREFs of ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x18006FDD0
 * Callers:
 *     ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18004D360 (-ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPE.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x18006CBA0 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ?AsWeak@?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEBAJPEAVWeakRef@23@@Z @ 0x18006F7C0 (-AsWeak@-$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsof.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 (__fastcall ****__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        bool *a3))(_QWORD, GUID *, __int64 *)
{
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  RTL_SRWLOCK *v14; // [rsp+38h] [rbp+18h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF

  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", (const unsigned __int16 *)&v14, a3);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      243LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v4,
      savedregs);
  if ( !(_BYTE)v14 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      244LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)0x80070005LL,
      savedregs);
  v5 = 0LL;
  v15 = 0LL;
  if ( ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak )
  {
    (*(void (__fastcall **)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                                                                 + 24LL))(
      ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
      &GUID_d5343860_de91_4cae_b38a_84536a72847c,
      &v15);
    v5 = v15;
  }
  if ( !v5 )
  {
    AcquireSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
    v14 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton;
    v6 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
    }
    v7 = 0LL;
    v15 = 0LL;
    if ( ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak )
    {
      (*(void (__fastcall **)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak + 24LL))(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
        &GUID_d5343860_de91_4cae_b38a_84536a72847c,
        &v15);
      v7 = v15;
    }
    if ( !v7 )
    {
      v8 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl,ContentManagement::TargetedContent::Internal::ISubscriptionManager,>((__int64 *)&v15);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          256LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v8,
          savedregs);
      v9 = ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak;
      ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::ISubscriptionManager>::AsWeak(
              &v15,
              (__int64 *)&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          257LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v10,
          savedregs);
    }
    ReleaseSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
    v5 = v15;
  }
  *a1 = 0LL;
  if ( a1 != &v15 )
  {
    *a1 = v5;
    v5 = 0LL;
  }
  if ( v5 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
  }
  return a1;
}
