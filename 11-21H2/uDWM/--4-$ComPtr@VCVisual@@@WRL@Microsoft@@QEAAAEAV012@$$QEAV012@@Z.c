/*
 * XREFs of ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CVisual>::operator=(CBaseObject **a1, CBaseObject **a2)
{
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rax
  CBaseObject *v5; // rax
  CBaseObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v7);
  return a1;
}
