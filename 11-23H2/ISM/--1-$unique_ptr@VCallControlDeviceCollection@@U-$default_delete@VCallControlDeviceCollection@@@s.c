/*
 * XREFs of ??1?$unique_ptr@VCallControlDeviceCollection@@U?$default_delete@VCallControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E0664
 * Callers:
 *     ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003B05C (-Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPE.c)
 *     _CallControlDeviceCollection::Create_::_1_::dtor$0 @ 0x18006E1A2 (_CallControlDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VCallControlDeviceCollection@@@std@@QEBAXPEAVCallControlDeviceCollection@@@Z @ 0x1800E0684 (--R-$default_delete@VCallControlDeviceCollection@@@std@@QEBAXPEAVCallControlDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CallControlDeviceCollection>::~unique_ptr<CallControlDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CallControlDeviceCollection>::operator()();
  return result;
}
