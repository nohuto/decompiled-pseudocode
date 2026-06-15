/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818
 * Callers:
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003CBD0 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180057E7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x180058044 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x18005DCB0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800EB190 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     _lambda_02cf54438168803f227ee4e991ef3551_::operator() @ 0x180152EF0 (_lambda_02cf54438168803f227ee4e991ef3551_--operator().c)
 *     _lambda_584c7311ea728c54c4a47fc057f19078_::operator() @ 0x18015306C (_lambda_584c7311ea728c54c4a47fc057f19078_--operator().c)
 *     _lambda_f9bd085ee8be78cd632838852672651f_::operator() @ 0x1801533B8 (_lambda_f9bd085ee8be78cd632838852672651f_--operator().c)
 *     ?StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180156960 (-StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??0?$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z @ 0x1800409CC (--0-$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180040A08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180040A80 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_25a52f7b70a5b2ddb41b08d731639da5___ @ 0x180040BC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_25a52f7b70a5b2ddb41b08d731639da5___.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180040D48 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18004199C (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2)
{
  bool v2; // zf
  HRESULT ApartmentType; // eax
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  AtmosCheck *v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+28h] [rbp-29h]
  bool v13; // [rsp+38h] [rbp-19h] BYREF
  int v14; // [rsp+3Ch] [rbp-15h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp-11h] BYREF
  __int64 v16; // [rsp+48h] [rbp-9h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+50h] [rbp-1h] BYREF
  __m128i si128; // [rsp+58h] [rbp+7h] BYREF
  int v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+6Ch] [rbp+1Bh]
  int v21; // [rsp+70h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+78h] [rbp+27h] BYREF
  int *v23; // [rsp+88h] [rbp+37h]
  bool *v24; // [rsp+90h] [rbp+3Fh]
  char v25; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v14 = 0;
  v2 = *((_BYTE *)this + 96) == 0;
  pAptType = APTTYPE_MTA;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = -2147023728;
  v20 = -2147023728;
  v21 = -2147023728;
  v13 = 0;
  if ( v2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x517,
      (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL,
      v12);
    return 2147549183LL;
  }
  if ( *((_BYTE *)this + 696) )
  {
    if ( (unsigned int)dword_1801C02B0 > 5 )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1801C02B0,
        (unsigned __int8 *)dword_18018F765,
        0LL,
        0LL,
        2u,
        &v22);
    return 0LL;
  }
  if ( !AtmosCheck::IsLicenseEvaluationRequired(this) )
    return 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetImpl'::`2'::impl,
    0LL);
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x548,
      (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)ApartmentType,
      v12);
  wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(&v16, this);
  wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(&v22, v16);
  v25 = a2;
  *(_QWORD *)&v22.Size = &si128;
  v23 = &v14;
  v24 = &v13;
  CurrentThreadId = GetCurrentThreadId();
  v7 = 0LL;
  if ( pAptType == APTTYPE_MTA )
    v7 = 4LL;
  Windows::Internal::ComTaskPool::QueueTask__lambda_25a52f7b70a5b2ddb41b08d731639da5___(v7, 4LL, CurrentThreadId, &v22);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  v9 = v14;
  if ( v14 >= 0 )
  {
    if ( a2 )
    {
      if ( v13 || (v10 = *((_DWORD *)this + 46), v10 == 8) || v10 == 3 )
      {
        if ( *((_QWORD *)this + 5) )
        {
          AtmosCheck::Trace(v8, "Calling AtmosCodecsStatusChanged callback", 0);
          (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
          v9 = v14;
        }
      }
    }
  }
  AtmosCheck::TraceResult(this, v9, v13);
  result = v9;
  *((_DWORD *)this + 46) = 7;
  return result;
}
