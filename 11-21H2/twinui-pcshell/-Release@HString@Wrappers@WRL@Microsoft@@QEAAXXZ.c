/*
 * XREFs of ?Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x18017A3CC
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18034D03C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18035335C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x180545778 (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::Release(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
