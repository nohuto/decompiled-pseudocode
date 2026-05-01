/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@0@@Z @ 0x18003DD98
 * Callers:
 *     ??1CSplashScreen@@UEAA@XZ @ 0x18003B03C (--1CSplashScreen@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K1@Z @ 0x18009CD7C (-_Change_array@-$vector@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskWin.c)
 *     _std::vector_Microsoft::WRL::ComPtr_ITaskWindow__std::allocator_Microsoft::WRL::ComPtr_ITaskWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ITaskWindow____::_1_::catch$0 @ 0x180219ED4 (_std--vector_Microsoft--WRL--ComPtr_ITaskWindow__std--allocator_Microsoft--WRL--ComPtr_ITaskWind.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::catch$0 @ 0x1803DD96D (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--I_ea_1803DD96D.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1803DDC0C (--$_Uninitialized_move@PEAV-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WR.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@_K1@Z @ 0x1803E72C4 (-_Change_array@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 *     ??1?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1803F8DA0 (--1-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V.c)
 *     _lambda_91aaa5e983db1b48f3ac5a4f87e91bed_::operator() @ 0x1803F8E14 (_lambda_91aaa5e983db1b48f3ac5a4f87e91bed_--operator().c)
 *     _std::vector_Microsoft::WRL::ComPtr_ISnappedWindow__std::allocator_Microsoft::WRL::ComPtr_ISnappedWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ISnappedWindow__const_&__::_1_::catch$0 @ 0x18041CCBA (_std--vector_Microsoft--WRL--ComPtr_ISnappedWindow__std--allocator_Microsoft--WRL--ComPtr_ISnapp.c)
 *     ??1XamlExplorerHostShellComponent@@UEAA@XZ @ 0x18041D060 (--1XamlExplorerHostShellComponent@@UEAA@XZ.c)
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18059B9C0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x18059D900 (-TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
