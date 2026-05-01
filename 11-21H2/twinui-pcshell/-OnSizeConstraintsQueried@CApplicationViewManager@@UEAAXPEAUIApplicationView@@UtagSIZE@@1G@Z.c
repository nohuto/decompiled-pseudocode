/*
 * XREFs of ?OnSizeConstraintsQueried@CApplicationViewManager@@UEAAXPEAUIApplicationView@@UtagSIZE@@1G@Z @ 0x180166760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationViewManager::OnSizeConstraintsQueried(
        CApplicationViewManager *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned __int16 a5)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, GUID *, __int64 *); // rsi
  int v9; // eax
  char v10; // si
  int v11; // eax
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v12[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
  v8 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v9 = v8((struct IApplicationView *)a2, &GUID_dcf504eb_598b_4411_ac89_cf48aba70af1, &v14);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x314,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9);
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v12);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE, struct tagSIZE))(*(_QWORD *)v14 + 24LL))(
            v14,
            a5,
            a3,
            a4);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x316,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
}
