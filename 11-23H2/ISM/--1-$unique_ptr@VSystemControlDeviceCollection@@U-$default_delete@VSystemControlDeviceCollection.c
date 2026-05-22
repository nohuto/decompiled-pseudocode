/*
 * XREFs of ??1?$unique_ptr@VSystemControlDeviceCollection@@U?$default_delete@VSystemControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800DFDAC
 * Callers:
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003B138 (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     _SystemControlDeviceCollection::Create_::_1_::dtor$0 @ 0x18006E1D8 (_SystemControlDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSystemControlDeviceCollection@@@std@@QEBAXPEAVSystemControlDeviceCollection@@@Z @ 0x1800DFE48 (--R-$default_delete@VSystemControlDeviceCollection@@@std@@QEBAXPEAVSystemControlDeviceCollection.c)
 */

__int64 __fastcall std::unique_ptr<SystemControlDeviceCollection>::~unique_ptr<SystemControlDeviceCollection>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemControlDeviceCollection>::operator()();
  return result;
}
