/*
 * XREFs of ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x18055EB50
 * Callers:
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::operator() @ 0x18055E664 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180744800 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTAppIconLoader::s_LoadIconSync(
        struct IWinRTApplicationView *a1,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4,
        unsigned int a5,
        HBITMAP *a6)
{
  __int64 (__fastcall *v10)(struct IWinRTApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, bool *); // rdi
  int ImmersiveIcon; // eax
  struct tagSIZE v17; // r9
  __int64 v18; // rdx
  unsigned int v20; // [rsp+28h] [rbp-38h]
  bool v21[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v25; // [rsp+80h] [rbp+20h] BYREF

  v25 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IWinRTApplicationView *, __int64 *))(*(_QWORD *)a1 + 24LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v25);
  v12 = v10(a1, AddressOf);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v14 = v25;
    v15 = *(__int64 (__fastcall **)(__int64, bool *))(*(_QWORD *)v25 + 32LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
    v22 = -1LL;
    v23 = -1LL;
    ImmersiveIcon = v15(v14, v21);
    v13 = ImmersiveIcon;
    if ( ImmersiveIcon >= 0 )
    {
      LOBYTE(v20) = 1;
      ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                        *(ImmersiveIcons **)a2,
                        *a3,
                        *a4,
                        v17,
                        a5,
                        v20,
                        v21[0],
                        (const unsigned __int16 *)a6,
                        *(HBITMAP **)v21);
      v13 = ImmersiveIcon;
      if ( ImmersiveIcon >= 0 )
      {
LABEL_8:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
        goto LABEL_9;
      }
      v18 = 85LL;
    }
    else
    {
      v18 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
    (const char *)(unsigned int)v12);
LABEL_9:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  return v13;
}
