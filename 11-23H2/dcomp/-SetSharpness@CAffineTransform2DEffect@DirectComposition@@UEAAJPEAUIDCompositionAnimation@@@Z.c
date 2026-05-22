/*
 * XREFs of ?SetSharpness@CAffineTransform2DEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F60B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffect::SetSharpness(
        DirectComposition::CAffineTransform2DEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3u,
           a2);
}
