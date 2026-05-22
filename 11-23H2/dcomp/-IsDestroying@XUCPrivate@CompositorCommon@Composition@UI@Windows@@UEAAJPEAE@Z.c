/*
 * XREFs of ?IsDestroying@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801285A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::XUCPrivate::IsDestroying(
        Windows::UI::Composition::CompositorCommon::XUCPrivate *this,
        bool *a2)
{
  *a2 = *((_DWORD *)this - 29) >= 1;
  return 0LL;
}
