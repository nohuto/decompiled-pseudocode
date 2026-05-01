/*
 * XREFs of ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x1805239A8
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180168B90 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(__int64 a1)
{
  __int64 result; // rax
  _DWORD v2[10]; // [rsp+20h] [rbp-58h] BYREF
  char v3; // [rsp+48h] [rbp-30h]
  char v4; // [rsp+49h] [rbp-2Fh]

  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 128) + 288LL))(*(_QWORD *)(a1 + 128), v2);
  result = 2LL;
  if ( v2[0] != 2 )
  {
    if ( v2[0] == 1 )
    {
      if ( !v3 && !v4 )
        return 3LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
