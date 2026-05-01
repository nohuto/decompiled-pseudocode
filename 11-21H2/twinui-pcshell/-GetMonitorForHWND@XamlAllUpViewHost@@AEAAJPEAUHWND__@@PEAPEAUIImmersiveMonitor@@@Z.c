/*
 * XREFs of ?GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180434300
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1804347A0 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetWindow@MonitorFrame@@QEAAPEAUHWND__@@XZ @ 0x18043473C (-GetWindow@MonitorFrame@@QEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall XamlAllUpViewHost::GetMonitorForHWND(
        XamlAllUpViewHost *this,
        HWND a2,
        struct IImmersiveMonitor **a3)
{
  MonitorFrame **v4; // rbx
  MonitorFrame **v6; // rdi
  struct IImmersiveMonitor *v8; // rbx
  struct IImmersiveMonitor *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (MonitorFrame **)*((_QWORD *)this + 41);
  v6 = (MonitorFrame **)*((_QWORD *)this + 42);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 2147647531LL;
    if ( MonitorFrame::GetWindow(*v4) == a2 )
      break;
    ++v4;
  }
  v8 = (struct IImmersiveMonitor *)*((_QWORD *)*v4 + 5);
  v9 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  *a3 = v8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
