/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2_0 @ 0x18007B050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor_2_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<COnDeviceWorkItem>::~unique_ptr<COnDeviceWorkItem>(a2 + 88);
}
