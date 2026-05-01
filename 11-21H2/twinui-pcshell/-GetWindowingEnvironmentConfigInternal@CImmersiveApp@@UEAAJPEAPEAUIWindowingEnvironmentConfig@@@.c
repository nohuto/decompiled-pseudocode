/*
 * XREFs of ?GetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1803056A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EDC10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil.c)
 */

__int64 __fastcall CImmersiveApp::GetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig **a2,
        __int64 a3,
        __int64 a4)
{
  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 84);
  *a2 = (struct IWindowingEnvironmentConfig *)*((_QWORD *)this + 84);
  return 0LL;
}
