/*
 * XREFs of ?DragEnding@CMultitaskingViewFrameElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x18057CD80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x180573F30 (-DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrameElement::DragEnding(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::DragEnding(a1, a2, a3);
  result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 568));
  if ( a3 != 2 )
  {
    v6 = *(_QWORD *)(a1 + 264);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v8);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7, 3LL);
      return Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v8);
    }
  }
  return result;
}
