/*
 * XREFs of ?ReclaimResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@PEA_N1@Z @ 0x180013DF0
 * Callers:
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::ReclaimResources(
        DirectComposition::CDxDevice *this,
        struct IDXGIResource *a2,
        bool *a3,
        bool *a4)
{
  DirectComposition::CDxDevice *v4; // rbx
  bool v7; // zf
  int v9; // [rsp+50h] [rbp+8h] BYREF
  struct IDXGIResource *v10; // [rsp+58h] [rbp+10h] BYREF
  struct DirectComposition::CDxDevice *v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v4 = this;
  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
    (DirectComposition::MultithreadDeviceLock *)&v11,
    this);
  LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IDXGIResource **, int *))(**((_QWORD **)v4 + 6) + 80LL))(
                  *((_QWORD *)v4 + 6),
                  1LL,
                  &v10,
                  &v9);
  v7 = v9 == 2;
  *a4 = v9 != 0;
  *a3 = v7;
  DirectComposition::MultithreadDeviceLock::Leave(v11);
  return (unsigned int)v4;
}
