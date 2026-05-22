/*
 * XREFs of ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800EC3A0
 * Callers:
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800EC648 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$0 @ 0x1800EC749 (_MobileButtonDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VMobileButtonDeviceCollection@@@std@@QEBAXPEAVMobileButtonDeviceCollection@@@Z @ 0x1800EC4F8 (--R-$default_delete@VMobileButtonDeviceCollection@@@std@@QEBAXPEAVMobileButtonDeviceCollection@@.c)
 */

__int64 __fastcall std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MobileButtonDeviceCollection>::operator()();
  return result;
}
