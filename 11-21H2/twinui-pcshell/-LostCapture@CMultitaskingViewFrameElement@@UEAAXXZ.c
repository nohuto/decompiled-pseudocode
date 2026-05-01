/*
 * XREFs of ?LostCapture@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C2B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewFrameElement::LostCapture(CMultitaskingViewFrameElement *this)
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 71);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 71);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v2);
  }
  else
  {
    CMultitaskingViewElementBase::LostCapture(this);
  }
}
