/*
 * XREFs of _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180032374
 * Callers:
 *     ?Create@MPCManager@@SAXXZ @ 0x180041080 (-Create@MPCManager@@SAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032574 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180032680 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003C88C (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x180041144 (std--call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCManager_InitializationFailed@AEAJ@ISMTracing@@SAXAEAJ@Z @ 0x1800ADB4C (--$MPCManager_InitializationFailed@AEAJ@ISMTracing@@SAXAEAJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()(MPCManager *a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 (__fastcall *v5)(__int64, __int64, const wchar_t *, __int64 *); // rdi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  const char *v11; // r9
  MPCManager *v12; // rax
  BamoInputSystemPrincipal *v13; // rdi
  BamoInputSystemPrincipal *v14; // rcx
  BamoInputSystemPrincipal *v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rbx
  int v19; // [rsp+20h] [rbp-30h]
  int v20; // [rsp+20h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  MPCManager **v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  MPCManager *v25; // [rsp+70h] [rbp+20h] BYREF
  __int64 v26; // [rsp+78h] [rbp+28h] BYREF
  __int64 v27; // [rsp+80h] [rbp+30h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v28; // [rsp+88h] [rbp+38h] BYREF

  v25 = a1;
  v26 = 0LL;
  v1 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v21 = 0LL;
  LODWORD(v25) = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v21);
  if ( (int)v25 < 0 )
  {
    ISMTracing::MPCManager_InitializationFailed<long &>(&v25);
  }
  else
  {
    v2 = v26;
    v26 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = CoreUICreate(&v26);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v3,
        v19);
    v18 = v26;
    if ( !v26 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v4);
    v5 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v26 + 56LL);
    v6 = v27;
    v27 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = v5(v18, v21, L"System\\MPCManagerPort", &v27);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v7,
        v19);
    v28 = 0LL;
    v23 = 1;
    v22 = 0LL;
    v9 = Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(
           v26,
           v27,
           (unsigned int)&v22,
           v8,
           (__int64)&v28);
    v10 = retaddr;
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v9,
        v20);
    v1 = v28;
  }
  v25 = v1;
  v22 = &v25;
  std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___(v10, &v22);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
  v25 = (MPCManager *)operator new(0x58uLL);
  v12 = MPCManager::MPCManager(v25, v1);
  v13 = v12;
  v14 = MPCManager::s_instance;
  if ( MPCManager::s_instance != v12 )
  {
    if ( v12 )
    {
      (**((void (__fastcall ***)(__int64))v12 + 2))((__int64)v12 + 16);
      v14 = MPCManager::s_instance;
    }
    v15 = v14;
    v14 = v13;
    MPCManager::s_instance = v13;
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v15 + 2) + 8LL))((__int64)v15 + 16);
      v14 = MPCManager::s_instance;
    }
  }
  if ( v1 )
  {
    v16 = *((_QWORD *)v1 + 31);
    *((_QWORD *)v1 + 31) = v14;
    if ( v14 )
      (**((void (__fastcall ***)(__int64))v14 + 2))((__int64)v14 + 16);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v16 + 16) + 8LL))(v16 + 16);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v27);
  if ( v1 )
    Microsoft::Bamo::BaseBamoConnection::Release(v1);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v26);
}
