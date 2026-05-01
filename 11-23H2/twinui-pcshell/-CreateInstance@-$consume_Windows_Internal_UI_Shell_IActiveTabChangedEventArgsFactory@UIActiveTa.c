/*
 * XREFs of ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@0@Z @ 0x180636D5C
 * Callers:
 *     ??$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@?$factory_cache_entry@UActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIActiveTabChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@Z @ 0x1806359EC (--$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@-$factory_cache_entry@UActiveTabChangedE.c)
 *     ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x1806365EC (--0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::CreateInstance(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int128 *a4)
{
  __int64 *v4; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rax
  signed int v9; // eax
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = *a1;
  v6 = *a4;
  v13 = 0LL;
  v7 = *a3;
  v8 = *v4;
  v11 = v6;
  v12 = v7;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, __int64 *))(v8 + 48))(v4, &v12, &v11, &v13);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  *a2 = v13;
  return a2;
}
