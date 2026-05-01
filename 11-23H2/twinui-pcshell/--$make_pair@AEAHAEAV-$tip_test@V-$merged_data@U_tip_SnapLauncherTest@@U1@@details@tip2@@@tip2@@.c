/*
 * XREFs of ??$make_pair@AEAHAEAV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@YA?AU?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@0@AEAHAEAV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180220D34
 * Callers:
 *     ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x180222160 (-StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180223214 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 */

__int64 __fastcall std::make_pair<int &,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>> &>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx

  *(_DWORD *)a1 = *a2;
  v4 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::ensure_data(a3);
  v5 = *v4;
  *(_QWORD *)(a1 + 8) = *v4;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 328));
  return a1;
}
