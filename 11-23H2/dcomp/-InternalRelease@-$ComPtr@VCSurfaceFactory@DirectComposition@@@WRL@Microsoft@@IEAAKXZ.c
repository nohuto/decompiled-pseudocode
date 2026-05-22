/*
 * XREFs of ?InternalRelease@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x18003AB54
 * Callers:
 *     ?Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ @ 0x18008B080 (-Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ @ 0x18008B924 (--1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x18003AB80 (-Release@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<DirectComposition::CSurfaceFactory>::InternalRelease(
        DirectComposition::CSurfaceFactory **a1)
{
  DirectComposition::CSurfaceFactory *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return DirectComposition::CSurfaceFactory::Release(v1);
  }
  return result;
}
