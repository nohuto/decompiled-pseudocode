/*
 * XREFs of ?UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ @ 0x18002E8C4
 * Callers:
 *     ?ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z @ 0x18002E7D8 (-ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z.c)
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 *     ?GetLastConfirmedBatchId@CDevice@DirectComposition@@UEAAJPEAK@Z @ 0x1800F1EE0 (-GetLastConfirmedBatchId@CDevice@DirectComposition@@UEAAJPEAK@Z.c)
 *     ?RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z @ 0x1800F3FD0 (-RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::UpdateLastConfirmedBatchId(DirectComposition::CDevice *this)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 20) + 56LL))(
             *((_QWORD *)this + 20),
             2LL,
             &v3);
  if ( (int)result >= 0 )
    *((_DWORD *)this + 105) = v3;
  return result;
}
