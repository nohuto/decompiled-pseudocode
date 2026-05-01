/*
 * XREFs of ?RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C3010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804BA9A0 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall CMultitaskingViewFrameElement::RemoveAllDescendants(CMultitaskingViewFrameElement *this)
{
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  if ( *((_QWORD *)this + 71) )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 71);
}
