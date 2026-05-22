/*
 * XREFs of _dynamic_initializer_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x1800023E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_map@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@4@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@@std@@QEAA@XZ @ 0x18003A2D8 (--0-$unordered_map@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@U-$hash@PEAVVirtualTouchpadCont.c)
 */

int dynamic_initializer_for__VirtualTouchpadControllerProxy::s_configuredControllers__()
{
  std::unordered_map<VirtualTouchpadControllerProxy *,VPTP_ID>::unordered_map<VirtualTouchpadControllerProxy *,VPTP_ID>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_configuredControllers__);
}
