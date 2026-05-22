/*
 * XREFs of ?ValidateAlphaMode@CDevice@DirectComposition@@SA_NPEAW4DXGI_ALPHA_MODE@@@Z @ 0x18003A97C
 * Callers:
 *     ?Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAV12@@Z @ 0x18003A378 (-Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPH.c)
 *     ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z @ 0x1800EB7A0 (-Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDevice::ValidateAlphaMode(enum DXGI_ALPHA_MODE *a1)
{
  if ( *a1 == DXGI_ALPHA_MODE_UNSPECIFIED )
  {
    *a1 = DXGI_ALPHA_MODE_IGNORE;
    return 1;
  }
  return *a1 == DXGI_ALPHA_MODE_PREMULTIPLIED || *a1 == DXGI_ALPHA_MODE_IGNORE;
}
