/*
 * XREFs of ??$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1803C0BB4
 * Callers:
 *     ??$CreateActivationFactory@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1803C0230 (--$CreateActivationFactory@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@.c)
 * Callees:
 *     ?Attach@?$ComPtr@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1800A917C (-Attach@-$ComPtr@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ??0AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1800A91B0 (--0AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18017AB40 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1803C3100 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory,>(
        __int64 *a1)
{
  unsigned int v1; // edi
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *v3; // rax
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *)operator new(
                                                                                   0x60uLL,
                                                                                   (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::AppViewListenerFactory(v3);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory>::Attach(
      &v8,
      (__int64)v4);
    v6 = v8;
    if ( v8 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(v8);
    *a1 = v6;
    if ( v6 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v6,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
