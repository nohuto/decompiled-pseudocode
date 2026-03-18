/*
 * XREFs of ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800AEFC0
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800A22E4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800AEF24 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z @ 0x1800AF010 (-FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z.c)
 */

__int64 __fastcall CDeviceManager::GetAvailableDevice(CDeviceManager *a1, struct _LUID a2, _QWORD *a3)
{
  const struct CDeviceManager::DeviceInfo *DeviceInfo; // rax
  unsigned int v5; // r11d
  __int64 v6; // rcx

  *a3 = 0LL;
  DeviceInfo = CDeviceManager::FindDeviceInfo(a1, a2);
  if ( DeviceInfo )
  {
    v6 = *(_QWORD *)DeviceInfo;
    if ( *(_DWORD *)(*(_QWORD *)DeviceInfo + 1088LL) < (signed int)v5 )
    {
      return 2;
    }
    else
    {
      *a3 = v6;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 8));
      return 1;
    }
  }
  return v5;
}
