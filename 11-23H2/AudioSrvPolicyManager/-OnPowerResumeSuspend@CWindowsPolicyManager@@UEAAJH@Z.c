/*
 * XREFs of ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001D380
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_e1820d83b8f95df3942edf6c97432ab5_::operator() @ 0x1800348DC (_lambda_e1820d83b8f95df3942edf6c97432ab5_--operator().c)
 */

__int64 __fastcall CWindowsPolicyManager::OnPowerResumeSuspend(CWindowsPolicyManager *this, int a2)
{
  int v3; // eax
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 != g_bApmSuspended )
  {
    CApplicationManager::Lock((__int64)this, &v13);
    v3 = g_bIsSystemAsleep;
    g_bApmSuspended = a2;
    if ( !a2 )
      v3 = 1;
    g_bIsSystemAsleep = v3;
    v4 = AudioSrvPolicyManagerTelemetryProvider::Provider(1LL);
    if ( *(_DWORD *)v4 > 4u )
    {
      v11 = g_bIsSystemAsleep;
      v12 = g_bApmSuspended;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v4,
        byte_180055209,
        v5,
        v6,
        (__int64)&v12,
        (__int64)&v11);
    }
    v7 = lambda_e1820d83b8f95df3942edf6c97432ab5_::operator()();
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8BE,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v7,
        v9);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  }
  return 0LL;
}
