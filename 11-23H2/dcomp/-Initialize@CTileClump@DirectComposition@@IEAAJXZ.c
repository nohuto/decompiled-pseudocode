/*
 * XREFs of ?Initialize@CTileClump@DirectComposition@@IEAAJXZ @ 0x1800373F0
 * Callers:
 *     ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z @ 0x1800372A4 (-Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV-$TMilR.c)
 * Callees:
 *     ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z @ 0x18003745C (-Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALP.c)
 */

__int64 __fastcall DirectComposition::CTileClump::Initialize(struct DirectComposition::CSurfaceFactory **this)
{
  char *v1; // rbx
  __int64 result; // rax

  v1 = (char *)(this + 9);
  result = DirectComposition::CBitmapInfoFront::Create(
             this[5],
             *((_DWORD *)this + 16) - *((_DWORD *)this + 14),
             *((_DWORD *)this + 17) - *((_DWORD *)this + 15),
             (enum DXGI_FORMAT)*((_DWORD *)this[6] + 31),
             (enum DXGI_ALPHA_MODE)(*((_BYTE *)this[6] + 120) != 0
                                  ? DXGI_ALPHA_MODE_IGNORE
                                  : DXGI_ALPHA_MODE_PREMULTIPLIED),
             0LL,
             this[6],
             0,
             this + 9);
  if ( (int)result >= 0 )
    *(_BYTE *)(*(_QWORD *)v1 + 112LL) |= 9u;
  return result;
}
