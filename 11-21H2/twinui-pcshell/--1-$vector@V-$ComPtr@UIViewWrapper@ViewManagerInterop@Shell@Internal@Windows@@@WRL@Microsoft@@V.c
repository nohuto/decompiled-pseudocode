/*
 * XREFs of ??1?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1803F8DA0
 * Callers:
 *     __lambda_91aaa5e983db1b48f3ac5a4f87e91bed_::operator()_::_1_::dtor$1 @ 0x1803F9096 (__lambda_91aaa5e983db1b48f3ac5a4f87e91bed_--operator()_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::dtor$1 @ 0x18059BFB9 (_CSnapAssistControllerBase--AdvanceGuidedSnapAssist_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromAppLayout_::_1_::dtor$2 @ 0x18059DAC6 (_CSnapAssistControllerBase--TriggerSnapAssistFromAppLayout_--_1_--dtor$2.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$2 @ 0x18059DF09 (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@0@@Z @ 0x18003DD98 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@Y.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
