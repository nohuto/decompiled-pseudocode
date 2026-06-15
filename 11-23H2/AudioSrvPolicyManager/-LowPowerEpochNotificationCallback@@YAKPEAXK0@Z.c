/*
 * XREFs of ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180014ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011530 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180039098 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 */

__int64 __fastcall LowPowerEpochNotificationCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a3[4] != 4 )
    return 0LL;
  v3 = *(_QWORD *)a3 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v3 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v3 )
    return 0LL;
  v4 = a3[5];
  if ( (v4 != 0) != g_bLowPowerEpoch )
  {
    CApplicationManager::Lock(a1, lpCriticalSection);
    v5 = g_bIsSystemAsleep;
    g_bLowPowerEpoch = v4 != 0;
    if ( !v4 )
      v5 = 1;
    g_bIsSystemAsleep = v5;
    v6 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
                                 1LL,
                                 (void (__cdecl *)())_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_)
                   + 1);
    if ( *v6 > 4u )
    {
      v11 = g_bIsSystemAsleep;
      v12 = g_bLowPowerEpoch;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        byte_180055393,
        v7,
        v8,
        (__int64)&v12,
        (__int64)&v11);
    }
    TsSessionOnLowPowerEpochStateChanged();
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
  }
  return 0LL;
}
