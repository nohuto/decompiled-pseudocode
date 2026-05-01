/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180605BB4
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VVirtualDesktopSwitcherHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180605CA4 (--$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x180607820 (--0VirtualDesktopSwitcherHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18060B598 (-RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitcherHost,VirtualDesktopSwitcherHost,XamlViewHostInitializeArgs const &>(
        VirtualDesktopSwitcherHost **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  VirtualDesktopSwitcherHost *v4; // rax
  int v5; // esi
  VirtualDesktopSwitcherHost *v6; // rdi
  VirtualDesktopSwitcherHost *v8; // [rsp+50h] [rbp+18h] BYREF
  VirtualDesktopSwitcherHost *v9; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (VirtualDesktopSwitcherHost *)operator new(0x200uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v9 = v4;
    v6 = VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost(v4);
    v8 = v6;
    v5 = VirtualDesktopSwitcherHost::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(VirtualDesktopSwitcherHost *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
