/*
 * XREFs of ?_Calculate_growth@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEBA_K_K@Z @ 0x18033B9C0
 * Callers:
 *     ??$_Emplace_reallocate@AEBN@?$vector@NV?$allocator@N@std@@@std@@QEAAPEANQEANAEBN@Z @ 0x180327D14 (--$_Emplace_reallocate@AEBN@-$vector@NV-$allocator@N@std@@@std@@QEAAPEANQEANAEBN@Z.c)
 *     ??$_Emplace_reallocate@N@?$vector@NV?$allocator@N@std@@@std@@QEAAPEANQEAN$$QEAN@Z @ 0x180327E34 (--$_Emplace_reallocate@N@-$vector@NV-$allocator@N@std@@@std@@QEAAPEANQEAN$$QEAN@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUHMONITOR__@@@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@QEAAPEAPEAUHMONITOR__@@QEAPEAU2@AEBQEAU2@@Z @ 0x180489A34 (--$_Emplace_reallocate@AEBQEAUHMONITOR__@@@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@.c)
 *     ??$_Emplace_reallocate@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAPEAPEAUHWND__@@QEAPEAU2@AEAPEAU2@@Z @ 0x18049B834 (--$_Emplace_reallocate@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804ABCC0 (-_Clear_and_reserve_geometric@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@.c)
 *     ?OnMonitorDetached@CVirtualDesktopManager@@UEAAJXZ @ 0x180546D30 (-OnMonitorDetached@CVirtualDesktopManager@@UEAAJXZ.c)
 *     ??$_Emplace_reallocate@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAPEAPEAUHWND__@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x180588404 (--$_Emplace_reallocate@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QE.c)
 *     ??$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805D3A68 (--$_Emplace_reallocate@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMeet.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805D5DCC (-_Clear_and_reserve_geometric@-$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-.c)
 *     ??$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805D7298 (--$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt.c)
 *     ??$_Emplace_reallocate@UMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1805D73C0 (--$_Emplace_reallocate@UMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805DAD0C (-_Clear_and_reserve_geometric@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<HMONITOR__ *>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
