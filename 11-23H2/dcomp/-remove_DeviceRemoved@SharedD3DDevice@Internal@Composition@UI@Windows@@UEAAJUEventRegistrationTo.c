/*
 * XREFs of ?remove_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800A2C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::remove_DeviceRemoved(
        Windows::UI::Composition::Internal::SharedD3DDevice *this,
        struct EventRegistrationToken a2)
{
  Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance();
  return Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
           *((_QWORD *)this + 4) + 32LL,
           a2.value);
}
