/*
 * XREFs of ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180177454
 * Callers:
 *     ?GetForCurrentThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180179810 (-GetForCurrentThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Int.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1_::Invoke @ 0x18017A240 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--IDispatch_ea_18017A240.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801765EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIM.c)
 *     ??0MPCManagerClient@@QEAA@XZ @ 0x1801779B0 (--0MPCManagerClient@@QEAA@XZ.c)
 *     ??1?$ComPtr@VMPCManagerClient@@@WRL@Microsoft@@QEAA@XZ @ 0x180177BCC (--1-$ComPtr@VMPCManagerClient@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017C580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18017C580.c)
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18017CAEC (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerClient,>(
        _QWORD *a1)
{
  void *v2; // rax
  int v3; // edi
  MPCManagerClient *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  MPCManagerClient *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x6C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (MPCManagerClient *)v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
    return (unsigned int)v3;
  }
  v4 = MPCManagerClient::MPCManagerClient((MPCManagerClient *)v2);
  v7 = v4;
  v6 = 0LL;
  v3 = MPCManagerClient::RuntimeClassInitialize(v4);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<MPCManagerClient>::~ComPtr<MPCManagerClient>(&v7);
    goto LABEL_5;
  }
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>>(
         (__int64)v4,
         &GUID_14d766a1_12f3_404c_ae87_c566719dbe22,
         a1);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v4);
  return (unsigned int)v3;
}
