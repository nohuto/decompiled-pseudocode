/*
 * XREFs of ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180231530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802312A4 (-CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Details@WRL@Microsoft@@YAJPEAPEAVCWindowIconLoader@@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Z @ 0x18049E224 (--$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIA.c)
 *     ?LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18049EFBC (-LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNoti.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CIconLoader::LoadIconW(
        CIconLoader *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned int a5,
        struct IApplicationViewIconLoaderNotifications *a6)
{
  __int64 (__fastcall *v7)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v8; // eax
  const struct _GUID *v9; // rcx
  int Instance; // eax
  int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 (__fastcall *v15)(struct IApplicationView *, GUID *, struct IWinRTApplicationView **); // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  int v21[2]; // [rsp+40h] [rbp-20h] BYREF
  struct IApplicationViewIconLoaderNotifications *v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IWinRTApplicationView *v25; // [rsp+88h] [rbp+28h] BYREF
  struct tagSIZE v26; // [rsp+90h] [rbp+30h] BYREF
  struct tagSIZE v27; // [rsp+98h] [rbp+38h] BYREF

  v27 = a4;
  v26 = a3;
  v19 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  v8 = v7((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v19);
  v25 = 0LL;
  if ( v8 < 0 )
  {
    v15 = (__int64 (__fastcall *)(struct IApplicationView *, GUID *, struct IWinRTApplicationView **))**a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    v16 = v15((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v25);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v16 = LoadWinRTIcon(v25, &v26, &v26, &v27, a5, a6);
      v11 = v16;
      if ( v16 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
        goto LABEL_16;
      }
      v17 = 136LL;
    }
    else
    {
      v17 = 128LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
  Instance = CIconLoadingFunctions_CreateInstance(v9, (void **)&v25);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    *(_QWORD *)v21 = v25;
    v23 = v19;
    v22 = a6;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CWindowIconLoader,CWindowIconLoader,IWin32ApplicationView * &,tagSIZE const &,IApplicationViewIconLoaderNotifications * &,IIconLoadingFunctions * &>(
            &v20,
            &v23,
            &v26,
            &v22,
            v21);
    v11 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 123LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
LABEL_16:
    v11 = 0;
    goto LABEL_17;
  }
  v12 = (unsigned int)Instance;
  v13 = 117LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
    (const char *)v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
LABEL_17:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  return (unsigned int)v11;
}
