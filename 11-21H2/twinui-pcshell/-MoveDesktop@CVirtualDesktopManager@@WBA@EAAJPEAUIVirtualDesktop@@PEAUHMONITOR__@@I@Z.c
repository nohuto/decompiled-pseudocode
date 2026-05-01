/*
 * XREFs of ?MoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z @ 0x18020CA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::MoveDesktop(
        __int64 a1,
        struct IVirtualDesktop *a2,
        HMONITOR a3,
        unsigned int a4)
{
  return CVirtualDesktopManager::MoveDesktop((CVirtualDesktopManager *)(a1 - 16), a2, a3, a4);
}
