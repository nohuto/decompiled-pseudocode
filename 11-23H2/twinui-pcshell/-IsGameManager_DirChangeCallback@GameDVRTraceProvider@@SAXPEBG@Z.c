/*
 * XREFs of ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1801493E8
 * Callers:
 *     ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x180149280 (-DirChangeCallback@IsGameManager@@CAXPEAXE@Z.c)
 * Callees:
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x1801496EC (--$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_DirChangeCallback(const unsigned __int16 *a1)
{
  const unsigned __int16 *v2; // [rsp+40h] [rbp-838h] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  unsigned __int16 *v4; // [rsp+850h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+858h] [rbp-20h] BYREF

  v2 = a1;
  GameDVR_OutputDebug::GameDVR_OutputDebug((GameDVR_OutputDebug *)OutputString, "IsGameManager_DirChangeCallback");
  StringCchPrintfExW(v4, v5, &v4, &v5, 0, (wchar_t *)L"%S=\"%s\" ", "SubLocation", a1, v2);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_IsGameManager_DirChangeCallback<unsigned short const * &>(&v2);
}
