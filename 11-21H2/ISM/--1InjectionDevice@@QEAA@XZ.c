/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x180175C1C
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$4 @ 0x18005726D (_MouseProcessor--MouseProcessor_--_1_--dtor$4.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x1801759AE (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x1801759C1 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x1801759D4 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180178214 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
