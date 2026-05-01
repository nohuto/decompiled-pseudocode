/*
 * XREFs of ?PointerHover@CMultitaskingViewFrameElement@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2C90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BA600 (-PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CMultitaskingViewFrameElement::PointerHover(
        CMultitaskingViewFrameElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 71);
  if ( !v3 )
    return CMultitaskingViewElementBase::PointerHover(this, a2);
  v5 = *((_QWORD *)this + 71);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  (*(void (__fastcall **)(__int64, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v3 + 64LL))(v3, a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return 0;
}
