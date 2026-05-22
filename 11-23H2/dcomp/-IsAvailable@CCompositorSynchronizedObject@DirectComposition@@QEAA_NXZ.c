/*
 * XREFs of ?IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ @ 0x180085CEC
 * Callers:
 *     ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8 (-CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z @ 0x18002E7D8 (-ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z.c)
 *     ?ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ @ 0x1800F25D0 (-ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CCompositorSynchronizedObject::IsAvailable(
        DirectComposition::CCompositorSynchronizedObject *this)
{
  bool result; // al

  if ( *((_DWORD *)this + 2) != 4
    || *(_DWORD *)((*(__int64 (__fastcall **)(DirectComposition::CCompositorSynchronizedObject *))(*(_QWORD *)this + 48LL))(this)
                 + 420) < *((_DWORD *)this + 3) )
  {
    return *((_DWORD *)this + 2) == 1;
  }
  *((_DWORD *)this + 3) = 0;
  (*(void (__fastcall **)(DirectComposition::CCompositorSynchronizedObject *, __int64))(*(_QWORD *)this + 40LL))(
    this,
    1LL);
  result = 1;
  *((_DWORD *)this + 2) = 1;
  return result;
}
