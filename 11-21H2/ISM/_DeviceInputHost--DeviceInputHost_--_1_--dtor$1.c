/*
 * XREFs of _DeviceInputHost::DeviceInputHost_::_1_::dtor$1 @ 0x1800800C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceInputHost::DeviceInputHost_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputProcess>::~ComPtr<InputProcess>(*(_QWORD *)(a2 + 80) + 24LL);
}
