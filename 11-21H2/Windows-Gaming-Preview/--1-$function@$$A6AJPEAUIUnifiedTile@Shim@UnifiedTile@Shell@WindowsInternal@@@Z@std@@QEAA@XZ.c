/*
 * XREFs of ??1?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@QEAA@XZ @ 0x18000ADCC
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged_::_1_::dtor$3 @ 0x18004C454 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnUtmCollectionChanged_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged_::_1_::dtor$9 @ 0x18004CA33 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnUtmColle_ea_18004CA33.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles_::_1_::dtor$0 @ 0x18004CA45 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_ProcessAddedOrRemovedTi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<long (WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)>::~function<long (WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
