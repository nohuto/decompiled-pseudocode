/*
 * XREFs of ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800A3DFC
 * Callers:
 *     ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800A3FB0 (-InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800CEE80 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800DF9E0 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180177550 (-InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A5250 (-Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$.c)
 *     ?Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A54B0 (-Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerInputInfo::GetSizeForPointerCount(int a1)
{
  if ( !a1 )
    __fastfail(7u);
  return (unsigned int)(144 * a1 + 320);
}
