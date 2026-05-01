/*
 * XREFs of ?TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFC6C
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180038808 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@QEAA_NXZ @ 0x18011400C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_44667252@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x18046AD4C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 */

void __fastcall UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProviderWhenSearchHidden(
        UndockedSearchAppExperienceManager *this)
{
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 32LL))(
          *((_QWORD *)this + 12),
          *((_QWORD *)this + 8)) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_44667252>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_44667252>::GetImpl'::`2'::impl) )
      UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider(this, 2LL);
  }
}
