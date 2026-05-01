/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@UEAAKXZ @ 0x180029A00
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180020C30 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@WCI@EAAKXZ @ 0x180027E50 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumera.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@WDI@EAAKXZ @ 0x180028550 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics_ea_180028550.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@W7EAAKXZ @ 0x1800289B0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics_ea_1800289B0.c)
 *     ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180029A70 (-AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041B80 (--$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gami.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::AddRef(
        __int64 a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // r8d

  v1 = 0x7FFFFFFF;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 68);
    if ( v2 == 0x7FFFFFFF )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v2 + 1, v2) )
    {
      v1 = v2 + 1;
      break;
    }
  }
  if ( (*(_BYTE *)(a1 + 88) & 4) == 0 && v1 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v1;
}
