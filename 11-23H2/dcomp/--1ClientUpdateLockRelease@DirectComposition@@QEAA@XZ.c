/*
 * XREFs of ??1ClientUpdateLockRelease@DirectComposition@@QEAA@XZ @ 0x18009952C
 * Callers:
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x18008A1A0 (-SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 */

void __fastcall DirectComposition::ClientUpdateLockRelease::~ClientUpdateLockRelease(
        const struct DirectComposition::CDxDevice **this)
{
  const struct DirectComposition::CDxDevice *v1; // rcx

  v1 = *this;
  if ( v1 )
    DirectComposition::MultithreadDeviceLock::Leave(v1);
}
