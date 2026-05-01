/*
 * XREFs of Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f_____lambda_775801dc926fad4e7766c846adb2ec1f__&_void___&_ @ 0x1804B7930
 * Callers:
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___ @ 0x1804B76E0 (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPoli_ea_1804B76E0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1804AA378 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Mic.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f_____lambda_775801dc926fad4e7766c846adb2ec1f____void_____(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = *a3;
    v8 = *a2;
    v10 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>((__int64)v6);
    *v6 = off_18065D6E0;
    v6[2] = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6 + 2);
    v6[3] = v7;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v6;
  }
  return a1;
}
