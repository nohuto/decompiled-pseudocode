/*
 * XREFs of ?Attach@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x180065830
 * Callers:
 *     ?RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIUnknown@@@Z @ 0x180064968 (-RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x18015751C (-SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x18003AB80 (-Release@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CSurfaceFactory>::Attach(
        DirectComposition::CSurfaceFactory **a1,
        DirectComposition::CSurfaceFactory *a2)
{
  DirectComposition::CSurfaceFactory *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = DirectComposition::CSurfaceFactory::Release(v4);
  *a1 = a2;
  return result;
}
