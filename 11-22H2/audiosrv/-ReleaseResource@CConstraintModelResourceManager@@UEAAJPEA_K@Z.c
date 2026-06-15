/*
 * XREFs of ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800149A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FD84 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1800E9CA0 (WPP_SF_D.c)
 *     ??0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z @ 0x1800FE644 (--0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1800FE768 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800FFBF4 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800FFC18 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x1800FFF8C (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAPEAU3@@Z @ 0x180100138 (-GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_Re.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x180101B44 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180101E4C (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     WPP_SF_I @ 0x1801026F4 (WPP_SF_I.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::ReleaseResource(
        CConstraintModelResourceManager *this,
        unsigned __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *i; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // r15
  __int64 v12; // rbx
  const struct ResourceHandleInfo *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  int StreamResourceConsumption; // r14d
  struct _ResourceInfo *v18; // rax
  struct _ResourceInfo *v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  struct IMMDevice *v23; // [rsp+40h] [rbp-C0h] BYREF
  struct _ResourceInfo *v24; // [rsp+48h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+58h] [rbp-A8h]
  LPCRITICAL_SECTION v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+68h] [rbp-98h]
  LPCRITICAL_SECTION v29; // [rsp+70h] [rbp-90h] BYREF
  char v30; // [rsp+78h] [rbp-88h]
  struct _GUID v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  int v33; // [rsp+98h] [rbp-68h]
  _BYTE v34[256]; // [rsp+9Ch] [rbp-64h] BYREF
  struct _GUID v35; // [rsp+19Ch] [rbp+9Ch]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v36; // [rsp+1B0h] [rbp+B0h]
  unsigned __int16 v37[201]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v38[261]; // [rsp+34Ah] [rbp+24Ah] BYREF
  unsigned int v39; // [rsp+554h] [rbp+454h]
  int v40; // [rsp+55Ch] [rbp+45Ch]
  unsigned int v41; // [rsp+560h] [rbp+460h]
  __int64 v42; // [rsp+568h] [rbp+468h] BYREF
  _BYTE v43[944]; // [rsp+570h] [rbp+470h] BYREF

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &v29,
    (char *)this + 64);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &lpCriticalSection,
    (char *)this + 232);
  for ( i = (_QWORD *)*((_QWORD *)this + 34); i; i = (_QWORD *)*i )
  {
    v9 = i[2];
    if ( a2 == *(unsigned __int64 **)(v9 + 8) )
      *(_DWORD *)(v9 + 16) = 1;
  }
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !*a2 )
    goto LABEL_41;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &v27,
    (char *)this + 120);
  v11 = (__int64 *)((char *)this + 160);
  v12 = *((_QWORD *)this + 20);
  v22 = v12;
  while ( v12 )
  {
    v13 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                               v10,
                                               v12);
    ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)&v32, v13);
    if ( *a2 == v32 )
    {
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt((char *)this + 160, v12);
      if ( v40 )
      {
        LODWORD(v23) = 0;
        v21 = -1;
        ExclusiveEndpointInfo::ExclusiveEndpointInfo((ExclusiveEndpointInfo *)v43, v37, v38, v39);
        CConstraintModelResourceManager::GetEndpointStatus(
          this,
          (const struct ExclusiveEndpointInfo *)v43,
          0,
          (int *)&v23,
          &v21);
        if ( (_DWORD)v23 )
        {
          v16 = v21;
          if ( v21 != *(_DWORD *)(v42 + 16) )
          {
            v22 = 0LL;
            StreamResourceConsumption = (*(__int64 (__fastcall **)(PVOID, _BYTE *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                          g_pEndpointCharacteristicsCache,
                                          v34,
                                          0LL,
                                          0LL,
                                          &v22);
            v21 = 0;
            v18 = 0LL;
            v24 = 0LL;
            if ( StreamResourceConsumption >= 0 )
            {
              v23 = 0LL;
              wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>(v22 + 40, &v23);
              v31 = v35;
              StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(
                                            *((CConstraintModel **)this + 2),
                                            v23,
                                            &v31,
                                            v36,
                                            &v21,
                                            &v24);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v23);
              v18 = v24;
            }
            v19 = 0LL;
            v24 = 0LL;
            if ( StreamResourceConsumption >= 0 )
            {
              StreamResourceConsumption = CConstraintModelResourceManager::GetResourceGroupConsumptionInfo(
                                            &v24,
                                            v41,
                                            v18);
              v19 = v24;
            }
            if ( StreamResourceConsumption >= 0
              && (int)CConstraintModelResourceManager::ReacquireResourceHandle(
                        this,
                        *(_QWORD *)(v42 + 24),
                        v19,
                        1u,
                        v16,
                        (unsigned __int64 *)&lpCriticalSection) >= 0 )
            {
              v20 = v42;
              *(_QWORD *)(v42 + 24) = lpCriticalSection;
              *(_DWORD *)(v20 + 16) = v16;
            }
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
          }
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v42, v15);
      if ( v33 != 1 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
        break;
      }
      v12 = *v11;
      v22 = *v11;
    }
    else
    {
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v14, &v22);
      v12 = v22;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
  }
  v4 = RmReleaseResources(*a2);
  if ( v28 )
    LeaveCriticalSection(v27);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids,
        (unsigned int)v4);
    }
  }
  else
  {
LABEL_41:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, *a2);
    }
  }
  if ( v30 )
    LeaveCriticalSection(v29);
  return (unsigned int)v4;
}
