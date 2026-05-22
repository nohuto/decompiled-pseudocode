/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x180194F8C
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$4 @ 0x18006FB47 (_MouseProcessor--MouseProcessor_--_1_--dtor$4.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x180194DA2 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x180194DB5 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x180194DC8 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180197648 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
