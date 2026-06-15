/*
 * XREFs of ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x18010CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800286F8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x180028A10 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C22EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x18010A13C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x18010A530 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x18010B690 (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x18010BCBC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 */

_BOOL8 __fastcall CConstraintModelResourceManager::QueryAvailabilitySaDeviceResource(
        CConstraintModelResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct _GUID *a3,
        unsigned __int32 a4,
        unsigned int a5)
{
  signed int v9; // edi
  char v10; // si
  struct IMMDevice *v11; // rbx
  CConstraintModel *v12; // rcx
  int StreamResourceConsumption; // eax
  CConstraintModel *v14; // rcx
  int v15; // r9d
  struct _ResourceInfo *v16; // r12
  __int64 v17; // rdx
  unsigned int v18; // r15d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 *v27; // rdx
  int ResourceConsumptionInfoInGroup; // eax
  __int64 v29; // rcx
  struct _ResourceInfo *v30; // rbx
  BOOL v31; // edi
  unsigned int v33; // [rsp+28h] [rbp-D8h]
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  struct IMMDevice *v37; // [rsp+68h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-90h] BYREF
  char v39; // [rsp+78h] [rbp-88h]
  struct _GUID v40; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v41[296]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v42[201]; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _RTL_CRITICAL_SECTION v43[13]; // [rsp+34Ah] [rbp+24Ah] BYREF
  unsigned int v44[5]; // [rsp+554h] [rbp+454h] BYREF
  __int64 v45; // [rsp+568h] [rbp+468h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5C8h] [rbp+4C8h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v9 = 0;
  memset_0(v41, 0, 0x4D8uLL);
  v45 = 0LL;
  v36 = 0LL;
  v34 = 0;
  v35 = 0LL;
  if ( *((_DWORD *)a2 + 8) || (v10 = 1, *((_BYTE *)a2 + 9726)) )
    v10 = 0;
  v11 = (struct IMMDevice *)*((_QWORD *)a2 + 2);
  v37 = v11;
  ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->AddRef)(v11);
  if ( v10 )
  {
    v12 = (CConstraintModel *)*((_QWORD *)this + 2);
    v40 = *a3;
    StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v12, v11, &v40, a4, &v34, &v35);
    v16 = v35;
    v9 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
    {
      v17 = 1436LL;
LABEL_10:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)StreamResourceConsumption);
      goto LABEL_33;
    }
    v18 = v34;
    if ( !v34 )
      goto LABEL_33;
    StreamResourceConsumption = CConstraintModel::GetEndpointInformationFromId(
                                  v14,
                                  v11,
                                  v42,
                                  v15,
                                  (unsigned __int16 *)v43,
                                  v33,
                                  v44);
    v9 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
    {
      v17 = 1448LL;
      goto LABEL_10;
    }
    v19 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2);
    v9 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
           (__int64)this,
           (__int64)v42,
           (__int64)v43,
           v44[0],
           a5,
           v19,
           1);
    if ( v9 < 0 )
    {
      v21 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v20,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v21 > 4u
        && (*(_DWORD *)(v21 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v21 + 24) & 0x200LL) == *(_QWORD *)(v21 + 24) )
      {
        v36 = *((_QWORD *)a2 + 3);
        v34 = v9;
        LODWORD(v35) = a5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v21,
          byte_18018B3C2,
          v21,
          v22,
          (void **)&v36,
          (__int64)&v35,
          (__int64)&v34);
      }
      goto LABEL_33;
    }
    v9 = CConstraintModelResourceManager::AssignResourceGroup(
           (struct _RTL_CRITICAL_SECTION *)this,
           v11,
           (char *)v42,
           v43,
           v44[0],
           v16,
           v18,
           a5,
           1,
           (struct ResourceHandleInfo *)v41);
    if ( v9 >= 0 )
    {
      if ( v44[2] )
      {
        v34 = 0;
        v35 = 0LL;
        ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                           v23,
                                           v44[3],
                                           (__int64)v16,
                                           v18,
                                           &v34,
                                           &v35);
        v30 = v35;
        v9 = ResourceConsumptionInfoInGroup;
        if ( ResourceConsumptionInfoInGroup >= 0 )
          v9 = CConstraintModelResourceManager::AcquireResourceHandle(this, v35, v34, a5, 1, &v36);
        if ( v30 )
          operator delete(v30);
      }
      else
      {
        v9 = CConstraintModelResourceManager::AcquireResourceHandle(this, v16, v18, a5, 1, &v36);
      }
      if ( v9 >= 0 )
        goto LABEL_33;
      v24 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v29,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v24 <= 4u
        || (*(_DWORD *)(v24 + 16) & 0x200LL) == 0
        || (*(_QWORD *)(v24 + 24) & 0x200LL) != *(_QWORD *)(v24 + 24) )
      {
        goto LABEL_33;
      }
      v27 = (unsigned __int8 *)&unk_18018B2CA;
    }
    else
    {
      v24 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v23,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v24 <= 4u
        || (*(_DWORD *)(v24 + 16) & 0x200LL) == 0
        || (*(_QWORD *)(v24 + 24) & 0x200LL) != *(_QWORD *)(v24 + 24) )
      {
LABEL_33:
        if ( v16 )
          operator delete(v16);
        goto LABEL_35;
      }
      v27 = (unsigned __int8 *)&unk_18018B343;
    }
    v36 = *((_QWORD *)a2 + 3);
    v34 = a5;
    LODWORD(v35) = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v24,
      v27,
      v25,
      v26,
      (void **)&v36,
      (__int64)&v34,
      (__int64)&v35);
    goto LABEL_33;
  }
LABEL_35:
  v31 = v9 >= 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v45);
  if ( v39 )
    LeaveCriticalSection(lpCriticalSection);
  return v31;
}
