/*
 * XREFs of ?get_IsValid@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1800A2C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 *     ?ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x1800A666C (-ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::get_IsValid(struct IUnknown **this, bool *a2)
{
  Windows::UI::Composition::Internal::SharedD3DDevicePool *v4; // rax

  v4 = Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance();
  *a2 = (int)Windows::UI::Composition::Internal::SharedD3DDevicePool::ValidateClient(v4, this[4]) >= 0;
  return 0LL;
}
