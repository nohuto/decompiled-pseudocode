/*
 * XREFs of ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180011F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x18000CC44 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FD84 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1800E9CA0 (WPP_SF_D.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800FEF1C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800FF19C (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF204 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800FFFBC (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1801005EC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     WPP_SF_dI @ 0x180102E1C (WPP_SF_dI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct _GUID *a3,
        __int32 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  int EndpointInformationFromId; // edi
  unsigned __int64 v9; // r13
  struct _ResourceInfo *v10; // rsi
  char v11; // bl
  __int64 v12; // r8
  struct IMMDevice *v13; // rbx
  __int32 v14; // r15d
  CConstraintModel *v15; // rcx
  int StreamResourceConsumption; // eax
  CConstraintModel *v17; // rcx
  int v18; // r9d
  unsigned int v19; // r15d
  int v20; // eax
  __int64 v21; // rcx
  int ResourceConsumptionInfoInGroup; // eax
  LPCRITICAL_SECTION v23; // rbx
  int v24; // eax
  int v25; // eax
  struct CEndpointCharacteristics *v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  const unsigned __int16 *v29; // r8
  unsigned int v31; // [rsp+28h] [rbp-D8h]
  unsigned int v33; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A0h] BYREF
  char v36; // [rsp+68h] [rbp-98h]
  struct IMMDevice *v37; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID *v38; // [rsp+78h] [rbp-88h]
  struct CEndpointCharacteristics *v39; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v40; // [rsp+88h] [rbp-78h]
  LPCRITICAL_SECTION v41; // [rsp+90h] [rbp-70h] BYREF
  char v42; // [rsp+98h] [rbp-68h]
  struct _GUID v43; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  int v45; // [rsp+B8h] [rbp-48h]
  unsigned __int16 v46[128]; // [rsp+BCh] [rbp-44h] BYREF
  struct _GUID v47; // [rsp+1BCh] [rbp+BCh]
  int v48; // [rsp+1CCh] [rbp+CCh]
  __int32 v49; // [rsp+1D0h] [rbp+D0h]
  unsigned __int16 v50[201]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 v51[261]; // [rsp+36Ah] [rbp+26Ah] BYREF
  unsigned int v52[5]; // [rsp+574h] [rbp+474h] BYREF
  __int64 v53; // [rsp+588h] [rbp+488h] BYREF

  v39 = a2;
  v38 = a3;
  v40 = a6;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &v41,
    (char *)this + 24);
  EndpointInformationFromId = 0;
  memset_0(&v44, 0, 0x4D8uLL);
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v53 = 0LL;
  v34 = 0LL;
  v33 = 0;
  lpCriticalSection = 0LL;
  if ( *((_DWORD *)a2 + 16) || (v11 = 1, *((_BYTE *)a2 + 8234)) )
    v11 = 0;
  v37 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((char *)a2 + 40, &v37);
  if ( !v11 )
    goto LABEL_22;
  v13 = v37;
  v14 = a4;
  v15 = (CConstraintModel *)*((_QWORD *)this + 2);
  v43 = *v38;
  StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(
                                v15,
                                v37,
                                &v43,
                                a4,
                                &v33,
                                (struct _ResourceInfo **)&lpCriticalSection);
  v10 = (struct _ResourceInfo *)lpCriticalSection;
  EndpointInformationFromId = StreamResourceConsumption;
  if ( StreamResourceConsumption >= 0 )
  {
    v19 = v33;
    if ( !v33 )
    {
LABEL_22:
      *v40 = v9;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, v12, a5, v9);
      }
      goto LABEL_26;
    }
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v17, v13, v50, v18, v51, v31, v52);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_31;
    v20 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v39 + 56LL))(v39);
    EndpointInformationFromId = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
                                  this,
                                  v50,
                                  v51,
                                  v52[0],
                                  a5,
                                  v20,
                                  0);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_31;
    EndpointInformationFromId = CConstraintModelResourceManager::AssignResourceGroup(
                                  this,
                                  v13,
                                  v50,
                                  v51,
                                  v52[0],
                                  v10,
                                  v19,
                                  a5,
                                  0,
                                  (struct ResourceHandleInfo *)&v44);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_31;
    if ( v52[2] )
    {
      v33 = 0;
      lpCriticalSection = 0LL;
      ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                         v21,
                                         v52[3],
                                         v10,
                                         v19);
      v23 = lpCriticalSection;
      EndpointInformationFromId = ResourceConsumptionInfoInGroup;
      if ( ResourceConsumptionInfoInGroup >= 0 )
      {
        v24 = CConstraintModelResourceManager::AcquireResourceHandle(
                this,
                (struct _ResourceInfo *)lpCriticalSection,
                v33,
                a5,
                0,
                &v34);
        v9 = v34;
        EndpointInformationFromId = v24;
      }
      if ( v23 )
        operator delete(v23);
    }
    else
    {
      v25 = CConstraintModelResourceManager::AcquireResourceHandle(this, v10, v19, a5, 0, &v34);
      v9 = v34;
      EndpointInformationFromId = v25;
    }
    if ( EndpointInformationFromId < 0 )
    {
LABEL_31:
      v14 = a4;
    }
    else
    {
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        &lpCriticalSection,
        (char *)this + 120);
      v26 = v39;
      v27 = *(_QWORD *)v39;
      v47 = *v38;
      v28 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(v27 + 56))(v39);
      v29 = (const unsigned __int16 *)*((_QWORD *)v26 + 6);
      v14 = a4;
      v45 = 0;
      v48 = v28;
      v49 = a4;
      v44 = v9;
      v52[1] = a5;
      EndpointInformationFromId = StringCchCopyW(v46, 0x80uLL, v29);
      if ( EndpointInformationFromId >= 0 )
        ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead((char *)this + 160, &v44);
      if ( v36 )
        LeaveCriticalSection(lpCriticalSection);
      if ( EndpointInformationFromId >= 0 )
        goto LABEL_22;
    }
  }
  if ( EndpointInformationFromId == -2005139335 && v14 == 1 )
    EndpointInformationFromId = -2005139370;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      28LL,
      &WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids,
      (unsigned int)EndpointInformationFromId);
  }
LABEL_26:
  if ( v10 )
    operator delete(v10);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v53);
  if ( v42 )
    LeaveCriticalSection(v41);
  return (unsigned int)EndpointInformationFromId;
}
