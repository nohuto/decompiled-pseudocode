/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x18016183C
 * Callers:
 *     ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x1801617F0 (-RefreshCollection@CClassicWindowManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1801618D0 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180161A30 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 */

char __fastcall CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 i; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  char v8; // al
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v2; ++i )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    v6 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v8 = CClassicWindowManager::IsWindowPseudoTrayAfterChange(v7, v6, 0LL);
    CClassicWindowManager::_ChangeWindowType(a2, v6, v8 != 0 ? 32 : 64);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  }
  return 1;
}
