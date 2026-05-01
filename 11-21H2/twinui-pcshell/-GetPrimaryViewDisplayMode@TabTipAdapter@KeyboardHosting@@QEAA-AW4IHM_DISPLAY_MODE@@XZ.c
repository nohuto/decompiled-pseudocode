/*
 * XREFs of ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18047151C
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800BE5A0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18045D848 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     ?GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@XZ @ 0x180480EF8 (-GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AUCoreKeyboardPositionAndSi.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(__int64 a1)
{
  __int64 result; // rax
  _DWORD v2[10]; // [rsp+20h] [rbp-48h] BYREF
  char v3; // [rsp+48h] [rbp-20h]
  char v4; // [rsp+49h] [rbp-1Fh]

  KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewLastRequest(*(_QWORD *)(a1 + 112), v2);
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
