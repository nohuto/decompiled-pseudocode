/*
 * XREFs of ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x180020090
 * Callers:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FF78 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800F7E04 (-RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  char v3; // bl
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = this + 27;
  AcquireSRWLockShared(this + 27);
  v6 = v2;
  v5 = 0LL;
  v3 = 1;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(&this[28], &v5)
    || !this[29].Ptr
    && (!(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl)
     || !this[30].Ptr) )
  {
    v3 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
  return v3;
}
