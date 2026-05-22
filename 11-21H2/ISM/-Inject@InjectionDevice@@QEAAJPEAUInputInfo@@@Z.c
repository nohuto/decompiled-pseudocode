/*
 * XREFs of ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180177450
 * Callers:
 *     ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180177550 (-InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180177AE0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180178BF4 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180193F00 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ @ 0x1801942F8 (-OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

Inject *__fastcall InjectionDevice::Inject(Inject *this, struct InputInfo *a2)
{
  if ( !*((_BYTE *)this + 1556) )
    return (Inject *)2147549183LL;
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 2);
  return (Inject *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
}
