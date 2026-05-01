/*
 * XREFs of ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x18012BE58
 * Callers:
 *     ?GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerProxy@@@Z @ 0x1801547D0 (-GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellPositionerProxy,IShellPositionerProxy,IShellPositionerManager * &,IApplicationView * &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  signed __int32 v11; // edx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[3] = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,IShellPositionerProxy>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &ShellPositionerProxy::`vftable';
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    v9 = *a3;
    v10 = *a2;
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v14 = *((_QWORD *)v8 + 2);
      *((_QWORD *)v8 + 2) = v10;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    if ( *((_QWORD *)v8 + 3) != v9 )
    {
      v13 = v9;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
      v13 = *((_QWORD *)v8 + 3);
      *((_QWORD *)v8 + 3) = v9;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
    }
    *a1 = v8;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    do
      v11 = v8[3];
    while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange(v8 + 3, v11 - 1, v11) );
    if ( v11 == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL, 0x7FFFFFFFLL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
