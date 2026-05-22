/*
 * XREFs of ??1?$unique_ptr@VConsumerControlDeviceCollection@@U?$default_delete@VConsumerControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800C5CC8
 * Callers:
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$0 @ 0x1800C5ECA (_ConsumerControlDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VConsumerControlDeviceCollection@@@std@@QEBAXPEAVConsumerControlDeviceCollection@@@Z @ 0x1800C5D64 (--R-$default_delete@VConsumerControlDeviceCollection@@@std@@QEBAXPEAVConsumerControlDeviceCollec.c)
 */

__int64 __fastcall std::unique_ptr<ConsumerControlDeviceCollection>::~unique_ptr<ConsumerControlDeviceCollection>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<ConsumerControlDeviceCollection>::operator()();
  return result;
}
