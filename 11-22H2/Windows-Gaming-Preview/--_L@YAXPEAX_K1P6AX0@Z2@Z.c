/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18004BC44
 * Callers:
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___ @ 0x1800214F4 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_c7e28edb760347053732171cef665d5d___ @ 0x1800215E0 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Gami.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_88afd6bbfe2a61dd98f4359340091e1e___ @ 0x180021A2C (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_180021A2C.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18002A48C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180030920 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wi.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CBasicResult_unsigned_char_0__bool_Windows::Internal::ComTaskPoolHandler__lambda_75b78523e3da460933f50e5d76bfa16b___ @ 0x180031CB4 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CBasicResult_unsigned_char_0__bool_Wind.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___ @ 0x180033480 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Internal--ComTaskPo.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___ @ 0x180033550 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Intern_ea_180033550.c)
 *     ?SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800414E0 (-SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsy.c)
 *     ?SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180042000 (-SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18004B70C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_xfg_dispatch_icall_fptr();
    a1 += a2;
  }
}
