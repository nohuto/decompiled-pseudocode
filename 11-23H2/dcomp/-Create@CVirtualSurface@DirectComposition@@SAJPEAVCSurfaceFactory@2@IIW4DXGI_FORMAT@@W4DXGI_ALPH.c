/*
 * XREFs of ?Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAV12@@Z @ 0x18003A378
 * Callers:
 *     ?CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18003A890 (-CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 * Callees:
 *     ??0CVirtualSurface@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18003A154 (--0CVirtualSurface@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z @ 0x18003A954 (-ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z.c)
 *     ?ValidateAlphaMode@CDevice@DirectComposition@@SA_NPEAW4DXGI_ALPHA_MODE@@@Z @ 0x18003A97C (-ValidateAlphaMode@CDevice@DirectComposition@@SA_NPEAW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::Create(
        struct DirectComposition::CSurfaceFactory *a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        DXGI_ALPHA_MODE a5,
        struct DirectComposition::CVirtualSurface **a6)
{
  unsigned int v6; // ebx
  bool v11; // cc
  enum DXGI_ALPHA_MODE v12; // edi
  DirectComposition::CVirtualSurface *v13; // rax
  DirectComposition::CVirtualSurface *v14; // rax
  struct DirectComposition::CVirtualSurface *v15; // rdi

  v6 = 0;
  if ( *(int *)(*((_QWORD *)a1 + 3) + 368LL) < 1 )
  {
    if ( a2 - 1 <= 0xFFFFFF )
    {
      v11 = a3 - 1 <= 0xFFFFFF;
      goto LABEL_4;
    }
    return (unsigned int)-2147024809;
  }
  if ( a2 > 0x1000000 )
    return (unsigned int)-2147024809;
  v11 = a3 <= 0x1000000;
LABEL_4:
  if ( !v11 )
    return (unsigned int)-2147024809;
  if ( !DirectComposition::CDevice::ValidFlipFormat(a4, 1) )
    return (unsigned int)-2147024809;
  if ( !DirectComposition::CDevice::ValidateAlphaMode(&a5) )
    return (unsigned int)-2147024809;
  v12 = a5;
  if ( a5 == DXGI_ALPHA_MODE_IGNORE && a4 == DXGI_FORMAT_A8_UNORM )
    return (unsigned int)-2147024809;
  v13 = (DirectComposition::CVirtualSurface *)DefaultHeap::AllocClear(0x138uLL);
  if ( v13 && (v14 = DirectComposition::CVirtualSurface::CVirtualSurface(v13, a1, a2, a3, a4, v12), (v15 = v14) != 0LL) )
  {
    CMILRefCountImpl::AddReference((DirectComposition::CVirtualSurface *)((char *)v14 + 8));
    *a6 = v15;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
