/*
 * XREFs of ??1?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ @ 0x1803EC410
 * Callers:
 *     _FullScreenPositioner::FullScreenPositioner_::_1_::dtor$5 @ 0x1802BCF07 (_FullScreenPositioner--FullScreenPositioner_--_1_--dtor$5.c)
 *     _TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration_::_1_::dtor$1 @ 0x1802C4A43 (_TouchEdgeGestureProcessor--UpdateTouchEdgeGestureRegistration_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::CreateAppThumbnail_::_1_::dtor$1 @ 0x18055686F (_CAppThumbnailWindow--CreateAppThumbnail_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::CreateAppThumbnail_::_1_::dtor$2 @ 0x18055687B (_CAppThumbnailWindow--CreateAppThumbnail_--_1_--dtor$2.c)
 *     _CAppThumbnailWindow::CreateAppThumbnail_::_1_::dtor$3 @ 0x180556887 (_CAppThumbnailWindow--CreateAppThumbnail_--_1_--dtor$3.c)
 *     _CAppThumbnailWindow::CreateThumbnailAppWithChilden_::_1_::dtor$1 @ 0x1805575F7 (_CAppThumbnailWindow--CreateThumbnailAppWithChilden_--_1_--dtor$1.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$0 @ 0x1805B6F7E (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$0.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$1 @ 0x1806406F1 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryPreviewWindows_::_1_::dtor$0 @ 0x18064A0CC (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--TryPreviewWin.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoteSystem_::_1_::dtor$2 @ 0x1807293CE (_winrt--Windows--Internal--Shell--implementation--RemoteSystem--RemoteSystem_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
