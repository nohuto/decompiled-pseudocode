/*
 * XREFs of ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180065D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18000F8D0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@Z @ 0x18000FDA8 (-EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@.c)
 *     ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x18000FEF8 (-GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800286F8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x180028A10 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x18010A13C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x18010A3BC (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x18010A530 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x18010B690 (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x18010BCBC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     WPP_SF_dI @ 0x18010E87C (WPP_SF_dI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  int EndpointInformationFromId; // edi
  unsigned __int64 v9; // r12
  struct _ResourceInfo *v10; // rsi
  CConstraintModelResourceManager *v11; // rcx
  bool v12; // bl
  __int64 v13; // r8
  struct IMMDevice *v14; // rbx
  CConstraintModel *v15; // rcx
  int StreamResourceConsumption; // eax
  CConstraintModel *v17; // rcx
  int v18; // r9d
  unsigned int v19; // r15d
  int v20; // eax
  int ResourceConsumptionInfoInGroup; // eax
  struct _ResourceInfo *v22; // rbx
  int v23; // eax
  int v24; // eax
  struct CEndpointCharacteristics *v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  char *v28; // r8
  unsigned int v30; // [rsp+28h] [rbp-D8h]
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v32; // [rsp+54h] [rbp-ACh]
  struct _ResourceInfo *v33; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  struct IMMDevice *v35; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID *v36; // [rsp+70h] [rbp-90h]
  struct CEndpointCharacteristics *v37; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v38; // [rsp+80h] [rbp-80h]
  struct _GUID v39; // [rsp+90h] [rbp-70h] BYREF
  LPCRITICAL_SECTION v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+B8h] [rbp-48h]
  unsigned __int16 v43[128]; // [rsp+BCh] [rbp-44h] BYREF
  struct _GUID v44; // [rsp+1BCh] [rbp+BCh]
  int v45; // [rsp+1CCh] [rbp+CCh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v46; // [rsp+1D0h] [rbp+D0h]
  unsigned __int16 v47[201]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 v48[261]; // [rsp+36Ah] [rbp+26Ah] BYREF
  unsigned int v49[5]; // [rsp+574h] [rbp+474h] BYREF
  __int64 v50; // [rsp+588h] [rbp+488h] BYREF

  v37 = a2;
  v32 = a4;
  v36 = a3;
  v38 = a6;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v40,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  EndpointInformationFromId = 0;
  memset_0(&v41, 0, 0x4D8uLL);
  v50 = 0LL;
  *a6 = 0LL;
  v9 = 0LL;
  v34 = 0LL;
  v10 = 0LL;
  v31 = 0;
  v33 = 0LL;
  v35 = 0LL;
  v12 = CConstraintModelResourceManager::EndpointResourceValidity(v11, a2);
  CEndpointCharacteristics::GetMMDevice(a2, &v35);
  if ( !v12 )
    goto LABEL_21;
  v14 = v35;
  v15 = (CConstraintModel *)*((_QWORD *)this + 2);
  v39 = *v36;
  StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(v15, v35, &v39, v32, &v31, &v33);
  v10 = v33;
  EndpointInformationFromId = StreamResourceConsumption;
  if ( StreamResourceConsumption < 0 )
    goto LABEL_19;
  v19 = v31;
  if ( !v31 )
    goto LABEL_21;
  EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v17, v14, v47, v18, v48, v30, v49);
  if ( EndpointInformationFromId < 0 )
    goto LABEL_19;
  v20 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v37 + 56LL))(v37);
  EndpointInformationFromId = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
                                this,
                                v47,
                                v48,
                                v49[0],
                                a5,
                                v20,
                                0);
  if ( EndpointInformationFromId < 0 )
    goto LABEL_19;
  EndpointInformationFromId = CConstraintModelResourceManager::AssignResourceGroup(
                                this,
                                v14,
                                v47,
                                v48,
                                v49[0],
                                v10,
                                v19,
                                a5,
                                0,
                                (struct ResourceHandleInfo *)&v41);
  if ( EndpointInformationFromId < 0 )
    goto LABEL_19;
  if ( v49[2] )
  {
    v31 = 0;
    v33 = 0LL;
    ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                       0LL,
                                       v49[3],
                                       v10,
                                       v19);
    v22 = v33;
    EndpointInformationFromId = ResourceConsumptionInfoInGroup;
    if ( ResourceConsumptionInfoInGroup >= 0 )
    {
      v23 = CConstraintModelResourceManager::AcquireResourceHandle(this, v33, v31, a5, 0, &v34);
      v9 = v34;
      EndpointInformationFromId = v23;
    }
    if ( v22 )
      operator delete(v22);
  }
  else
  {
    v24 = CConstraintModelResourceManager::AcquireResourceHandle(this, v10, v19, a5, 0, &v34);
    v9 = v34;
    EndpointInformationFromId = v24;
  }
  if ( EndpointInformationFromId < 0 )
    goto LABEL_19;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v39,
    (struct _RTL_CRITICAL_SECTION *)this + 3);
  v25 = v37;
  v26 = *(_QWORD *)v37;
  v44 = *v36;
  v27 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(v26 + 56))(v37);
  v28 = (char *)*((_QWORD *)v25 + 3);
  v42 = 0;
  v45 = v27;
  v46 = v32;
  v41 = v9;
  v49[1] = a5;
  EndpointInformationFromId = StringCchCopyW((char *)v43, 128LL, v28);
  if ( EndpointInformationFromId >= 0 )
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead((char *)this + 160, &v41);
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v39);
  if ( EndpointInformationFromId < 0 )
  {
LABEL_19:
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        24LL,
        &WPP_57553648dc9d3a5078fc664d84c702c1_Traceguids,
        (unsigned int)EndpointInformationFromId);
    }
  }
  else
  {
LABEL_21:
    *v38 = v9;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, v13, a5, v9);
    }
  }
  if ( v10 )
    operator delete(v10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v50);
  ATL::CCritSecLock::~CCritSecLock(v40);
  return (unsigned int)EndpointInformationFromId;
}
