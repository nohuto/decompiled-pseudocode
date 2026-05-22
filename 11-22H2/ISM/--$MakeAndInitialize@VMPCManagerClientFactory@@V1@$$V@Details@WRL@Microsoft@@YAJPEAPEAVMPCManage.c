/*
 * XREFs of ??$MakeAndInitialize@VMPCManagerClientFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVMPCManagerClientFactory@@@Z @ 0x180185330
 * Callers:
 *     ??$CreateActivationFactory@VMPCManagerClientFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801844C0 (--$CreateActivationFactory@VMPCManagerClientFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorM.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$AgileActivationFactory@UIMPCManagerClientStatics@MPCManager@Input@Internal@Windows@@VNil@Details@WRL@Microsoft@@V6789@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180185470 (--0-$AgileActivationFactory@UIMPCManagerClientStatics@MPCManager@Input@Internal@Windows@@VNil@De.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCManagerClientFactory,MPCManagerClientFactory,>(
        MPCManagerClientFactory **a1)
{
  MPCManagerClientFactory *v2; // rax
  MPCManagerClientFactory *v3; // rbx
  MPCManagerClientFactory *v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (MPCManagerClientFactory *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v5 = v2;
  if ( v2 )
  {
    Microsoft::WRL::AgileActivationFactory<Windows::Internal::Input::MPCManager::IMPCManagerClientStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::Internal::Input::MPCManager::IMPCManagerClientStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v2);
    *(_QWORD *)v3 = &MPCManagerClientFactory::`vftable';
    *((_QWORD *)v3 + 1) = &MPCManagerClientFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>>'};
    *((_QWORD *)v3 + 5) = &MPCManagerClientFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>>'};
    MPCManagerClientFactory::AddRef(v3);
    *a1 = v3;
    (*(void (__fastcall **)(MPCManagerClientFactory *))(*(_QWORD *)v3 + 16LL))(v3);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>((void **)&v5);
    return 2147942414LL;
  }
}
