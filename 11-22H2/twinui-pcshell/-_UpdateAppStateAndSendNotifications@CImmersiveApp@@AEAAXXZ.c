/*
 * XREFs of ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002368C
 * Callers:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18001D30C (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18001DF70 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001E380 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180024724 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180068160 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x1803C0980 (-Ensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x1803C53A0 (-Unensure@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023778 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

void __fastcall CImmersiveApp::_UpdateAppStateAndSendNotifications(CImmersiveApp *this)
{
  int v2; // ecx
  __int64 v3; // r8
  bool IsApplicationWindowVisible; // al
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // ecx
  char v9; // dl
  unsigned int v10; // ecx
  int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v2 = *((_DWORD *)this + 144);
  v3 = *((_QWORD *)this + 58);
  if ( (v3 != 0) != (v2 & 1) )
  {
    if ( v3 )
    {
      v12 = 0LL;
      v11 = 1;
      *((_DWORD *)this + 144) = v2 | 1;
      CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *const)&v11, 1uLL);
    }
    else
    {
      *((_DWORD *)this + 144) = v2 & 0xFFFFFFFE;
    }
  }
  IsApplicationWindowVisible = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp *)((char *)this + 288));
  if ( IsApplicationWindowVisible != ((v5 & 4) != 0) )
  {
    v6 = v5 & 0xFFFFFFFB;
    v7 = v5 | 4;
    if ( !IsApplicationWindowVisible )
      v7 = v6;
    *((_DWORD *)this + 144) = v7;
    v12 = 0LL;
    v11 = !IsApplicationWindowVisible + 4;
    CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *const)&v11, 1uLL);
  }
  v8 = *((_DWORD *)this + 144);
  v9 = *((_BYTE *)this + 596);
  if ( v9 != ((v8 & 8) != 0) )
  {
    if ( v9 )
      v10 = v8 | 8;
    else
      v10 = v8 & 0xFFFFFFF7;
    *((_DWORD *)this + 144) = v10;
  }
}
