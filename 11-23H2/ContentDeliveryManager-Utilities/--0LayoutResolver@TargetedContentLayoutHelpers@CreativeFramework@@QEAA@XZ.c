/*
 * XREFs of ??0LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800C7008
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800CB638 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x1800AE140 (-GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatic.c)
 */

// Hidden C++ exception states: #wind=7
CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::LayoutResolver(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **a2)
{
  StartDocked *v3; // rcx
  int StartScreenManagerExtensionStatics; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v3 = (CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *)((char *)this + 88);
  *(_QWORD *)v3 = 0LL;
  StartScreenManagerExtensionStatics = StartDocked::GetStartScreenManagerExtensionStatics(v3, a2);
  if ( StartScreenManagerExtensionStatics < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)StartScreenManagerExtensionStatics,
      v6);
  return this;
}
