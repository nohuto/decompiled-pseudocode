/*
 * XREFs of ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z @ 0x1800905A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008FA34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::StartInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        __int64 a4,
        char a5)
{
  char v8; // bl
  __int64 v9; // r9

  v8 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  LOBYTE(v9) = v8;
  return (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, HSTRING, __int64, char, _QWORD, _QWORD))(*(_QWORD *)this + 128LL))(
           this,
           a2,
           a3,
           v9,
           a5,
           0LL,
           0LL);
}
