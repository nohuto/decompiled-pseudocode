/*
 * XREFs of ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1803A9554
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1801618D0 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004D854 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindowManager::RecomputeOwner(CClassicWindowManager *this, struct IClassicWindow *a2)
{
  __int64 v4; // rbx
  HWND v5; // rax
  __int64 *ClassicWindowOwner; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 160LL))(a2) )
  {
    v4 = *(_QWORD *)a2;
    v5 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(this, &v7, v5);
    (*(void (__fastcall **)(struct IClassicWindow *, __int64))(v4 + 104))(a2, *ClassicWindowOwner);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  }
}
