/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2 @ 0x1800C4B77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<COnDeviceWorkItem>::~unique_ptr<COnDeviceWorkItem>((__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 88));
}
