/*
 * XREFs of ?UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801AE4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801188AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@deta.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFromEvents@JointResize@@AEAAJXZ @ 0x1801AE510 (-UnregisterFromEvents@JointResize@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::UnsubscribeFromServices(JointResize *this, struct IServiceProvider *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 208);
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v4 + 56LL))(v4, a2);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  }
  v5 = JointResize::UnregisterFromEvents((JointResize *)((char *)this - 24));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFD,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v5);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  return 0LL;
}
