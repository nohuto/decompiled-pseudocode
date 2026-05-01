/*
 * XREFs of ?AdjustSuspensionCount@CVirtualDesktopManager@@UEAAXH@Z @ 0x180186030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::AdjustSuspensionCount(CVirtualDesktopManager *this, unsigned int a2)
{
  _InterlockedExchangeAdd((volatile signed __int32 *)this + 63, a2);
}
