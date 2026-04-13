/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830
 * Callers:
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18005D624 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180061304 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800CFABC (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 *     ?SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800D0198 (-SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800D0BFC (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 *     ?GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z @ 0x1800D1018 (-GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z.c)
 *     ?SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z @ 0x1800D1A68 (-SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800E7A5C (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 * Callees:
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18005336C (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_Win32<1>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
