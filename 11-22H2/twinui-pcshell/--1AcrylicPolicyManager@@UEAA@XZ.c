/*
 * XREFs of ??1AcrylicPolicyManager@@UEAA@XZ @ 0x180144770
 * Callers:
 *     ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1801BE6AC (--_GAcrylicPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AcrylicPolicyManager::~AcrylicPolicyManager(
        AcrylicPolicyManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  __int64 v5; // rsi
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v3 = (wil::details *)*((_QWORD *)this + 43);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 42);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, a2);
  v5 = *((_QWORD *)this + 41);
  if ( v5 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v5 + 152));
    SRWLock = (PSRWLOCK)(v5 + 152);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v5);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  SmartCookie::Unregister((AcrylicPolicyManager *)((char *)this + 200));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 200);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>(this);
}
