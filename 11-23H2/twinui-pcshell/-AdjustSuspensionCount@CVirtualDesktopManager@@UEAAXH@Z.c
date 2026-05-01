/*
 * XREFs of ?AdjustSuspensionCount@CVirtualDesktopManager@@UEAAXH@Z @ 0x1801C4090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::AdjustSuspensionCount(CVirtualDesktopManager *this, unsigned int a2)
{
  _InterlockedExchangeAdd((volatile signed __int32 *)this + 41, a2);
}
