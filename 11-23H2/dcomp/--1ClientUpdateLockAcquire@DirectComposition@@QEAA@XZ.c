/*
 * XREFs of ??1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ @ 0x1800994F4
 * Callers:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800395A0 (-ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 */

void __fastcall DirectComposition::ClientUpdateLockAcquire::~ClientUpdateLockAcquire(int **this)
{
  int *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    if ( *this[1] < 0 )
      DirectComposition::MultithreadDeviceLock::Leave((const struct DirectComposition::CDxDevice *)v2);
    else
      DirectComposition::CDevice::SetClientDrawInProgress(*((DirectComposition::CDevice **)v2 + 2));
  }
}
