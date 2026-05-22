/*
 * XREFs of ?get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x18018C6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B26E0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VMPCConstantManagerClient@@PEAVMPCManagerClientConnection@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCConstantManagerClient@@@12@$$QEAPEAVMPCManagerClientConnection@@@Z @ 0x180184F8C (--$Make@VMPCConstantManagerClient@@PEAVMPCManagerClientConnection@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18018A1E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18018A1E0.c)
 */

__int64 __fastcall MPCManagerClient::get_MPCConstantManagerClient(
        MPCManagerClient *this,
        struct Windows::Internal::Input::MPCManager::IMPCConstantManagerClient **a2)
{
  __int64 v4; // rcx
  MPCConstantManagerClient **v5; // rax
  const char *v6; // r9
  struct MPCManagerClientConnection *v7; // rdx
  __int64 v8; // rcx
  MPCConstantManagerClient *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCConstantManagerClient *v12; // [rsp+30h] [rbp+8h] BYREF
  struct MPCManagerClientConnection *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 213);
  if ( !v4 )
  {
    v13 = (struct MPCManagerClientConnection *)*((_QWORD *)this + 200);
    v5 = Microsoft::WRL::Details::Make<MPCConstantManagerClient,MPCManagerClientConnection *>(&v12, &v13);
    v7 = 0LL;
    if ( &v13 != v5 )
    {
      v7 = *v5;
      *v5 = 0LL;
    }
    v8 = *((_QWORD *)this + 213);
    *((_QWORD *)this + 213) = v7;
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v8);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release((__int64)v9);
    }
    v4 = *((_QWORD *)this + 213);
    if ( !v4 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        281LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
        v6);
  }
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>>(
           v4,
           &GUID_4e663a2d_1db5_4a2f_98d7_4ba9bf42d201,
           a2);
}
