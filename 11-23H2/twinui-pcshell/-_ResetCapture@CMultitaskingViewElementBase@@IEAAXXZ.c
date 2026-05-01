/*
 * XREFs of ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x180576758
 * Callers:
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802E3D60 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?LostCapture@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180574E20 (-LostCapture@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180575390 (-PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInput.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180576268 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
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
