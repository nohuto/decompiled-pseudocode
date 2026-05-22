/*
 * XREFs of _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180033B64
 * Callers:
 *     ?Create@MPCManager@@SAXXZ @ 0x180041AC8 (-Create@MPCManager@@SAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180033E70 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003883C (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x180041B4C (std--call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x1800C1B54 (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()()
{
  Microsoft::Bamo::BaseBamoConnection *v0; // rbx
  unsigned __int64 v1; // rdx
  unsigned __int8 v2; // cl
  int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // r9
  __int64 (__fastcall *v7)(__int64, __int64, const wchar_t *, __int64 *); // rdi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  const char *v13; // r9
  MPCManager *v14; // rax
  BamoInputSystemPrincipal *v15; // rdi
  BamoInputSystemPrincipal *v16; // rcx
  BamoInputSystemPrincipal *v17; // rax
  __int64 v18; // rdi
  __int64 v20; // rbx
  ISMTracing *v21; // rcx
  int v22; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+20h] [rbp-30h]
  Microsoft::Bamo::BaseBamoConnection *v24; // [rsp+30h] [rbp-20h] BYREF
  Microsoft::Bamo::BaseBamoConnection **v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v28; // [rsp+70h] [rbp+20h] BYREF
  __int64 v29; // [rsp+78h] [rbp+28h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v30; // [rsp+80h] [rbp+30h] BYREF
  __int64 v31; // [rsp+88h] [rbp+38h] BYREF

  v28 = 0LL;
  v0 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v3 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v31);
  if ( v3 < 0 )
  {
    if ( ISMTracing::IsEnabled(v2, v1) )
    {
      wil::details::static_lazy<ISMTracing>::get(
        (__int64)v12,
        _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCManager_InitializationFailed_(v21, v3);
    }
  }
  else
  {
    v4 = v28;
    v28 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = CoreUICreate(&v28);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v5,
        v22);
    v20 = v28;
    if ( !v28 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v6);
    v7 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v28 + 56LL);
    v8 = v29;
    v29 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v7(v20, v31, L"System\\MPCManagerPort", &v29);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v9,
        v22);
    v30 = 0LL;
    v26 = 1;
    v25 = 0LL;
    v11 = Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(
            v28,
            v29,
            (unsigned int)&v25,
            v10,
            (__int64)&v30);
    v12 = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v11,
        v23);
    v0 = v30;
  }
  v24 = v0;
  v25 = &v24;
  std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___(v12, &v25);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
  v25 = (Microsoft::Bamo::BaseBamoConnection **)operator new(0x58uLL);
  v14 = MPCManager::MPCManager((MPCManager *)v25, v0);
  v15 = v14;
  v16 = MPCManager::s_instance;
  if ( MPCManager::s_instance != v14 )
  {
    if ( v14 )
    {
      (**((void (__fastcall ***)(__int64))v14 + 2))((__int64)v14 + 16);
      v16 = MPCManager::s_instance;
    }
    v17 = v16;
    v16 = v15;
    MPCManager::s_instance = v15;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v17 + 2) + 8LL))((__int64)v17 + 16);
      v16 = MPCManager::s_instance;
    }
  }
  if ( v0 )
  {
    v18 = *((_QWORD *)v0 + 31);
    *((_QWORD *)v0 + 31) = v16;
    if ( v16 )
      (**((void (__fastcall ***)(__int64))v16 + 2))((__int64)v16 + 16);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v18 + 16) + 8LL))(v18 + 16);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v29);
  if ( v0 )
    Microsoft::Bamo::BaseBamoConnection::Release(v0);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v28);
}
