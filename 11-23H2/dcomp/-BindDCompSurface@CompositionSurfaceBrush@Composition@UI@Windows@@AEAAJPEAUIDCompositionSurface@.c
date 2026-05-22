/*
 * XREFs of ?BindDCompSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x180030C0C
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0 (-GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompo.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::BindDCompSurface(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        struct IDCompositionSurface *a2)
{
  __int64 v2; // rax
  int v3; // edi
  __int64 v5; // rbx
  enum DXGI_ALPHA_MODE v6; // edx
  DirectComposition::CAtlasSurfacePool *v7; // rcx
  int SurfaceProxyNoRef; // eax
  unsigned int v9; // esi
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct DirectComposition::CCompositionSurfaceProxy *v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v3 = 0;
  v14 = 0LL;
  v5 = *(_QWORD *)(v2 + 16);
  if ( !v5 )
    goto LABEL_4;
  v6 = *(_DWORD *)(v2 + 40);
  v7 = *(DirectComposition::CAtlasSurfacePool **)(v5 + 64);
  v16 = 0LL;
  SurfaceProxyNoRef = DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(v7, v6, &v16);
  v9 = SurfaceProxyNoRef;
  if ( SurfaceProxyNoRef >= 0 )
  {
    v10 = *(_DWORD *)(v5 + 72) + (*(_DWORD *)(v5 + 88) & 1);
    v11 = (*(_DWORD *)(v5 + 88) >> 2) & 1;
    DWORD2(v14) = v10 + *(_DWORD *)(v5 + 80);
    v12 = *(_DWORD *)(v5 + 76) + v11;
    v3 = *((_DWORD *)v16 + 3);
    HIDWORD(v14) = v12 + *(_DWORD *)(v5 + 84);
    *(_QWORD *)&v14 = __PAIR64__(v12, v10);
LABEL_4:
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v3);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1u,
      &v14,
      0x10uLL);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C2,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
    (const char *)(unsigned int)SurfaceProxyNoRef);
  return v9;
}
