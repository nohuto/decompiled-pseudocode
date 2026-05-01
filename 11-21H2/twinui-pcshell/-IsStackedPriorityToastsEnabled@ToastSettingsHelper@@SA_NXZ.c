/*
 * XREFs of ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x180196E90
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800495FC (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x180196D38 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 *     ?IsWindowsLite@ToastSettingsHelper@@CA_NXZ @ 0x180196F2C (-IsWindowsLite@ToastSettingsHelper@@CA_NXZ.c)
 */

char ToastSettingsHelper::IsStackedPriorityToastsEnabled(void)
{
  char v0; // di
  bool v1; // bl
  int v3; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v4; // [rsp+38h] [rbp+10h] BYREF

  wil::srwlock::lock_exclusive((__int64)&ToastSettingsHelper::m_platformCheckLock, (__int64)&v4);
  v0 = 1;
  if ( !ToastSettingsHelper::m_platformCached )
  {
    if ( IsPPIEdition() || ToastSettingsHelper::IsWindowsLite() || (RtlGetDeviceFamilyInfoEnum(0LL, &v3, 0LL), v3 == 10) )
      ToastSettingsHelper::m_isDesktopPlatform = 0;
    ToastSettingsHelper::m_platformCached = 1;
  }
  v1 = ToastSettingsHelper::m_isDesktopPlatform;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
  if ( !v1 || ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride() )
    return 0;
  return v0;
}
