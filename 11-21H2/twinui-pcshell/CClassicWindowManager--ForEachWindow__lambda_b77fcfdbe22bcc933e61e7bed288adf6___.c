/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1802EFACC
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1801031C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802F0FA8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

char __fastcall CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___(
        __int64 a1,
        __int64 **a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *a2;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v5);
      v7 = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
      v8 = *v6;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7) == v8 )
        CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(*a2[1], v7, 0LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 1;
}
