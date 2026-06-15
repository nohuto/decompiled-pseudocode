/*
 * XREFs of _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback_::_1_::dtor$0 @ 0x14008D1DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::unique_call<void (*)(void),&void CoUninitialize(void),1>::~unique_call<void (*)(void),&void CoUninitialize(void),1>((char *)(a2 + 104));
}
