/*
 * XREFs of ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180098EB0
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x180193250 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180193280 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x1801933F0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180193560 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180194DE4 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1801951EC (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801957B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180196490 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180198408 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 */

struct ControllerNavigationManager *ISMStatics::GetControllerNavigationManager(void)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  return (struct ControllerNavigationManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                                + 31)
                                                                                              + 8LL)
                                                                                  + 40LL))(*((_QWORD *)BamoServerConnection
                                                                                           + 31) + 8LL);
}
