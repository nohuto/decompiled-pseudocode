/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18004E2B4
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180001B80 (--$_Emplace_reallocate@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIInputTarge.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x180044054 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18004E2EC (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x18004E484 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IInputTarget__std::allocator_Microsoft::WRL::ComPtr_IInputTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IInputTarget____::_1_::catch$0 @ 0x180054510 (_std--vector_Microsoft--WRL--ComPtr_IInputTarget__std--allocator_Microsoft--WRL--ComPtr_IInputTa.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800E4E4C (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x180199970 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@.c)
 *     _std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch$0 @ 0x1801CDCF9 (_std--vector_Microsoft--WRL--ComPtr_ICursor__std--allocator_Microsoft--WRL--ComPtr_ICursor_____-.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UICursor@@@WRL@Microsoft@@_K1@Z @ 0x1801CF094 (-_Change_array@-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@WR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
