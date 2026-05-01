/*
 * XREFs of ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800C6880
 * Callers:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180021344 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180039C18 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18006ABA4 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180070D38 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800C66F0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x1803043E0 (-Ensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x180308EA0 (-Unensure@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

void __fastcall CImmersiveApp::_UpdateAppStateAndSendNotifications(CImmersiveApp *this)
{
  int v1; // r8d
  __int64 v3; // rcx
  bool v4; // cl
  char v5; // cl
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)this + 144);
  v3 = *((_QWORD *)this + 58);
  if ( (v3 != 0) != (v1 & 1) )
  {
    if ( v3 )
    {
      v9 = 0LL;
      v8 = 1;
      *((_DWORD *)this + 144) = v1 | 1;
      CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *const)&v8, 1uLL);
      v1 = *((_DWORD *)this + 144);
    }
    else
    {
      v1 &= ~1u;
      *((_DWORD *)this + 144) = v1;
    }
  }
  v4 = *((_BYTE *)this + 488) && !*((_BYTE *)this + 489);
  if ( v4 != ((v1 & 4) != 0) )
  {
    if ( v4 )
      v6 = v1 | 4;
    else
      v6 = v1 & 0xFFFFFFFB;
    *((_DWORD *)this + 144) = v6;
    v9 = 0LL;
    v8 = !v4 + 4;
    CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *const)&v8, 1uLL);
    v1 = *((_DWORD *)this + 144);
  }
  v5 = *((_BYTE *)this + 596);
  if ( v5 != ((v1 & 8) != 0) )
  {
    if ( v5 )
      v7 = v1 | 8;
    else
      v7 = v1 & 0xFFFFFFF7;
    *((_DWORD *)this + 144) = v7;
  }
}
