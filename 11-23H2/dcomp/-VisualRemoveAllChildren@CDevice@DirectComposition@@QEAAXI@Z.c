/*
 * XREFs of ?VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z @ 0x18000F564
 * Callers:
 *     ?RemoveAllVisuals@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJXZ @ 0x18000F3D0 (-RemoveAllVisuals@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJXZ.c)
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?RemoveAllVisuals@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJXZ @ 0x1800F3F60 (-RemoveAllVisuals@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAA.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CDevice::VisualRemoveAllChildren(DirectComposition::CDevice *this, int a2)
{
  _DWORD *v4; // rax
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    DirectComposition::CDevice::BeginKernelCommand(this, 0xCu, &v5, 0);
    v4 = v5;
    *(_DWORD *)v5 = 20;
    v4[1] = a2;
    v4[2] = 0;
    DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
  }
}
