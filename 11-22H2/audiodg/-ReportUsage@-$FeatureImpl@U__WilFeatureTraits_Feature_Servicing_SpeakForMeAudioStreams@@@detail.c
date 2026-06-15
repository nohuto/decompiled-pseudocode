/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x14002AA80
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14002A6D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudi.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x14002AB64 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     wil_details_MapReportingKind @ 0x14002B0C4 (wil_details_MapReportingKind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // r10d
  __int64 v8; // rdx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v10; // [rsp+30h] [rbp-48h]
  signed __int32 v11[10]; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+80h] [rbp+8h] BYREF
  char v13; // [rsp+84h] [rbp+Ch]
  int v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h]

  v15 = a4;
  LOBYTE(v14) = a3;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v15 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetCachedFeatureEnabledState(
                       a1,
                       v11);
  v13 = 1;
  v12 = 0;
  v14 = 3;
  v6 = wil_details_MapReportingKind(3LL, v5);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     (char *)a1 + 8,
                                                                                                     v8,
                                                                                                     (v7 >> 10) & 1,
                                                                                                     (v7 >> 11) & 1,
                                                                                                     v6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v10 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(53104070LL, &v12, 0LL, v5, &v14, 0LL, v10, 1LL);
    }
  }
  return result;
}
