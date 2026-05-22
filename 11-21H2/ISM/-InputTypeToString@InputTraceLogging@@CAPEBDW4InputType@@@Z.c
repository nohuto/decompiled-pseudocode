/*
 * XREFs of ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800B2A20
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180018430 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180018D90 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x1800B3140 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z @ 0x1800B3380 (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z.c)
 *     ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x1800BCA00 (-ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800E1318 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z @ 0x1800E50C4 (-UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800E7468 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x1801A2344 (-Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorSt.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x1801A3C44 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InputTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  if ( a1 <= 4096 )
  {
    if ( a1 == 4096 )
      return "RawMouse";
    if ( a1 > 32 )
    {
      v6 = a1 - 64;
      if ( !v6 )
        return "GameController";
      v7 = v6 - 64;
      if ( !v7 )
        return "Button";
      v8 = v7 - 128;
      if ( !v8 )
        return "HID";
      v9 = v8 - 256;
      if ( !v9 )
        return "MPCHand";
      v10 = v9 - 512;
      if ( !v10 )
        return "MPCController";
      if ( v10 == 1024 )
        return "Heat";
    }
    else
    {
      if ( a1 == 32 )
        return "Touchpad";
      if ( !a1 )
        return "Unknown";
      v1 = a1 - 1;
      if ( !v1 )
        return "Pointer";
      v2 = v1 - 1;
      if ( !v2 )
        return "Mouse";
      v3 = v2 - 2;
      if ( !v3 )
        return "Keyboard";
      v4 = v3 - 4;
      if ( !v4 )
        return "Touch";
      if ( v4 == 8 )
        return "Pen";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 0x80000 )
  {
    switch ( a1 )
    {
      case 0x80000:
        return "LampArray";
      case 0x2000:
        return "MPCSpatialController";
      case 0x4000:
        return "Gaze";
      case 0x8000:
        return "DInputController";
      case 0x10000:
        return "XInputController";
      case 0x20000:
        return "MPCHead";
      case 0x40000:
        return "MPCVoice";
    }
    return "UNKNOWN";
  }
  switch ( a1 )
  {
    case 0x100000:
      return "Dock";
    case 0x200000:
      return "MPCEyeGaze";
    case 0x400000:
      return "MPCHomeGesture";
    case 0x800000:
      return "QMsg";
  }
  if ( a1 != 0x1000000 )
    return "UNKNOWN";
  return "TouchpadShellGesture";
}
