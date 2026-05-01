/*
 * XREFs of ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x1804BBC18
 * Callers:
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802356A0 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?LostCapture@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804BA2D0 (-LostCapture@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BA840 (-PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInput.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BB728 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::_ResetCapture(CMultitaskingViewElementBase *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 16);
  *((_DWORD *)this + 25) = 0;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *((_DWORD *)this + 30) = 0;
  if ( *((_DWORD *)this + 24) == 1 )
    CMultitaskingViewElementBase::_PointerMove(this, (struct tagPOINT *)this + 18);
}
