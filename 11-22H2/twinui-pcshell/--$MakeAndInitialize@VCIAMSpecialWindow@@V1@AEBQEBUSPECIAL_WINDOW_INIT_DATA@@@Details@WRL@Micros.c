/*
 * XREFs of ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x180103394
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800F9DB4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x180137240 (-InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
        CIAMSpecialWindowBase **a1,
        const struct SPECIAL_WINDOW_INIT_DATA **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  CIAMSpecialWindowBase *v6; // rdi
  int v7; // esi
  CIAMSpecialWindowBase *v9; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = (CIAMSpecialWindowBase *)v4;
  if ( v4 )
  {
    *v4 = &CIAMSpecialWindowBase::`vftable';
    v4[2] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    v4[4] = 0LL;
    v4[5] = 0LL;
    *((_DWORD *)v4 + 13) = 1;
    *v4 = &CIAMSpecialWindow::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &CIAMSpecialWindow::`vftable';
    v9 = v6;
    v7 = CIAMSpecialWindowBase::InitializeSpecialWindow(v6, *a2);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CIAMSpecialWindowBase *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
