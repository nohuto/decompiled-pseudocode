/*
 * XREFs of _lambda_6d6c0a46572599aafa6340809d3efbaf_::operator() @ 0x180034488
 * Callers:
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x180037660 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001DD0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180039670 (-TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6d6c0a46572599aafa6340809d3efbaf_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  DWORD v3; // r14d
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r9
  struct TSSession *v8; // rbx
  int v9; // r15d
  int v10; // esi
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (__fastcall **v15)(); // [rsp+40h] [rbp-19h] BYREF
  DWORD v16; // [rsp+48h] [rbp-11h]
  __int64 (__fastcall ***v17)(); // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct TSSession *v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  DWORD v21; // [rsp+D0h] [rbp+77h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+D8h] [rbp+7Fh] BYREF

  CApplicationManager::Lock(a1, &v22);
  v2 = **(_QWORD **)a1;
  if ( *(_DWORD *)(v2 + 16) != 4
    || *(_QWORD *)v2 != *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1
    || *(_QWORD *)(v2 + 8) != *(_QWORD *)GUID_CONSOLE_LOCKED.Data4 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    goto LABEL_13;
  }
  v3 = **(_DWORD **)(a1 + 8);
  v4 = TsSessionFromSessionId(v3, 0, &v19);
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_5;
  v8 = v19;
  v9 = *((_DWORD *)v19 + 254);
  v10 = *(_BYTE *)(v2 + 20) != 0;
  *((_DWORD *)v19 + 254) = v10;
  v11 = AudioSrvPolicyManagerTelemetryProvider::Provider(v5);
  if ( *(_DWORD *)v11 > 4u )
  {
    LODWORD(v19) = v9 != v10;
    v20 = *((_DWORD *)v8 + 254);
    v21 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      byte_18005597D,
      v12,
      v13,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  if ( v9 != v10 && TsSessionRequiresReevaluationOfAudioInStandby(v8) )
  {
    v15 = off_18004EF40;
    v16 = v3;
    v17 = &v15;
    v4 = QueueGenericWorkItem((__int64 *)&v15);
    v6 = v4;
    if ( v4 < 0 )
    {
LABEL_5:
      v7 = (unsigned int)v4;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7DD,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v7);
      goto LABEL_14;
    }
  }
  v6 = 0;
LABEL_14:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
  return v6;
}
