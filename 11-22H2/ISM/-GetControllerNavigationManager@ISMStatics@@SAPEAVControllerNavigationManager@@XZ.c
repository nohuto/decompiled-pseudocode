/*
 * XREFs of ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800AB490
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x1801A10B0 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x1801A10E0 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x1801A1250 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x1801A13C0 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1801A2C48 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1801A3050 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801A361C (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x1801A43A0 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x1801A6348 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
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
