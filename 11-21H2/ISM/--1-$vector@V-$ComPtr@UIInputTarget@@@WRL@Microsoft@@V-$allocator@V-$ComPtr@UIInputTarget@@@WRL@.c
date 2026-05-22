/*
 * XREFs of ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18004E2EC
 * Callers:
 *     _DWMInputRouter::GetInitialTargetFromHitTestResult_::_1_::dtor$3 @ 0x18004E6B2 (_DWMInputRouter--GetInitialTargetFromHitTestResult_--_1_--dtor$3.c)
 *     _DWMInputRouter::GetTargetListFromHitTestResult_::_1_::dtor$0 @ 0x18004E7D2 (_DWMInputRouter--GetTargetListFromHitTestResult_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$1 @ 0x180058674 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$1.c)
 *     _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x180058888 (_DWMCursorBroker--GetCursors_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessAppClipChangedNotification_::_1_::dtor$1 @ 0x1800E4F96 (_CursorNotificationProcessor--ProcessAppClipChangedNotification_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18004E2B4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
