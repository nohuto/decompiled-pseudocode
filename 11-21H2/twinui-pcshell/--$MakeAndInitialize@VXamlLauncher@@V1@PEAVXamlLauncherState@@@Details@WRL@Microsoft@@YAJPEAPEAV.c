/*
 * XREFs of ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x180064D8C
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x180064BC4 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1800650F8 (--0XamlLauncher@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEAAAEAV012@PEAUIXamlLauncherState@@@Z @ 0x1800D4D70 (--4-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEAAAEAV012@PEAUIXamlLauncherState@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x18012FEDC (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
        XamlLauncher **a1,
        _QWORD *a2)
{
  XamlLauncher *v4; // rax
  XamlLauncher *v5; // rdi
  volatile int *v6; // rdx
  XamlLauncher *v9; // [rsp+40h] [rbp+8h] BYREF
  XamlLauncher *v10; // [rsp+50h] [rbp+18h]
  XamlLauncher *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (XamlLauncher *)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v10 = v4;
  if ( v4 )
  {
    v11 = v4;
    v5 = XamlLauncher::XamlLauncher(v4);
    v9 = v5;
    Microsoft::WRL::ComPtr<IXamlLauncherState>::operator=(
      (char *)v5 + 344,
      (*a2 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64));
    if ( v5 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlLauncher *)((char *)v5 + 116), v6);
    *a1 = v5;
    Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v9);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
