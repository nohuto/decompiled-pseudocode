/*
 * XREFs of ?GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnknown@@PEAUtagRECT@@@Z @ 0x1800F7FAC
 * Callers:
 *     ?RebuildInternal@CFilterEffect@DirectComposition@@UEAAJXZ @ 0x1800F81B0 (-RebuildInternal@CFilterEffect@DirectComposition@@UEAAJXZ.c)
 *     ?SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z @ 0x1800F829C (-SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z.c)
 * Callees:
 *     ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0 (-GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompo.c)
 */

__int64 __fastcall DirectComposition::CFilterEffect::GetSurfaceProperties(
        DirectComposition::CFilterEffect *this,
        struct DirectComposition::CBitmapInfoFront *a2,
        struct IUnknown **a3,
        struct tagRECT *a4)
{
  __int64 v4; // r11
  __int64 result; // rax
  struct IUnknown *v8; // rcx
  DirectComposition::CAtlasSurfacePool *v9; // rcx
  LONG v10; // r8d
  int v11; // r10d
  int v12; // r9d
  LONG v13; // r9d
  int v14; // r8d
  struct DirectComposition::CCompositionSurfaceProxy *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = this;
  v4 = *((_QWORD *)a2 + 2);
  result = 0LL;
  v15 = 0LL;
  v8 = 0LL;
  if ( v4 )
  {
    v9 = *(DirectComposition::CAtlasSurfacePool **)(v4 + 64);
    v10 = *(_DWORD *)(v4 + 72) + (*(_DWORD *)(v4 + 88) & 1);
    v11 = (*(_DWORD *)(v4 + 88) >> 2) & 1;
    a4->left = v10;
    v12 = *(_DWORD *)(v4 + 76);
    a4->right = *(_DWORD *)(v4 + 80) + v10;
    v13 = v11 + v12;
    v14 = *(_DWORD *)(v4 + 84);
    a4->top = v13;
    a4->bottom = v13 + v14;
    result = DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(v9, DXGI_ALPHA_MODE_PREMULTIPLIED, &v15);
    v8 = (struct IUnknown *)v15;
  }
  *a3 = v8;
  return result;
}
