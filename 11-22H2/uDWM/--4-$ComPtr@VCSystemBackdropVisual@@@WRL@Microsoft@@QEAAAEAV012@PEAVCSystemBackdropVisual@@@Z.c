/*
 * XREFs of ??4?$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z @ 0x1800079F4
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800074D8 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CSystemBackdropVisual>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
    v3 = *a1;
    *a1 = a2;
    v5 = v3;
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v5);
  }
  return a1;
}
