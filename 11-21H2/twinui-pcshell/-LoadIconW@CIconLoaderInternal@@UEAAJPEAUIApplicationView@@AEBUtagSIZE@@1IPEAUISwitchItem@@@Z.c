/*
 * XREFs of ?LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z @ 0x180498CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x180497F44 (CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CIconLoaderInternal::LoadIconW(
        CIconLoaderInternal *this,
        struct IApplicationView *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4,
        unsigned int a5,
        struct ISwitchItem *a6)
{
  __int64 v10; // rbx
  struct ISwitchItem *v11; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  struct ISwitchItem *v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF

  v18 = *((_QWORD *)this + 6);
  v10 = v18;
  winrt::com_ptr<IServiceProvider>::add_ref(&v18);
  v11 = a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a6);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  v19 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  v20[0] = v10;
  winrt::com_ptr<IServiceProvider>::add_ref(v20);
  v13 = CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff_(
          (__int64)&v19,
          v12,
          &v22);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 182LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)v14);
    goto LABEL_6;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, unsigned int, __int64))(**((_QWORD **)this + 5) + 24LL))(
          *((_QWORD *)this + 5),
          a2,
          *a3,
          *a4,
          a5,
          v22);
  v13 = v16;
  if ( v16 < 0 )
  {
    v14 = (unsigned int)v16;
    v15 = 184LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v18);
  return (unsigned int)v13;
}
