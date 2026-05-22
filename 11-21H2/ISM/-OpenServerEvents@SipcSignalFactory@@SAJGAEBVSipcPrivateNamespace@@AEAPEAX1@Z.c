/*
 * XREFs of ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800FF034
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800FD0B0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180030800 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800FC61C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ??$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800FCA70 (--$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z.c)
 *     ??$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800FCAA8 (--$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@.c)
 */

__int64 __fastcall SipcSignalFactory::OpenServerEvents(
        unsigned __int16 a1,
        const struct SipcPrivateNamespace *a2,
        void **a3,
        wil::details **a4)
{
  char *v4; // rbx
  __int64 v8; // rdx
  wil::details::in1diag0 *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  void *v12; // rdx
  unsigned int LastError; // ebx
  wil::details *v14; // rax
  void *v15; // rdx
  wil::details::in1diag0 *v16; // rcx
  __int64 v17; // r8
  const char *v18; // r9
  void *v19; // rdx
  wil::details *v21; // [rsp+20h] [rbp-E0h] BYREF
  wil::details *v22; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR Name[56]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v24[56]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = (char *)a2 + 8;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( a1 )
  {
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)v4, (__int64)L"ServerSignal", (__int64)v24);
  }
  else
  {
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)v4, (__int64)L"ServerSignal", (__int64)v24);
  }
  v22 = (wil::details *)OpenEventW(0x100002u, 0, Name);
  if ( v22 )
  {
    v14 = (wil::details *)OpenEventW(2u, 0, v24);
    v21 = v14;
    if ( v14 )
    {
      *a3 = v22;
      *a4 = v14;
      v22 = 0LL;
      v21 = 0LL;
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
        &v21,
        v15);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag0::Return_GetLastError(v16, (__int64)v15, v17, v18);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
        &v21,
        v19);
    }
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v9, v8, v10, v11);
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    &v22,
    v12);
  return LastError;
}
