/*
 * XREFs of ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18003618C
 * Callers:
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180030920 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wi.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___ @ 0x180033480 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Internal--ComTaskPo.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___ @ 0x180033550 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Intern_ea_180033550.c)
 *     ?SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800414E0 (-SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsy.c)
 *     ?SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180042000 (-SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU.c)
 * Callees:
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003BBBC (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResul.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64))
{
  int v7; // edi
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx

  *a2 = 0LL;
  if ( !a4 )
    return (unsigned int)-2147024882;
  v8 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v8 = (_QWORD *)Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>(
                     v8,
                     a1,
                     L"Windows.Foundation.IAsyncAction",
                     0LL);
    v9 = v8;
    v10 = v8;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  if ( !v8 )
  {
    (**a4)(a4, 1LL);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(v9[1] + 16LL))(v9 + 1);
    return (unsigned int)-2147024882;
  }
  v10[32] = a4;
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(v10[1] + 104LL))(v10 + 1);
  if ( v7 >= 0 )
  {
    *a2 = (unsigned __int64)(v10 + 22) & -(__int64)(v10 != 0LL);
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(v10[1] + 16LL))(v10 + 1);
  return (unsigned int)v7;
}
