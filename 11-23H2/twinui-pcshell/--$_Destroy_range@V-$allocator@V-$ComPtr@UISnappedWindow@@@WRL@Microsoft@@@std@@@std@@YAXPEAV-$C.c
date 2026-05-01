/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@0@@Z @ 0x1802D0C58
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1802D0C90 (--$_Uninitialized_move@PEAV-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@.c)
 *     ??1?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1802D0CDC (--1-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@_K1@Z @ 0x1802D1158 (-_Change_array@-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISnap.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Chaining::IChainLink__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Chaining::IChainLink_____::_Emplace_reallocate_Windows::Internal::Shell::Chaining::IChainLink___&__::_1_::catch$0 @ 0x1803BE996 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--Chaining--IChainLink__std--allocat.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1803C38E8 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     _std::vector_Microsoft::WRL::ComPtr_ISnappedWindow__std::allocator_Microsoft::WRL::ComPtr_ISnappedWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ISnappedWindow__const_&__::_1_::catch$1 @ 0x1806697BF (_std--vector_Microsoft--WRL--ComPtr_ISnappedWindow__std--allocator_Microsoft--WRL--ComPtr_ISnapp.c)
 *     ??1?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180669F3C (--1-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISnappedWindow@@@.c)
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18066A3A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x18066C830 (-TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppL.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x18066CEB0 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISnappedWindow>>>(
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
