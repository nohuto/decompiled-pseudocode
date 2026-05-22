/*
 * XREFs of ?ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z @ 0x18003A954
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 *     ?Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAV12@@Z @ 0x18003A378 (-Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPH.c)
 *     ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z @ 0x1800EB7A0 (-Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CDevice::ValidFlipFormat(enum DXGI_FORMAT a1, char a2)
{
  if ( a1 == DXGI_FORMAT_R16G16B16A16_FLOAT || a1 == DXGI_FORMAT_R8G8B8A8_UNORM )
    return 1;
  if ( a1 == DXGI_FORMAT_A8_UNORM )
    return a2;
  return a1 == DXGI_FORMAT_B8G8R8A8_UNORM;
}
