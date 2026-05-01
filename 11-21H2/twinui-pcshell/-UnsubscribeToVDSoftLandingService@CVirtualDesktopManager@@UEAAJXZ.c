/*
 * XREFs of ?UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ @ 0x18054C110
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D764 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::UnsubscribeToVDSoftLandingService(
        CVirtualDesktopManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( *((_DWORD *)this + 72) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 104LL))(*((_QWORD *)this + 12));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x323,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v5);
    *((_DWORD *)this + 72) = 0;
  }
  return 0LL;
}
