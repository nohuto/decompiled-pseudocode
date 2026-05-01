/*
 * XREFs of ??$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA?AU?$com_ptr@UIServiceProvider@@@winrt@@XZ @ 0x18022DC90
 * Callers:
 *     ?QueryService@SnapWindowProvider@SnapLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18022DF00 (-QueryService@SnapWindowProvider@SnapLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x18022E1A0 (-Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetSite@SnapWindowProvider@SnapLauncher@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022DEA0 (-GetSite@SnapWindowProvider@SnapLauncher@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

void **__fastcall SnapLauncher::SnapWindowProvider::Site<IServiceProvider>(
        SnapLauncher::SnapWindowProvider *a1,
        void **a2)
{
  *a2 = 0LL;
  SnapLauncher::SnapWindowProvider::GetSite(a1, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, a2);
  return a2;
}
