/*
 * XREFs of ??$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@@12@$$QEA_N@Z @ 0x180157FC4
 * Callers:
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x18015C6DC (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 *     ?add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18015F2B0 (-add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU-$ITypedEventHandler@PEAVMPCManagerClien.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ServerConnectionArgs@MPCManager@Input@Internal@Windows@@QEAA@_N@Z @ 0x1801588A0 (--0ServerConnectionArgs@MPCManager@Input@Internal@Windows@@QEAA@_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIServerConnectionArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18015D050 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UISer_ea_18015D050.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::ServerConnectionArgs,bool>(
        __int64 *a1,
        bool *a2)
{
  Windows::Internal::Input::MPCManager::ServerConnectionArgs *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)operator new(
                                                                       0x48uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::Internal::Input::MPCManager::ServerConnectionArgs::ServerConnectionArgs(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
