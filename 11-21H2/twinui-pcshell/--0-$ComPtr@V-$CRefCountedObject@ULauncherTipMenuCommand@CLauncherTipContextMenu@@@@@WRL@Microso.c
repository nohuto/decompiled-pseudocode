/*
 * XREFs of ??0?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18017E520
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18005CE10 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18005CF18 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     _lambda_93476770441aba3d23e91e227d0f076e_::_lambda_93476770441aba3d23e91e227d0f076e_ @ 0x18019B260 (_lambda_93476770441aba3d23e91e227d0f076e_--_lambda_93476770441aba3d23e91e227d0f076e_.c)
 *     _lambda_b17d91d583f17bab605aaa56f30e01cd_::_lambda_b17d91d583f17bab605aaa56f30e01cd_ @ 0x1801A6FA4 (_lambda_b17d91d583f17bab605aaa56f30e01cd_--_lambda_b17d91d583f17bab605aaa56f30e01cd_.c)
 *     CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___ @ 0x1801BE5FC (CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___--CMultitaskingViewTask.c)
 *     ?_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geometry@@W4SNAP_ASSIST_VIEW_FLAGS@@V?$shared_ptr@VGuidedSnapAssistData@@@std@@@Z @ 0x18059EAA8 (-_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geome.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
