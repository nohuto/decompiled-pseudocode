/*
 * XREFs of __lambda_49390bb1d2cae92a58be327124002af0_::operator()_::_1_::catch$4 @ 0x18024FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E7E0 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x18069F078 (--C-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 */

__int64 __fastcall _lambda_49390bb1d2cae92a58be327124002af0_::operator()_::_1_::catch_4(wil *a1, __int64 a2)
{
  int v3; // ebx
  const char *v4; // r9

  v3 = wil::ResultFromCaughtException(a1);
  **(_DWORD **)(*(_QWORD *)(a2 + 56) + 24LL) = v3;
  *(_DWORD *)(*(_QWORD *)tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                           a2 + 64,
                           a2 + 56)
            + 1320LL) = v3;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a2 + 56);
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x9A,
    (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    v4);
  return 0LL;
}
