/*
 * XREFs of ?OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z @ 0x180039124
 * Callers:
 *     ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039008 (-Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::OfferResources(
        DirectComposition::CDxDevice *this,
        struct IDXGIResource *a2)
{
  DirectComposition::CDxDevice *v2; // rbx
  struct DirectComposition::CDxDevice *v4; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIResource *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v2 = this;
  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock((DirectComposition::MultithreadDeviceLock *)&v4, this);
  LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IDXGIResource **, __int64, int))(**((_QWORD **)v2 + 6)
                                                                                                  + 72LL))(
                  *((_QWORD *)v2 + 6),
                  1LL,
                  &v5,
                  1LL,
                  1);
  DirectComposition::MultithreadDeviceLock::Leave(v4);
  return (unsigned int)v2;
}
