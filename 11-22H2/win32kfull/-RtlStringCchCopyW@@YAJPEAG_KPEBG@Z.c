/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0048AB8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0048494 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C00485A0 (NtUserGetDManipHookInitFunction.c)
 *     NtUserFindWindowEx @ 0x1C0048650 (NtUserFindWindowEx.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0048B40 (NtUserShutdownBlockReasonCreate.c)
 *     _RegisterUserApiHook @ 0x1C0048D78 (_RegisterUserApiHook.c)
 *     xxxSetDeskWallpaper @ 0x1C0049544 (xxxSetDeskWallpaper.c)
 *     _RegisterDManipHook @ 0x1C00497B0 (_RegisterDManipHook.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C004A114 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C00B5E20 (NtUserShutdownBlockReasonQuery.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C00BA680 (LoadWallpaperFilenameFromRegistry.c)
 *     _GetWOWClass @ 0x1C01BE188 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01C3500 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01C3930 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C7C6C (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C0200CF4 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C0202D34 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     xxxSendShutdownData @ 0x1C02137F8 (xxxSendShutdownData.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A75E8 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02CEB8C (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0048AE0 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  NTSTATUS result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -1073741811;
  if ( a2 )
    *a1 = 0;
  return result;
}
