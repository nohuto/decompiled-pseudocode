/*
 * XREFs of ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x1802E9E74
 * Callers:
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x1802EA5BC (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18004240C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180106894 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        CApplicationManager *a1,
        HWND a2,
        HWND a3,
        char a4,
        unsigned int a5)
{
  __int64 *AddressOf; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  char v12; // al
  int v13; // r8d
  struct IImmersiveMonitor *v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)v15);
  CApplicationManager::_MonitorFromWindow(a1, a3, (struct IImmersiveMonitor **)AddressOf);
  v10 = (__int64 *)*((_QWORD *)a1 + 67);
  v11 = *v10;
  if ( a4 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64 *, HWND, _QWORD, _QWORD, struct IImmersiveMonitor *))(v11 + 24))(
            v10,
            a2,
            a5,
            0LL,
            v15[0]);
    v13 = 3;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64 *, HWND, struct IImmersiveMonitor *))(v11 + 32))(v10, a2, v15[0]);
    v13 = 2;
  }
  if ( v12 && v15[0] )
    CApplicationManager::_TryPresentDesktopExperience(a1, a2, v13, v15[0]);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v15);
}
