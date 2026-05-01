/*
 * XREFs of ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x180387DBC
 * Callers:
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180387E28 (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1803882A0 (-SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x18022CC8A (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility(
        const RECT *this,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  TaskbarHelpers *v4; // rax
  HMONITOR v5; // rdx
  HWND TrayWindowForMonitor; // rax

  v2 = a2;
  if ( LOBYTE(this[20].left) != a2 )
  {
    v4 = (TaskbarHelpers *)MonitorFromRect(this + 19, 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v4, v5);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, v2, 0LL);
    LOBYTE(this[20].left) = v2;
  }
  return 0LL;
}
