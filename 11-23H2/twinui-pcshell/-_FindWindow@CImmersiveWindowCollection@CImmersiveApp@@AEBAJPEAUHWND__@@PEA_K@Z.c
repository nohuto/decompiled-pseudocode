/*
 * XREFs of ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180021218
 * Callers:
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180020390 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x180021110 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x1803C31A4 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SendConsolidated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x1803C3D64 (-SendConsolidated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@W4WINDOW_CONSOLIDAT.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803C40E0 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C454C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1803C5484 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x18002126C (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        unsigned __int64 *a3)
{
  unsigned int TaskWindow; // ebx
  HWND v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  TaskWindow = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 22) )
  {
    if ( a2 )
    {
      v5 = a2;
      v6 = 0LL;
      v7 = 0;
      TaskWindow = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(
                     this,
                     (const struct CTaskWindowFinder *)&v5,
                     a3);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
    }
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return TaskWindow;
}
