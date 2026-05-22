/*
 * XREFs of ?VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z @ 0x180061EB4
 * Callers:
 *     ?CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@Z @ 0x18000F888 (-CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CDevice::VisualAddChild(
        DirectComposition::CDevice *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v9; // rdx
  _DWORD *v10; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( a3 )
    {
      DirectComposition::CDevice::BeginKernelCommand(this, 0x14u, (void **)&v10, 0);
      v9 = v10;
      *v10 = 17;
      v9[1] = a2;
      v9[2] = a3;
      v9[3] = a4;
      v9[4] = a5;
      DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
    }
  }
}
