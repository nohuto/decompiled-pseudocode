/*
 * XREFs of ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800CA3AC
 * Callers:
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800CC268 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C254 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800CA2CC (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 */

bool __fastcall ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUserCached(
        ContentDeliveryManager::AccountTokens *this)
{
  bool IsMicrosoftInternalUser; // bl
  ContentDeliveryManager::AccountTokens *v2; // rcx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockShared(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
  v4 = &ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock;
  if ( ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized )
  {
    IsMicrosoftInternalUser = ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
    AcquireSRWLockExclusive(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
    v4 = &ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock;
    if ( ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized )
    {
      IsMicrosoftInternalUser = ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount;
    }
    else
    {
      IsMicrosoftInternalUser = ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUser(v2);
      ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount = IsMicrosoftInternalUser;
      ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized = 1;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
  }
  return IsMicrosoftInternalUser;
}
