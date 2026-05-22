/*
 * XREFs of ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z @ 0x1800216A8
 * Callers:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z @ 0x18001FE78 (-CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z.c)
 * Callees:
 *     ?NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x18001F284 (-NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ @ 0x180021834 (-Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::Create(
        DirectComposition::CAtlasSurfacePool *a1,
        int a2,
        int a3,
        _QWORD *a4,
        int a5,
        _QWORD *a6)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int v13; // edi

  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 8u, 0x70uLL);
  v12 = v11;
  if ( v11 )
  {
    v11[8] = a1;
    *((_DWORD *)v11 + 2) = 0;
    *v11 = &DirectComposition::CAtlasSurface::`vftable'{for `CMILCOMBaseT<IUnknown>'};
    v11[2] = &DirectComposition::CAtlasSurface::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
    *((_DWORD *)v11 + 18) = a2;
    *((_DWORD *)v11 + 19) = a3;
    v11[10] = *a4;
    *((_DWORD *)v11 + 22) = a5;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 1));
    v12[13] = (*((_DWORD *)v12 + 21) + ((*((_DWORD *)v12 + 22) >> 2) & 1) + ((*((_DWORD *)v12 + 22) >> 3) & 1))
            * (*((_DWORD *)v12 + 20) + (v12[11] & 1) + ((*((_DWORD *)v12 + 22) >> 1) & 1));
    v13 = DirectComposition::CAtlasSurface::Initialize((DirectComposition::CAtlasSurface *)v12);
    if ( v13 < 0 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v12);
    else
      *a6 = v12;
  }
  else
  {
    v13 = -2147024882;
    DirectComposition::CAtlasSurfacePool::NotifyDisposeSurface(a1, 0LL);
  }
  return (unsigned int)v13;
}
