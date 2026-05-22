/*
 * XREFs of ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x18008B3D4
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x180002010 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180002110 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180004FE0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@Z @ 0x180005180 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z @ 0x180007760 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CAJPEAX0H@Z @ 0x18000B390 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x18000BCA0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x180041E40 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPE.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x180041FD0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x180043AC0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?ReceiveCoreMessagingK@ISM@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x18008B844 (-ReceiveCoreMessagingK@ISM@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MitEndpointToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 <= 11 )
  {
    if ( a1 == 11 )
      return "ForegroundManager";
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return "PointerInputDown";
      v6 = v5 - 1;
      if ( !v6 )
        return "InputConfig";
      v7 = v6 - 1;
      if ( !v7 )
        return "InputInteropMT";
      v8 = v7 - 1;
      if ( !v8 )
        return "KeyboardInput";
      if ( v8 == 1 )
        return "InvalidateInput";
    }
    else
    {
      if ( a1 == 5 )
        return "InputInteropISM";
      if ( !a1 )
        return "DeviceIdentification";
      v1 = a1 - 1;
      if ( !v1 )
        return "CursorManagement";
      v2 = v1 - 1;
      if ( !v2 )
        return "InputDelivery";
      v3 = v2 - 1;
      if ( !v3 )
        return "InputFocus";
      if ( v3 == 1 )
        return "KeyboardInputAttempted";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 17 )
  {
    if ( a1 == 17 )
      return "PenInput";
    v9 = a1 - 12;
    if ( !v9 )
      return "PointerInputObserver";
    v10 = v9 - 1;
    if ( !v10 )
      return "PnpDeviceNotification";
    v11 = v10 - 1;
    if ( !v11 )
      return "KeyboardOverriderInputMessage";
    v12 = v11 - 1;
    if ( !v12 )
      return "HotkeyRegistration";
    if ( v12 == 1 )
      return "MouseInput";
    return "UNKNOWN";
  }
  v13 = a1 - 18;
  if ( !v13 )
    return "AccessibilityTimerNotification";
  v14 = v13 - 1;
  if ( !v14 )
    return "VPTPInterop";
  v15 = v14 - 1;
  if ( !v15 )
    return "InputStreamEnded";
  if ( v15 != 1 )
    return "UNKNOWN";
  return "InputDesktopChanged";
}
