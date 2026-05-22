/*
 * XREFs of ?VisualRemoveChild@CDevice@DirectComposition@@QEAAXII@Z @ 0x1800F6D60
 * Callers:
 *     ?CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@@Z @ 0x1800FE954 (-CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CDevice::VisualRemoveChild(DirectComposition::CDevice *this, int a2, int a3)
{
  _DWORD *v6; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    if ( a3 )
    {
      DirectComposition::CDevice::BeginKernelCommand(this, 0xCu, &v7, 0);
      v6 = v7;
      *(_DWORD *)v7 = 20;
      v6[1] = a2;
      v6[2] = a3;
      DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
    }
  }
}
