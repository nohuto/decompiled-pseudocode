/*
 * XREFs of ??0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z @ 0x18009942C
 * Callers:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800395A0 (-ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ?Enter@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BA40 (-Enter@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 */

DirectComposition::ClientUpdateLockAcquire *__fastcall DirectComposition::ClientUpdateLockAcquire::ClientUpdateLockAcquire(
        DirectComposition::ClientUpdateLockAcquire *this,
        const struct DirectComposition::CDxDevice *a2,
        int *a3)
{
  DirectComposition::CDevice *v5; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = a3;
  if ( *a3 >= 0 )
  {
    v5 = (DirectComposition::CDevice *)*((_QWORD *)a2 + 2);
    if ( *((_BYTE *)v5 + 833) )
    {
      **((_DWORD **)this + 1) = DirectComposition::CDevice::CheckClientDrawNotInProgress(v5);
      if ( **((int **)this + 1) >= 0 )
      {
        *(_QWORD *)this = a2;
        DirectComposition::MultithreadDeviceLock::Enter(a2);
      }
    }
  }
  return this;
}
