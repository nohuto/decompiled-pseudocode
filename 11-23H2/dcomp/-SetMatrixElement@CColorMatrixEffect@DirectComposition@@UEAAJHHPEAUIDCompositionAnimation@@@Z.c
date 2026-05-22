/*
 * XREFs of ?SetMatrixElement@CColorMatrixEffect@DirectComposition@@UEAAJHHPEAUIDCompositionAnimation@@@Z @ 0x1800F58B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffect::SetMatrixElement(
        DirectComposition::CColorMatrixEffect *this,
        unsigned int a2,
        unsigned int a3,
        struct IDCompositionAnimation *a4)
{
  if ( a2 > 4 || a3 > 3 )
    return 2147942487LL;
  else
    return DirectComposition::CResourceProxy::SetAnimationProperty(
             (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
             a3 + 4 * a2 + 3,
             a4);
}
