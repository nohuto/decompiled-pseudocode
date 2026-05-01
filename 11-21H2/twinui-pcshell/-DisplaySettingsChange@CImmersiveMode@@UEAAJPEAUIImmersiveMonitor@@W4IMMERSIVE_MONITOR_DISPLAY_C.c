/*
 * XREFs of ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180043690
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800B6134 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ @ 0x1800B8128 (-MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18022A634 (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CImmersiveMode::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  CImmersiveMode *v6; // rcx
  __int64 v7; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x20) != 0 )
  {
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v8) >= 0 )
    {
      v6 = (CImmersiveMode *)(a1 - 136);
      if ( v8 )
        CImmersiveMode::_RegisterDesktopVisibilitySource(v6, a2);
      else
        CImmersiveMode::_UnregisterDesktopVisibilitySource(v6, a2);
    }
  }
  else if ( (a3 & 1) != 0 )
  {
    v7 = 0LL;
    if ( *(_QWORD *)(a1 + 304) )
    {
      while ( !(unsigned int)SHIsSameObject(
                               **(struct IUnknown ***)(*(_QWORD *)(a1 + 296) + 8 * v7),
                               (struct IUnknown *)a2) )
      {
        if ( (unsigned __int64)++v7 >= *(_QWORD *)(a1 + 304) )
          return 0LL;
      }
      CImmersiveMode::CDesktopVisibilityChangeSource::MonitorRectChanged(*(CImmersiveMode::CDesktopVisibilityChangeSource **)(*(_QWORD *)(a1 + 296) + 8 * v7));
    }
  }
  return 0LL;
}
