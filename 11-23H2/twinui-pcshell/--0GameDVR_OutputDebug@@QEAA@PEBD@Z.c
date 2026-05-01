/*
 * XREFs of ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498
 * Callers:
 *     ?BroadcastDVRComponent_OnApplicationViewChanged_NewApp@GameDVRTraceProvider@@SAXPEAX0_N11PEBG@Z @ 0x180083340 (-BroadcastDVRComponent_OnApplicationViewChanged_NewApp@GameDVRTraceProvider@@SAXPEAX0_N11PEBG@Z.c)
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x180083590 (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ?BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ @ 0x1801486EC (-BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ.c)
 *     ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x180148780 (-StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z.c)
 *     ?BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x18014887C (-BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x18014890C (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x18014899C (-BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180148AD0 (-BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z @ 0x180148C34 (-BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x180148D40 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x180148EDC (-BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z @ 0x1801490A8 (-BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1801493E8 (-IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z @ 0x1803D5ACC (-BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ @ 0x1803D5C10 (-BroadcastDVRComponent_ActivateForKGLUpdate_Queueing@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z @ 0x1803D5CA0 (-BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803D5DAC (-BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z @ 0x1803D5E80 (-BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x1803D5FC4 (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 *     ?BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z @ 0x1803D6108 (-BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z.c)
 *     ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1803D624C (-BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1803D6388 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803D64C4 (-BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z.c)
 *     ?BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z @ 0x1803D65F8 (-BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x1803D6708 (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 *     ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803D69A8 (-BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803D6AF8 (-BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ @ 0x1803D73E0 (-ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ.c)
 *     ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x1803DF32C (-IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z.c)
 *     ?IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803DF4CC (-IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1803DF5A0 (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x1803DF6E4 (-IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1803DF814 (-IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DF994 (-IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DFA94 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DFB94 (-IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z.c)
 * Callees:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

GameDVR_OutputDebug *__fastcall GameDVR_OutputDebug::GameDVR_OutputDebug(GameDVR_OutputDebug *this, const char *a2)
{
  unsigned __int16 **v2; // rsi
  unsigned __int64 *v4; // rbx
  int wMonth; // [rsp+30h] [rbp-78h]
  int wDay; // [rsp+38h] [rbp-70h]
  int wHour; // [rsp+40h] [rbp-68h]
  int wMinute; // [rsp+48h] [rbp-60h]
  int wSecond; // [rsp+50h] [rbp-58h]
  int wMilliseconds; // [rsp+58h] [rbp-50h]
  struct _SYSTEMTIME SystemTime; // [rsp+70h] [rbp-38h] BYREF

  v2 = (unsigned __int16 **)((char *)this + 2048);
  v4 = (unsigned __int64 *)((char *)this + 2056);
  *((_QWORD *)this + 256) = this;
  *((_QWORD *)this + 257) = 1024LL;
  GetLocalTime(&SystemTime);
  wMilliseconds = SystemTime.wMilliseconds;
  wSecond = SystemTime.wSecond;
  wMinute = SystemTime.wMinute;
  wHour = SystemTime.wHour;
  wDay = SystemTime.wDay;
  wMonth = SystemTime.wMonth;
  StringCchPrintfExW(
    (unsigned __int16 *)this,
    *v4,
    v2,
    v4,
    0,
    (wchar_t *)L"%02d/%02d %02d:%02d:%02d.%03d [%08p] ",
    wMonth,
    wDay,
    wHour,
    wMinute,
    wSecond,
    wMilliseconds,
    NtCurrentTeb()->ClientId.UniqueThread);
  StringCchPrintfExW(*v2, *v4, v2, v4, 0, (wchar_t *)L"%S: ", a2);
  return this;
}
