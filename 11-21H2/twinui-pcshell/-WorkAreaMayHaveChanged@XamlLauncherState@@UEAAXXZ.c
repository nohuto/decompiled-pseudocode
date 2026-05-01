/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncherState@@UEAAXXZ @ 0x1804526A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ @ 0x1801AD79C (-HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DismissSearchOnDisplayChange@@@details@wil@@QEAA_NXZ @ 0x1801ADE94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DismissSearchOnDisplayChange@@@de.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::WorkAreaMayHaveChanged(XamlLauncherState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DismissSearchOnDisplayChange>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DismissSearchOnDisplayChange>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 10) == 7 )
    {
      StartWindowTelemetry::HideCortanaDueToDisplayChange(v3, v2, v4);
      XamlLauncherState::HideCortana(this);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 80LL))(*((_QWORD *)this + 8));
  }
}
