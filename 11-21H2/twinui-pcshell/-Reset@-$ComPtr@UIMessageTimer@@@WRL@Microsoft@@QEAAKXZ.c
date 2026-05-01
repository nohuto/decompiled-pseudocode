/*
 * XREFs of ?Reset@?$ComPtr@UIMessageTimer@@@WRL@Microsoft@@QEAAKXZ @ 0x180464768
 * Callers:
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18045B060 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IMessageTimer>::Reset(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
