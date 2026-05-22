/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x180129724
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1800CB592 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800CB734 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$4 @ 0x1801A2BF5 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$4.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1801A2C48 (--1ControllerProcessor@@MEAA@XZ.c)
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
