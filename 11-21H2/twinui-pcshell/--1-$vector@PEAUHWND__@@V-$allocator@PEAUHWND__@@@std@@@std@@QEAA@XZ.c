/*
 * XREFs of ??1?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ @ 0x18031E360
 * Callers:
 *     _FullScreenPositioner::FullScreenPositioner_::_1_::dtor$5 @ 0x18021CCC2 (_FullScreenPositioner--FullScreenPositioner_--_1_--dtor$5.c)
 *     _CAppThumbnailWindow::CreateAppThumbnail_::_1_::dtor$1 @ 0x18049C5BB (_CAppThumbnailWindow--CreateAppThumbnail_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::CreateAppThumbnail_::_1_::dtor$2 @ 0x18049C5C7 (_CAppThumbnailWindow--CreateAppThumbnail_--_1_--dtor$2.c)
 *     _CAppThumbnailWindow::CreateAppThumbnail_::_1_::dtor$3 @ 0x18049C5D3 (_CAppThumbnailWindow--CreateAppThumbnail_--_1_--dtor$3.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$0 @ 0x1804FE7E2 (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$0.c)
 *     _TwinUI::Lighting::AssistantLightFactory::GetAssistantLight_::_1_::dtor$2 @ 0x180560AB8 (_TwinUI--Lighting--AssistantLightFactory--GetAssistantLight_--_1_--dtor$2.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$1 @ 0x180581679 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryPreviewWindows_::_1_::dtor$0 @ 0x18058BA7C (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--TryPreviewWin.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<HWND__ *>::~vector<HWND__ *>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
