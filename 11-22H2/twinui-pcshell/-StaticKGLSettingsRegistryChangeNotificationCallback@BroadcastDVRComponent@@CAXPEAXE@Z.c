/*
 * XREFs of ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x180148780
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800A6F90 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x180148D40 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall BroadcastDVRComponent::StaticKGLSettingsRegistryChangeNotificationCallback(PVOID a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  int v4; // ebx
  LSTATUS v5; // eax
  unsigned int v6; // [rsp+30h] [rbp-858h] BYREF
  unsigned int v7[3]; // [rsp+34h] [rbp-854h] BYREF
  WCHAR OutputString[1032]; // [rsp+40h] [rbp-848h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+850h] [rbp-38h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry");
  GameDVR_OutputDebug::OutputString(OutputString);
  v3 = *(_DWORD **)(wil::details::static_lazy<GameDVRTraceProvider>::get(
                      v2,
                      _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1808477F3, 0LL, 0LL, 2u, &v9);
  v7[0] = 0;
  v6 = 0;
  v4 = BroadcastDVRComponent::QueueNotifyGameBarForKGLUpdateIfNecessary((BroadcastDVRComponent *)a1, v7, &v6);
  v5 = RegNotifyChangeKeyValue(*((HKEY *)a1 + 51), 1, 0x10000004u, *((HANDLE *)a1 + 53), 1);
  GameDVRTraceProvider::BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit(v5, v4, v7[0], v6);
}
