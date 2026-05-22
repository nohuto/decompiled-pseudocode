/*
 * XREFs of ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x18011D430
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x1800BA514 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180198A00 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x18011BD68 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 */

void __fastcall ManipulationInjector::SetInjectionMechanism(ManipulationInjector *a1)
{
  if ( *(_DWORD *)a1 != 4 )
  {
    ManipulationInjector::EndManipulation(a1, 0);
    *((_DWORD *)a1 + 185) = 0;
    *((_DWORD *)a1 + 184) = 0;
    *(_DWORD *)a1 = 4;
  }
}
