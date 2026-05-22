/*
 * XREFs of ?NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x18001F284
 * Callers:
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 *     ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ @ 0x18001FAA0 (-Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z @ 0x1800216A8 (-Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCAtlasSurface@DirectComposition@@$0A@@@QEAAHAEBQEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001F2F8 (-Remove@-$DynArray@PEAVCAtlasSurface@DirectComposition@@$0A@@@QEAAHAEBQEAVCAtlasSurface@DirectCo.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::NotifyDisposeSurface(
        DirectComposition::CAtlasSurfacePool *this,
        struct DirectComposition::CAtlasSurface *a2)
{
  char v3; // al
  struct DirectComposition::CAtlasSurface *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2 )
  {
    DynArray<DirectComposition::CAtlasSurface *,0>::Remove((char *)this + 112, &v4);
    if ( !*((_DWORD *)this + 34) && (*((_BYTE *)this + 172) & 1) == 0 )
      *((_DWORD *)this + 42) = GetTickCount();
  }
  v3 = *((_BYTE *)this + 172);
  if ( (v3 & 1) != 0 && !*((_DWORD *)this + 34) && (v3 & 0x40) == 0 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(this);
}
