/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x18017A4CC
 * Callers:
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x18017EDB0 (-OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x180176BDC (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 *     ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KII@Z @ 0x180177814 (--0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KII@Z.c)
 *     ?Attach@?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x180178724 (-Attach@-$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAAXP.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017C290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_18017C290.c)
 */

__int64 __fastcall MPCManagerClient::OnButtonsChangedDuringHomeGesture(
        RTL_SRWLOCK *this,
        struct BamoMPCManagerClientStub *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *v11; // rax
  const char *v12; // r9
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *v13; // rax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v18 = 0LL;
  v11 = (Windows::Internal::Input::MPCManager::HomeGestureEventArgs *)operator new(
                                                                        0x60uLL,
                                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = Windows::Internal::Input::MPCManager::HomeGestureEventArgs::HomeGestureEventArgs(v11, a4, a3, a5, a6, a7, 0);
    Microsoft::WRL::ComPtr<Windows::Internal::Input::MPCManager::HomeGestureEventArgs>::Attach(&v18, (__int64)v13);
    v7 = v18;
  }
  if ( !v7 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      251LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v12);
  v14 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
          this + 210,
          (__int64)this,
          v7);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v14,
      v16);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(v7);
  return 0LL;
}
