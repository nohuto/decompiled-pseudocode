/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$1_1 @ 0x18007B3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor_1_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<COnDeviceWorkItem>::~unique_ptr<COnDeviceWorkItem>(a2 + 136);
}
