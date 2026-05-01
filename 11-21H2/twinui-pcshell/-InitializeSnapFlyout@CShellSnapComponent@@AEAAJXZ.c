/*
 * XREFs of ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180176DF4
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18005FA70 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800DB690 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x1800D73D4 (-InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShellSnapComponent::InitializeSnapFlyout(
        CShellSnapComponent *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 992) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x626,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    1u,
    3u,
    (__int64)a4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 52) + 24LL))(
         *((_QWORD *)this + 52),
         256LL,
         256LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62A,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    v7 = CShellSnapComponent::InitializeSnapFlyoutHost(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62C,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
}
