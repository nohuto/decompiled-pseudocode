/*
 * XREFs of ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x1800F5BBC
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F54E0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::UninitializeCortanaExperienceManager(XamlLauncher *this)
{
  __int64 *v1; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 192);
  if ( *((_QWORD *)this + 34) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 232LL))(*v1);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F3,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v3,
        v12);
    *((_QWORD *)this + 34) = 0LL;
  }
  if ( *((_QWORD *)this + 35) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 248LL))(*v1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F9,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v4,
        v12);
    *((_QWORD *)this + 35) = 0LL;
  }
  if ( *((_QWORD *)this + 36) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 280LL))(*v1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5FF,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v5,
        v12);
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( *((_QWORD *)this + 37) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 296LL))(*v1);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x605,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v6,
        v12);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 184LL))(*v1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x60B,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v7,
        v12);
    *((_QWORD *)this + 38) = 0LL;
  }
  v8 = *((_QWORD *)this + 39);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 216LL))(*v1);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x611,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v9,
        v12);
    *((_QWORD *)this + 39) = 0LL;
  }
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v8);
  if ( *((_QWORD *)this + 40) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 424LL))(*v1);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x619,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v10,
        v12);
    *((_QWORD *)this + 40) = 0LL;
  }
  if ( *((_QWORD *)this + 41) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 480LL))(*v1);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x620,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v11,
        v12);
    *((_QWORD *)this + 41) = 0LL;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v1);
}
