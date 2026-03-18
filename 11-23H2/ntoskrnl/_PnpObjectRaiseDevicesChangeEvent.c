/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140882380
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14079B778 (_CmAddDeviceToContainer.c)
 *     _CmRemoveDeviceFromContainer @ 0x140A6463C (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x140A6585C (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x140A66BC0 (_CmRemovePanelDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x1408823C0 (_PnpContainerRaiseDevicesChangeEvent.c)
 */

void __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(__int64, __int64, __int64); // r11

  v3 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 496);
  if ( v3 )
  {
    if ( (_DWORD)a3 == 5 )
    {
      PnpContainerRaiseDevicesChangeEvent(a1, a2, v3);
    }
    else
    {
      if ( (_DWORD)a3 == 6 )
        a3 = 6LL;
      v3(a1, a2, a3);
    }
  }
}
