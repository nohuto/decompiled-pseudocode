/*
 * XREFs of ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x1800AC678
 * Callers:
 *     ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x1800AC25C (--$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTilePrope.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x18009AE28 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x1800AE140 (-GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatic.c)
 */

// Hidden C++ exception states: #wind=11
CreativeFramework::Actions::SwapStartTileService *__fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTileService(
        CreativeFramework::Actions::SwapStartTileService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        void **a4)
{
  struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **v6; // rdx
  int StartScreenManagerExtensionStatics; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::SwapStartTileService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  std::wstring::wstring((__int64)this + 72, a4 + 20);
  std::wstring::wstring((__int64)this + 104, a4 + 12);
  std::wstring::wstring((__int64)this + 136, a4 + 16);
  std::wstring::wstring((__int64)this + 168, a4);
  std::wstring::wstring((__int64)this + 200, a4 + 8);
  std::wstring::wstring((__int64)this + 232, a4 + 4);
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  StartScreenManagerExtensionStatics = StartDocked::GetStartScreenManagerExtensionStatics(
                                         (CreativeFramework::Actions::SwapStartTileService *)((char *)this + 264),
                                         v6);
  if ( StartScreenManagerExtensionStatics < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)StartScreenManagerExtensionStatics);
  return this;
}
