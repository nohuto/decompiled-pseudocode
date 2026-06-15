/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800384D0
 * Callers:
 *     <none>
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
__int64 __fastcall TsSessionIdDisplayNotificationCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  DWORD v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct TSSession *v7; // rsi
  int v8; // r15d
  int v9; // r14d
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // [rsp+40h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+50h] [rbp-9h] BYREF
  DWORD v19; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v20)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct TSSession *v22; // [rsp+D0h] [rbp+77h] BYREF
  BOOL v23; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = a1;
  CApplicationManager::Lock(a1, &v17);
  if ( a3[4] != 4 )
    goto LABEL_12;
  v5 = *(_QWORD *)a3 - *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1 )
    v5 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4;
  if ( v5 || (int)TsSessionFromSessionId(v4, 0, &v22) < 0 )
    goto LABEL_12;
  v7 = v22;
  v8 = *((_DWORD *)v22 + 253);
  v9 = a3[5] != 0;
  *((_DWORD *)v22 + 253) = v9;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider(v6);
  if ( *(_DWORD *)v10 > 4u )
  {
    LODWORD(v22) = *((_DWORD *)v7 + 253);
    v23 = v8 != v9;
    v16 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      byte_1800559DE,
      v11,
      v12,
      (__int64)&v16,
      (__int64)&v23,
      (__int64)&v22);
  }
  if ( v8 == v9
    || !TsSessionRequiresReevaluationOfAudioInStandby(v7)
    || (v18 = off_18004EF70, v19 = v4, v20 = &v18, v13 = QueueGenericWorkItem((__int64 *)&v18), v14 = v13, v13 >= 0) )
  {
LABEL_12:
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B6,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v13);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v14;
}
