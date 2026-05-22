/*
 * XREFs of ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z @ 0x1800EB7A0
 * Callers:
 *     ?CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800FB750 (-CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 * Callees:
 *     ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z @ 0x18003745C (-Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALP.c)
 *     ?ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z @ 0x18003A954 (-ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z.c)
 *     ?ValidateAlphaMode@CDevice@DirectComposition@@SA_NPEAW4DXGI_ALPHA_MODE@@@Z @ 0x18003A97C (-ValidateAlphaMode@CDevice@DirectComposition@@SA_NPEAW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?Release@CCompositionSurface@DirectComposition@@UEAAKXZ @ 0x180078030 (-Release@CCompositionSurface@DirectComposition@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CCompositionSurface@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@@Z @ 0x1800EB0D4 (--0CCompositionSurface@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::Create(
        struct DirectComposition::CSurfaceFactory *a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        enum D2D1_EXTEND_MODE *a6,
        bool a7,
        struct DirectComposition::CCompositionSurface **a8,
        unsigned int *a9)
{
  DirectComposition::CCompositionSurface *v13; // rbx
  int v14; // r9d
  enum DXGI_ALPHA_MODE v15; // r14d
  enum D2D1_EXTEND_MODE *v16; // rdi
  DirectComposition::CCompositionSurface *v17; // rax
  DirectComposition::CCompositionSurface *v18; // rax
  char *v19; // rsi
  int v20; // edi

  v13 = 0LL;
  if ( !DirectComposition::CDevice::ValidFlipFormat(a4, 1)
    || !DirectComposition::CDevice::ValidateAlphaMode(&a5)
    || (v15 = a5, a5 == DXGI_ALPHA_MODE_IGNORE) && v14 == 65
    || (v16 = a6) != 0LL && *a6 && (unsigned int)(*a6 - 1) > 1
    || (a2 == 0) != (a3 == 0)
    || !a2 && *(int *)(*((_QWORD *)a1 + 3) + 368LL) < 2 )
  {
    v20 = -2147024809;
  }
  else
  {
    v17 = (DirectComposition::CCompositionSurface *)DefaultHeap::AllocClear(0x50uLL);
    if ( v17 && (v18 = DirectComposition::CCompositionSurface::CCompositionSurface(v17, a1), (v13 = v18) != 0LL) )
    {
      v19 = (char *)v18 + 40;
      v20 = DirectComposition::CBitmapInfoFront::Create(
              *((struct DirectComposition::CSurfaceFactory **)v18 + 4),
              a2,
              a3,
              a4,
              v15,
              v16,
              v18,
              a7,
              (struct DirectComposition::CBitmapInfoFront **)v18 + 5);
      if ( v20 < 0 )
      {
        DirectComposition::CCompositionSurface::Release(v13);
        v13 = 0LL;
      }
      else if ( a9 )
      {
        *a9 = *(_DWORD *)(*(_QWORD *)v19 + 44LL);
      }
    }
    else
    {
      v20 = -2147024882;
    }
  }
  *a8 = v13;
  return (unsigned int)v20;
}
