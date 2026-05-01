/*
 * XREFs of ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1800C6208
 * Callers:
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180041880 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800C66F0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18002152C (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

void __fastcall CImmersiveApp::_ClearForegroundBoostHintedProcess(void **this)
{
  char *v2; // rcx
  HWND ApplicationWindow; // rax
  DWORD ProcessId; // eax
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 800) )
  {
    if ( *((_BYTE *)this + 816) )
    {
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(this + 36));
      if ( !ApplicationWindow
        || !GetWindowThreadProcessId(ApplicationWindow, &dwProcessId)
        || (ProcessId = GetProcessId(this[101]), dwProcessId != ProcessId) )
      {
        CImmersiveApp::_SetProcessForegroundPriority((__int64)this, 1, this[101], 0, 0LL);
        *((_DWORD *)this + 201) = 1;
      }
    }
    v2 = (char *)this[101];
    this[101] = 0LL;
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v2);
    *((_BYTE *)this + 816) = 0;
  }
}
