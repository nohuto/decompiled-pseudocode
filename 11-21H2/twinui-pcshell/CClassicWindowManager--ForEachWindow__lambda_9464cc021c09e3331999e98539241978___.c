/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1801053C0
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1801031C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180105678 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x1802F0590 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180105498 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 *v6; // r12
  struct IClassicWindow *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct IClassicWindow *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(__int64 **)a2;
    do
    {
      v7 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * v5);
      v11 = v7;
      if ( v7 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = *v6;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7) == v8 )
      {
        v9 = *(_QWORD *)(a2 + 8);
        if ( !**(_QWORD **)v9 || v7 != **(struct IClassicWindow ***)v9 )
          CClassicWindowManager::RecomputeOwner(*(CClassicWindowManager **)(v9 + 8), v7);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 1;
}
