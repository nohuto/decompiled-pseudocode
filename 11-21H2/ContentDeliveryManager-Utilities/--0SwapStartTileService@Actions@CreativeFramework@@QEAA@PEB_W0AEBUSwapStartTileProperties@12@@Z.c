/*
 * XREFs of ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800BCFE0
 * Callers:
 *     ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x1800BCC34 (--$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTilePrope.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C544 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@A.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x1800BF590 (-GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatic.c)
 *     ?ShouldUseStartDocked@StartDocked@@YA_NXZ @ 0x1800C11D0 (-ShouldUseStartDocked@StartDocked@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
CreativeFramework::Actions::SwapStartTileService *__fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTileService(
        CreativeFramework::Actions::SwapStartTileService *this,
        wchar_t *a2,
        wchar_t *a3,
        void **a4)
{
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  __int64 *v10; // rdi
  unsigned int v11; // r8d
  StartDocked *v12; // rcx
  struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **v13; // rdx
  __int64 v14; // rcx
  int StartScreenManagerExtensionStatics; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v18; // [rsp+88h] [rbp+10h] BYREF
  char v19; // [rsp+8Ch] [rbp+14h]
  __int64 v20; // [rsp+90h] [rbp+18h]
  signed __int32 v21; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)this = &CreativeFramework::Actions::SwapStartTileService::`vftable';
  v7 = (unsigned __int64 *)((char *)this + 8);
  v7[3] = 7LL;
  v7[2] = 0LL;
  *(_WORD *)v7 = 0;
  if ( *a2 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
  }
  else
  {
    v8 = 0LL;
  }
  std::wstring::assign(v7, (char *)a2, v8);
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *a3 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a3[v9] );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)this + 5, (char *)a3, v9);
  *((_QWORD *)this + 12) = 7LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 36) = 0;
  std::wstring::assign((void **)this + 9, a4 + 20, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_WORD *)this + 52) = 0;
  std::wstring::assign((void **)this + 13, a4 + 12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 20) = 7LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_WORD *)this + 68) = 0;
  std::wstring::assign((void **)this + 17, a4 + 16, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 24) = 7LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_WORD *)this + 84) = 0;
  std::wstring::assign((void **)this + 21, a4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 28) = 7LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_WORD *)this + 100) = 0;
  std::wstring::assign((void **)this + 25, a4 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 32) = 7LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_WORD *)this + 116) = 0;
  std::wstring::assign((void **)this + 29, a4 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v10 = (__int64 *)((char *)this + 264);
  *((_QWORD *)this + 33) = 0LL;
  v11 = `wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v20 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
                       &v21);
    v11 = v20;
  }
  v18 = 0;
  v19 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF1B8,
    0x1C563ECu,
    (v11 >> 8) & 1,
    (v11 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    0);
  if ( StartDocked::ShouldUseStartDocked(v12) )
  {
    v14 = *v10;
    *v10 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    StartScreenManagerExtensionStatics = StartDocked::GetStartScreenManagerExtensionStatics(
                                           (CreativeFramework::Actions::SwapStartTileService *)((char *)this + 264),
                                           v13);
    if ( StartScreenManagerExtensionStatics < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)StartScreenManagerExtensionStatics);
  }
  return this;
}
