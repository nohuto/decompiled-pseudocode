/*
 * XREFs of ?Uninitialize@CRotationManagerSync@@UEAAXXZ @ 0x1801BF810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRotationManagerSync::Uninitialize(CRotationManagerSync *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
}
