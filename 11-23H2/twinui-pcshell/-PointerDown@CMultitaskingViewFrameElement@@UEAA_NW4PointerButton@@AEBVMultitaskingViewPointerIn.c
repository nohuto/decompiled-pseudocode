/*
 * XREFs of ?PointerDown@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18057D560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180575090 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CMultitaskingViewFrameElement::PointerDown(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v6 = a1[32];
  if ( v6 )
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 72LL))(a1, v6, a3);
  }
  v7 = a1[71];
  if ( !v7 )
    return CMultitaskingViewElementBase::PointerDown((__int64)a1, a2, v3);
  v9 = a1[71];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2, v3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return 0;
}
