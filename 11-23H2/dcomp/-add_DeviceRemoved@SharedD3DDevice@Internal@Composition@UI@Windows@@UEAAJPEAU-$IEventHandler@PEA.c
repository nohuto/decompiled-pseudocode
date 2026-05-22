/*
 * XREFs of ?add_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800A2BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::add_DeviceRemoved(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx

  Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance();
  return Windows::UI::Composition::Internal::SharedD3DDevicePool::AddDeviceRemovedHandler(
           v6,
           *(_QWORD *)(a1 + 32),
           a2,
           a3);
}
