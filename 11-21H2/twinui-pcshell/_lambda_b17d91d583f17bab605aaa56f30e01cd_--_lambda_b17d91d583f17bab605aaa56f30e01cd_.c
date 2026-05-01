/*
 * XREFs of _lambda_b17d91d583f17bab605aaa56f30e01cd_::_lambda_b17d91d583f17bab605aaa56f30e01cd_ @ 0x1801A6FA4
 * Callers:
 *     ?OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A27C8 (-OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     ??0?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18017E520 (--0-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microso.c)
 */

_QWORD *__fastcall lambda_b17d91d583f17bab605aaa56f30e01cd_::_lambda_b17d91d583f17bab605aaa56f30e01cd_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  *a1 = a2;
  Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>(
    a1 + 1,
    a3);
  return a1;
}
