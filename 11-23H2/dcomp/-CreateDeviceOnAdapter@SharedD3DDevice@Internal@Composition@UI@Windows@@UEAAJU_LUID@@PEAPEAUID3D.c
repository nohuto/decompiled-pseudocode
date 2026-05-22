/*
 * XREFs of ?CreateDeviceOnAdapter@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A27E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::CreateDeviceOnAdapter(
        struct IUnknown **this,
        struct _LUID a2,
        struct ID3D11Device **a3)
{
  Windows::UI::Composition::Internal::SharedD3DDevicePool *v6; // rax

  v6 = Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance();
  return Windows::UI::Composition::Internal::SharedD3DDevicePool::CreateSharedDevice(v6, this[3], a2, a3);
}
