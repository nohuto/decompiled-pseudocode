/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x180107AFC
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180002E60 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18001103C (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031990 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18005F484 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  int v0; // eax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_180146830;
  if ( !dword_180146830 )
  {
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
      v0 = 2 - (v2 != 0);
    else
      v0 = 2;
    dword_180146830 = v0;
  }
  return v0 == 1;
}
