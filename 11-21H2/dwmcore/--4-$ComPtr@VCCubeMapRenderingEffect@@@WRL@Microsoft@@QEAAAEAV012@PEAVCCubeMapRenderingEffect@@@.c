/*
 * XREFs of ??4?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@Z @ 0x18020E31C
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18020EECC (-InternalRelease@-$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::InternalRelease(&v6);
  }
  return a1;
}
