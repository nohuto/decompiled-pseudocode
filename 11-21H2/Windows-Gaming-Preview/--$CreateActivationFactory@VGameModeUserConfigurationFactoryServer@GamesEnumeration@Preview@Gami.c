/*
 * XREFs of ??$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@UEAAKXZ @ 0x180029A00 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics_ea_180029A00.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@UEAAKXZ @ 0x180029A80 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatic_ea_180029A80.c)
 *     ??0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18004171C (--0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004221C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_18004221C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v8; // rax
  __int64 result; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v10; // rax
  __int64 v11; // rbx
  int CanCastTo; // edi
  signed __int32 v13; // eax

  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *)operator new(
                                                                                               0x98uLL,
                                                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
    return 2147942414LL;
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GameModeUserConfigurationFactoryServer(v8);
  v11 = (__int64)v10;
  if ( v10 )
  {
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::AddRef((__int64)v10);
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v11);
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v11,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    if ( (*a1 & 4) == 0 )
    {
      do
        v13 = *(_DWORD *)(v11 + 68);
      while ( v13 != 0x7FFFFFFF
           && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 68), v13 + 1, v13) );
    }
    *(_DWORD *)(v11 + 88) = *(_DWORD *)a1;
    result = 0LL;
    *(_QWORD *)(v11 + 80) = a2;
  }
  else
  {
    if ( v11 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v11);
    return (unsigned int)CanCastTo;
  }
  return result;
}
