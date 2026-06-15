/*
 * XREFs of ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x18000CC44 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FD84 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800814EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800FEECC (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF1B4 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800FFF6C (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x18010059C (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 */

_BOOL8 __fastcall CConstraintModelResourceManager::QueryAvailabilitySaDeviceResource(
        CConstraintModelResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct _GUID *a3,
        __int32 a4,
        unsigned int a5)
{
  bool v9; // bl
  signed int v10; // edi
  struct _ResourceInfo *v11; // rsi
  struct IMMDevice *v12; // rbx
  CConstraintModel *v13; // rcx
  int StreamResourceConsumption; // eax
  CConstraintModel *v15; // rcx
  int v16; // r9d
  __int64 v17; // rdx
  BOOL v18; // edi
  unsigned int v20; // r12d
  int v21; // eax
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 *v32; // rdx
  int ResourceConsumptionInfoInGroup; // eax
  __int64 v34; // rcx
  struct _ResourceInfo *v35; // rbx
  _DWORD *v36; // rcx
  unsigned int v37; // [rsp+28h] [rbp-D8h]
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  struct IMMDevice *v41; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v42; // [rsp+70h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-80h] BYREF
  char v44; // [rsp+88h] [rbp-78h]
  _BYTE v45[296]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v46[201]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v47[261]; // [rsp+34Ah] [rbp+24Ah] BYREF
  unsigned int v48[5]; // [rsp+554h] [rbp+454h] BYREF
  __int64 v49; // [rsp+568h] [rbp+468h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5C8h] [rbp+4C8h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v9 = 0;
  v10 = 0;
  memset_0(v45, 0, 0x4D8uLL);
  v11 = 0LL;
  v49 = 0LL;
  v40 = 0LL;
  v38 = 0;
  v39 = 0LL;
  if ( !*((_DWORD *)a2 + 16) )
    v9 = *((_BYTE *)a2 + 8234) == 0;
  v41 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((__int64 *)a2 + 5, &v41);
  if ( v9 )
  {
    v12 = v41;
    v13 = (CConstraintModel *)*((_QWORD *)this + 2);
    v42 = *a3;
    StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v13, v41, &v42, a4, &v38, &v39);
    v10 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
    {
      v17 = 1506LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)(unsigned int)StreamResourceConsumption);
LABEL_7:
      v11 = v39;
      goto LABEL_8;
    }
    v20 = v38;
    if ( !v38 )
      goto LABEL_7;
    StreamResourceConsumption = CConstraintModel::GetEndpointInformationFromId(v15, v12, v46, v16, v47, v37, v48);
    v10 = StreamResourceConsumption;
    if ( StreamResourceConsumption < 0 )
    {
      v17 = 1518LL;
      goto LABEL_6;
    }
    v21 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2);
    v10 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
            (__int64)this,
            (__int64)v46,
            (__int64)v47,
            v48[0],
            a5,
            v21,
            1);
    if ( v10 < 0 )
    {
      v23 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v22,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v23 > 4u && tlgKeywordOn((__int64)v23, 512LL) )
      {
        *(_QWORD *)&v42.Data1 = *((_QWORD *)a2 + 6);
        v38 = v10;
        LODWORD(v40) = a5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v24,
          byte_180192726,
          v25,
          v26,
          (const WCHAR **)&v42,
          (__int64)&v40,
          (__int64)&v38);
      }
      goto LABEL_7;
    }
    v11 = v39;
    v10 = CConstraintModelResourceManager::AssignResourceGroup(
            (struct _RTL_CRITICAL_SECTION *)this,
            v12,
            (char *)v46,
            v47,
            v48[0],
            v39,
            v20,
            a5,
            1,
            (struct ResourceHandleInfo *)v45);
    if ( v10 >= 0 )
    {
      if ( v48[2] )
      {
        v38 = 0;
        v39 = 0LL;
        ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                           v27,
                                           v48[3],
                                           (__int64)v11,
                                           v20,
                                           &v38,
                                           &v39);
        v35 = v39;
        v10 = ResourceConsumptionInfoInGroup;
        if ( ResourceConsumptionInfoInGroup >= 0 )
          v10 = CConstraintModelResourceManager::AcquireResourceHandle(this, v39, v38, a5, 1, &v40);
        if ( v35 )
          operator delete(v35);
      }
      else
      {
        v10 = CConstraintModelResourceManager::AcquireResourceHandle(this, v11, v20, a5, 1, &v40);
      }
      if ( v10 < 0 )
      {
        v36 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v34,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *v36 > 4u )
        {
          if ( tlgKeywordOn((__int64)v36, 512LL) )
          {
            v32 = (unsigned __int8 *)&unk_18019262E;
            goto LABEL_24;
          }
        }
      }
    }
    else
    {
      v28 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v27,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v28 > 4u && tlgKeywordOn((__int64)v28, 512LL) )
      {
        v32 = (unsigned __int8 *)&unk_1801926A7;
LABEL_24:
        *(_QWORD *)&v42.Data1 = *((_QWORD *)a2 + 6);
        v38 = a5;
        LODWORD(v40) = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v29,
          v32,
          v30,
          v31,
          (const WCHAR **)&v42,
          (__int64)&v38,
          (__int64)&v40);
      }
    }
  }
LABEL_8:
  if ( v11 )
    operator delete(v11);
  v18 = v10 >= 0;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
  if ( v44 )
    LeaveCriticalSection(lpCriticalSection);
  return v18;
}
