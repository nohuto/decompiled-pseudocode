/*
 * XREFs of ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180037568
 * Callers:
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180037460 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038698 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CVisual>::operator=(CBaseObject **a1, volatile signed __int32 *a2)
{
  CBaseObject *v2; // rax
  CBaseObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != (CBaseObject *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v2 = *a1;
    }
    *a1 = (CBaseObject *)a2;
    v5 = v2;
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v5);
  }
  return a1;
}
