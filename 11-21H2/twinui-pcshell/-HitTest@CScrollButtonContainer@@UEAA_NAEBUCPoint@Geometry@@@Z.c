/*
 * XREFs of ?HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804BE990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804BB50C (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 */

bool __fastcall CScrollButtonContainer::HitTest(CScrollButtonContainer *this, const struct Geometry::CPoint *a2)
{
  bool v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *CMultitaskingViewElementBase::_HitTestChildren(this, &v4, (__int64 *)a2) != 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  return v2;
}
