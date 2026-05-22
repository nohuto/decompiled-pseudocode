/*
 * XREFs of ?SetMatrixElement@CMatrixTransform3DProxy@DirectComposition@@UEAAJHHPEAUIDCompositionAnimation@@@Z @ 0x1800F5920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DProxy::SetMatrixElement(
        DirectComposition::CMatrixTransform3DProxy *this,
        unsigned int a2,
        unsigned int a3,
        struct IDCompositionAnimation *a4)
{
  if ( a2 > 3 || a3 > 3 )
    return 2147942487LL;
  else
    return DirectComposition::CResourceProxy::SetAnimationProperty(
             (DirectComposition::CMatrixTransform3DProxy *)((char *)this + 8),
             a3 + 4 * a2,
             a4);
}
