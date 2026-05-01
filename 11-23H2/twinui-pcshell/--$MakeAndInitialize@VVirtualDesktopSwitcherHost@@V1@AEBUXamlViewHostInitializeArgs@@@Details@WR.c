/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180770300
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VVirtualDesktopSwitcherHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1807703F0 (--$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x1807717AC (--0VirtualDesktopSwitcherHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180775CF8 (-RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
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
  v4 = (VirtualDesktopSwitcherHost *)operator new(0x218uLL, (const struct std::nothrow_t *)&std::nothrow);
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
