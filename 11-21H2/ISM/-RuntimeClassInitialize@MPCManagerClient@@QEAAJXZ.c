/*
 * XREFs of ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18015D6BC
 * Callers:
 *     ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x1801581F4 (--$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180047284 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180157538 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18015D160 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18015D160.c)
 *     ??0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z @ 0x18015F534 (--0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCManagerClient::RuntimeClassInitialize(MPCManagerClient *this)
{
  int v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  __int64 v5; // rcx
  char *v6; // rdi
  Microsoft::Bamo::BaseBamoConnection *v7; // rax
  int v8; // eax
  MPCManagerClientPrincipal *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v16[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  MPCManagerClientPrincipal *v19; // [rsp+50h] [rbp+18h]

  v18 = 0LL;
  v2 = CoreUICreate(&v18);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v2,
      v16[0]);
  v5 = v18;
  if ( !v18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      27LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v4);
  v6 = (char *)this + 1624;
  v7 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 203);
  *((_QWORD *)this + 203) = 0LL;
  if ( v7 )
  {
    Microsoft::Bamo::BaseBamoConnection::Release(v7);
    v5 = v18;
  }
  v16[2] = 1;
  *(_QWORD *)v16 = 0LL;
  v8 = Microsoft::Bamo::BaseBamoConnection::CreateClient<MPCManagerClientConnection>(
         (__int64 *)v5,
         v16,
         v3,
         (_QWORD *)this + 203);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v8,
      v16[0]);
  v19 = (MPCManagerClientPrincipal *)operator new(0x40uLL);
  v9 = MPCManagerClientPrincipal::MPCManagerClientPrincipal(v19, *(struct MPCManagerClientConnection **)v6, this);
  v11 = *((_QWORD *)this + 202);
  *((_QWORD *)this + 202) = v9;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = *(_QWORD *)(*(_QWORD *)v6 + 240LL);
  *(_QWORD *)(*(_QWORD *)v6 + 240LL) = this;
  v13 = *((_QWORD *)this + 6);
  while ( v13 >= 0 )
  {
    if ( (_DWORD)v13 != 0x7FFFFFFF )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v13 + 1, v13);
      if ( v14 != v13 )
        continue;
    }
    goto LABEL_17;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v10);
LABEL_17:
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v12);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v18);
  return 0LL;
}
