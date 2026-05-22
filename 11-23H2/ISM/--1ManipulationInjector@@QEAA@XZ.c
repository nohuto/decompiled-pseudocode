/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x18011B694
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1800BA7B2 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BA974 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$4 @ 0x180194D8F (_ControllerProcessor--ControllerProcessor_--_1_--dtor$4.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180194DE4 (--1ControllerProcessor@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::~ManipulationInjector(ManipulationInjector *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 12) )
    RemoveInjectionDevice();
  v2 = (void *)*((_QWORD *)this + 98);
  if ( v2 )
    CloseHandle(v2);
}
