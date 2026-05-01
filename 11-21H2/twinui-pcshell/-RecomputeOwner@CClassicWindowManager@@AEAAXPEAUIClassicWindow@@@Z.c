/*
 * XREFs of ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180105498
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1801053C0 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180105678 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x18022A856 (CClassicWindowManager--ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18003C658 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
