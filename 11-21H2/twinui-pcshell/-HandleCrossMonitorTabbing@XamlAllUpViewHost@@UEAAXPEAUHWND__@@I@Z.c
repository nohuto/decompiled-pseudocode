/*
 * XREFs of ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1804347A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z @ 0x180433F74 (-GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z.c)
 *     ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z @ 0x18043410C (-GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z.c)
 *     ?GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180434300 (-GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlAllUpViewHost::HandleCrossMonitorTabbing(XamlAllUpViewHost *this, HWND a2, int a3)
{
  XamlAllUpViewHost *v5; // rdi
  struct MonitorFrame *v6; // rsi
  int v7; // r14d
  __int64 *AddressOf; // rax
  __int64 *v9; // rax
  struct MonitorFrame *v10; // rbx
  struct MonitorFrame *v11[2]; // [rsp+20h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-10h]
  struct IImmersiveMonitor *v13; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+88h] [rbp+48h] BYREF

  v5 = (XamlAllUpViewHost *)((char *)this - 120);
  v6 = (struct MonitorFrame *)(((unsigned __int64)this - 96) & -(__int64)(this != (XamlAllUpViewHost *)120));
  v11[1] = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v12 = v7;
  v13 = 0LL;
  v14 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v13);
  if ( (int)XamlAllUpViewHost::GetMonitorForHWND(v5, a2, (struct IImmersiveMonitor **)AddressOf) >= 0 )
  {
    v9 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v14);
    if ( (int)XamlAllUpViewHost::GetImmersiveMonitorForNavigate(v5, v13, a3, (struct IImmersiveMonitor **)v9) >= 0
      && v13 != v14
      && (int)XamlAllUpViewHost::GetFrameForMonitor(v5, v14, v11) >= 0 )
    {
      v11[0] = *((struct MonitorFrame **)v11[0] + 6);
      v10 = v11[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v11);
      (*(void (__fastcall **)(struct MonitorFrame *))(*(_QWORD *)v10 + 24LL))(v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v11);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  if ( v7 >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
}
