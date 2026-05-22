/*
 * XREFs of _DeviceInputHost::DeviceInputHost_::_1_::dtor$3 @ 0x1800A96DB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeviceInputHost::DeviceInputHost_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>((__int64 *)(*(_QWORD *)(a2 + 80) + 40LL));
}
