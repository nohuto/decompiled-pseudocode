/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___ @ 0x1801BE5FC
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___ @ 0x1801BE488 (MakeMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18002F254 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18017E520 (--0-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microso.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(a1);
  *(_QWORD *)a1 = off_1806451A8;
  *(_QWORD *)(a1 + 32) = off_1806451F8;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
  *(_OWORD *)(a1 + 52) = *(_OWORD *)(a2 + 4);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 24);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>(
    (__int64 *)(a1 + 80),
    (__int64 *)(a2 + 32));
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a1 + 88),
    (_QWORD *)(a2 + 40));
  return a1;
}
