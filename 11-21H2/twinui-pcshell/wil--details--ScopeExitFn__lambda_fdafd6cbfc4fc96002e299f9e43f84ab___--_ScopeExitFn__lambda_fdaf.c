/*
 * XREFs of wil::details::ScopeExitFn__lambda_fdafd6cbfc4fc96002e299f9e43f84ab___::_ScopeExitFn__lambda_fdafd6cbfc4fc96002e299f9e43f84ab___ @ 0x18048ED98
 * Callers:
 *     _VirtualDesktopPerMonitorCollection::Initialize_::_1_::dtor$1 @ 0x18021F669 (_VirtualDesktopPerMonitorCollection--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?UninitializeInternal@VirtualDesktopPerMonitorCollection@@AEAAXAEAVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18048F43C (-UninitializeInternal@VirtualDesktopPerMonitorCollection@@AEAAXAEAVSyncLockExclusive@Details@Wra.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_fdafd6cbfc4fc96002e299f9e43f84ab___::_ScopeExitFn__lambda_fdafd6cbfc4fc96002e299f9e43f84ab___(
        __int64 a1,
        struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a2)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    VirtualDesktopPerMonitorCollection::UninitializeInternal(*(VirtualDesktopPerMonitorCollection **)a1, a2);
  }
}
