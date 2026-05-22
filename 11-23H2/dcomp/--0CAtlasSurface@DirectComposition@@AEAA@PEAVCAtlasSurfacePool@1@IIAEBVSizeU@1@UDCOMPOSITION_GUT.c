/*
 * XREFs of ??0CAtlasSurface@DirectComposition@@AEAA@PEAVCAtlasSurfacePool@1@IIAEBVSizeU@1@UDCOMPOSITION_GUTTERS@@@Z @ 0x18001F56C
 * Callers:
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::CAtlasSurface(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _QWORD *a5,
        int a6)
{
  CMILRefCountImpl *v7; // rcx

  v7 = (CMILRefCountImpl *)(a1 + 8);
  *(_QWORD *)a1 = &DirectComposition::CAtlasSurface::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(a1 + 16) = &DirectComposition::CAtlasSurface::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 72) = a3;
  *(_DWORD *)(a1 + 76) = a4;
  *(_QWORD *)(a1 + 80) = *a5;
  *(_DWORD *)(a1 + 88) = a6;
  CMILRefCountImpl::AddReference(v7);
  *(_QWORD *)(a1 + 104) = (*(_DWORD *)(a1 + 84) + ((*(_DWORD *)(a1 + 88) >> 2) & 1) + ((*(_DWORD *)(a1 + 88) >> 3) & 1))
                        * (*(_DWORD *)(a1 + 80) + (*(_DWORD *)(a1 + 88) & 1) + ((*(_DWORD *)(a1 + 88) >> 1) & 1u));
  return a1;
}
