/*
 * XREFs of ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18010C67C
 * Callers:
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x18004EA84 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$1 @ 0x180083499 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$1.c)
 *     _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x1800837E2 (_DWMCursorBroker--GetCursors_--_1_--dtor$0.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x18010C76C (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     _CursorNotificationProcessor::ProcessAppClipChangedNotification_::_1_::dtor$1 @ 0x18010C8CE (_CursorNotificationProcessor--ProcessAppClipChangedNotification_--_1_--dtor$1.c)
 *     _DWMInputRouter::GetInitialTargetFromHitTestResult_::_1_::dtor$3 @ 0x1801C649E (_DWMInputRouter--GetInitialTargetFromHitTestResult_--_1_--dtor$3.c)
 *     _DWMInputRouter::GetTargetListFromHitTestResult_::_1_::dtor$0 @ 0x1801C6946 (_DWMInputRouter--GetTargetListFromHitTestResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18010C644 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
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
