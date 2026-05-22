/*
 * XREFs of ?CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E924C
 * Callers:
 *     ?CopySurface@CBitmapInfo@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800EA820 (-CopySurface@CBitmapInfo@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 *     ?CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800EA850 (-CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E9778 (-CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 */

void __fastcall DirectComposition::CAtlasSurface::CopySurface(
        DirectComposition::CAtlasSurface *this,
        struct ID3D11Resource *a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagRECT *a5)
{
  int v5; // r10d
  int v6; // r11d
  struct tagRECT v7; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_DWORD *)this + 18) + (*((_DWORD *)this + 22) & 1);
  v6 = *((_DWORD *)this + 19) + ((*((_DWORD *)this + 22) >> 2) & 1);
  v7.left = v5 + a5->left;
  v7.top = v6 + a5->top;
  v7.right = v5 + a5->right;
  v7.bottom = v6 + a5->bottom;
  DirectComposition::CAtlasSurfacePool::CopySurface(
    *((DirectComposition::CAtlasSurfacePool **)this + 8),
    a2,
    a3,
    a4,
    &v7);
}
