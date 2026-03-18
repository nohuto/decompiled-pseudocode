/*
 * XREFs of ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1800BCB34
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800BB300 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1800BCBA8 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     ?FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z @ 0x1800BCBC8 (-FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z.c)
 */

bool __fastcall CDeviceManager::HardwareProtectionRequired(CDeviceManager *this, struct _LUID a2)
{
  bool v3; // di
  CDeviceManager *v4; // rcx
  const struct CDeviceManager::DeviceInfo *DeviceInfo; // rax
  __int64 v6; // rcx

  v3 = 0;
  EnterCriticalSection(&stru_1803D75A8);
  DeviceInfo = CDeviceManager::FindDeviceInfo(v4, a2);
  if ( DeviceInfo && !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(*(_QWORD *)DeviceInfo + 16LL)) )
    v3 = *(_DWORD *)(v6 + 432) != 0;
  LeaveCriticalSection(&stru_1803D75A8);
  return v3;
}
