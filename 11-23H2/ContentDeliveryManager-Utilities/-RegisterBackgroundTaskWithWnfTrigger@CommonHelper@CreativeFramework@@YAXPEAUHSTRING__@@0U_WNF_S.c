/*
 * XREFs of ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D351C
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180098970 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18002B3B8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003E2A0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E8B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800D2808 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 */

// Hidden C++ exception states: #wind=3
void CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  bool v4; // dl
  int v5; // eax
  int v6; // ebx
  std::_Ref_count_base *v7; // rcx
  struct DiagnosticsInfo *v8; // [rsp+28h] [rbp-91h] BYREF
  int v9[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v10[2]; // [rsp+40h] [rbp-79h] BYREF
  const char *v11; // [rsp+48h] [rbp-71h]
  __int64 v12; // [rsp+50h] [rbp-69h]
  __int16 v13; // [rsp+58h] [rbp-61h]
  _QWORD v14[10]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+37h]
  __int64 v17; // [rsp+F8h] [rbp+3Fh] BYREF
  __int64 v18; // [rsp+100h] [rbp+47h] BYREF
  va_list va; // [rsp+110h] [rbp+57h]
  __int64 v20; // [rsp+110h] [rbp+57h] BYREF
  __int64 v21; // [rsp+118h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+118h] [rbp+5Fh]
  __int64 v23; // [rsp+120h] [rbp+67h] BYREF
  va_list va2; // [rsp+120h] [rbp+67h]
  __int64 v25; // [rsp+128h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+128h] [rbp+6Fh]
  __int64 v27; // [rsp+130h] [rbp+77h]
  va_list va4; // [rsp+138h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  v27 = va_arg(va4, _QWORD);
  v18 = a2;
  v17 = a1;
  v15 = a3;
  v3 = v27;
  v14[9] = v27;
  LOBYTE(v8) = 0;
  v14[0] = &v15;
  va_copy((va_list)&v14[1], va1);
  va_copy((va_list)&v14[2], va);
  va_copy((va_list)&v14[3], va3);
  v14[4] = &v17;
  v14[5] = &v18;
  va_copy((va_list)&v14[6], va2);
  v14[7] = &v8;
  v14[8] = v27;
  *(_QWORD *)v10 = retaddr;
  v11 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp";
  v12 = 0LL;
  v13 = 228;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u,
    v20);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v9, v4);
  v5 = lambda_633962cfafa552d6328dcc010e2c57bd_::operator()((__int64)v14);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v5,
      (__int64)v9,
      (struct wil::ThreadErrorContext *)0x79780D,
      (__int64)v10);
  if ( *(_QWORD *)v9 )
    *(_DWORD *)(*(_QWORD *)v9 + 16LL) = v9[3];
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6,
      (int)v8);
  v7 = *(std::_Ref_count_base **)(v3 + 8);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
