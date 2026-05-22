/*
 * XREFs of ??1?$unique_ptr@VSystemControlDeviceCollection@@U?$default_delete@VSystemControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800C6B34
 * Callers:
 *     _SystemControlDeviceCollection::Create_::_1_::dtor$0 @ 0x180055390 (_SystemControlDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSystemControlDeviceCollection@@@std@@QEBAXPEAVSystemControlDeviceCollection@@@Z @ 0x1800C6BD0 (--R-$default_delete@VSystemControlDeviceCollection@@@std@@QEBAXPEAVSystemControlDeviceCollection.c)
 */

__int64 __fastcall std::unique_ptr<SystemControlDeviceCollection>::~unique_ptr<SystemControlDeviceCollection>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemControlDeviceCollection>::operator()(a1, *a1);
  return result;
}
