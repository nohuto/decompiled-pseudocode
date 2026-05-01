/*
 * XREFs of ?WorkAreaChanged@GamingOverlayExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1801AE330
 * Callers:
 *     ?SetGameBarDisplayMonitor@GamingOverlayExperienceManager@@UEAAJH@Z @ 0x1804072C0 (-SetGameBarDisplayMonitor@GamingOverlayExperienceManager@@UEAAJH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVGamingOverlayExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGamingOverlayExperienceManager@@$$T@Z @ 0x1801AE35C (--$InvokeAll@PEAVGamingOverlayExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAUIGa.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WorkAreaChanged(
        GamingOverlayExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<GamingOverlayExperienceManager *,std::nullptr_t>(
         (char *)this + 640,
         (char *)this - 120,
         a3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE53,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
