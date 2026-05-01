/*
 * XREFs of ?AreModificationsSuspendedInternal@CVirtualDesktopManager@@UEAA_NXZ @ 0x1806008B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopManager::AreModificationsSuspendedInternal(CVirtualDesktopManager *this)
{
  return *((_DWORD *)this + 49) != 0;
}
