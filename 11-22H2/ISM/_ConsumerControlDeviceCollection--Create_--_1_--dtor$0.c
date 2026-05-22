/*
 * XREFs of _ConsumerControlDeviceCollection::Create_::_1_::dtor$0 @ 0x1800EE091
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ConsumerControlDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<ConsumerControlDeviceCollection>::~unique_ptr<ConsumerControlDeviceCollection>((_QWORD *)(a2 + 64));
}
