/*
 * XREFs of ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800C4398
 * Callers:
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$0 @ 0x1800C4702 (_MobileButtonDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VMobileButtonDeviceCollection@@@std@@QEBAXPEAVMobileButtonDeviceCollection@@@Z @ 0x1800C44E0 (--R-$default_delete@VMobileButtonDeviceCollection@@@std@@QEBAXPEAVMobileButtonDeviceCollection@@.c)
 */

__int64 __fastcall std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MobileButtonDeviceCollection>::operator()();
  return result;
}
