/*
 * XREFs of ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x18010D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800286F8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z @ 0x1801098A0 (--0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1801099C4 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x18010B2C8 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x18010B2EC (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x18010B660 (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAPEAU3@@Z @ 0x18010B808 (-GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_Re.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x18010D2A0 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18010D9E8 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     WPP_SF_I @ 0x18010E4B8 (WPP_SF_I.c)
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
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 v11; // rbx
  const struct ResourceHandleInfo *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  int StreamResourceConsumption; // ebx
  unsigned int v16; // r9d
  struct _ResourceInfo *v17; // rax
  struct IMMDevice *v18; // rbx
  struct _ResourceInfo *v19; // r8
  __int64 v20; // rcx
  unsigned int v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v23[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct _ResourceInfo *v24; // [rsp+40h] [rbp-C0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-B8h] BYREF
  char v26; // [rsp+50h] [rbp-B0h]
  struct IMMDevice *v27; // [rsp+58h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION v28; // [rsp+60h] [rbp-A0h] BYREF
  char v29; // [rsp+68h] [rbp-98h]
  LPCRITICAL_SECTION v30; // [rsp+70h] [rbp-90h] BYREF
  char v31; // [rsp+78h] [rbp-88h]
  struct _GUID v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  int v34; // [rsp+98h] [rbp-68h]
  _BYTE v35[256]; // [rsp+9Ch] [rbp-64h] BYREF
  struct _GUID v36; // [rsp+19Ch] [rbp+9Ch]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // [rsp+1B0h] [rbp+B0h]
  unsigned __int16 v38[201]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int16 v39[261]; // [rsp+34Ah] [rbp+24Ah] BYREF
  unsigned int v40; // [rsp+554h] [rbp+454h]
  int v41; // [rsp+55Ch] [rbp+45Ch]
  int v42; // [rsp+560h] [rbp+460h]
  __int64 v43; // [rsp+568h] [rbp+468h] BYREF
  _BYTE v44[944]; // [rsp+570h] [rbp+470h] BYREF

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v30,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  for ( i = (_QWORD *)*((_QWORD *)this + 34); i; i = (_QWORD *)*i )
  {
    v8 = i[2];
    if ( a2 == *(unsigned __int64 **)(v8 + 8) )
      *(_DWORD *)(v8 + 16) = 1;
  }
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !*a2 )
    goto LABEL_38;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v28,
    (struct _RTL_CRITICAL_SECTION *)this + 3);
  v10 = (__int64 *)((char *)this + 160);
  v11 = *((_QWORD *)this + 20);
  *(_QWORD *)v22 = v11;
  while ( v11 )
  {
    v12 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                               v9,
                                               v11);
    ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)&v33, v12);
    if ( *a2 == v33 )
    {
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt((char *)this + 160, v11);
      if ( v41 )
      {
        v23[0] = 0;
        v22[0] = -1;
        ExclusiveEndpointInfo::ExclusiveEndpointInfo((ExclusiveEndpointInfo *)v44, (char *)v38, (char *)v39, v40);
        CConstraintModelResourceManager::GetEndpointStatus(
          (struct _RTL_CRITICAL_SECTION *)this,
          (const struct ExclusiveEndpointInfo *)v44,
          0,
          v23,
          v22);
        if ( v23[0] )
        {
          v14 = v22[0];
          if ( v22[0] != *(_DWORD *)(v43 + 16) )
          {
            *(_QWORD *)v23 = 0LL;
            StreamResourceConsumption = (*(__int64 (__fastcall **)(PVOID, _BYTE *, _QWORD, _QWORD, int *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                          g_pEndpointCharacteristicsCache,
                                          v35,
                                          0LL,
                                          0LL,
                                          v23);
            v16 = 0;
            v22[0] = 0;
            v17 = 0LL;
            v24 = 0LL;
            if ( StreamResourceConsumption >= 0 )
            {
              v18 = *(struct IMMDevice **)(*(_QWORD *)v23 + 16LL);
              v27 = v18;
              ((void (__fastcall *)(struct IMMDevice *))v18->lpVtbl->AddRef)(v18);
              v32 = v36;
              StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(
                                            *((CConstraintModel **)this + 2),
                                            v18,
                                            &v32,
                                            v37,
                                            v22,
                                            &v24);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
              v16 = v22[0];
              v17 = v24;
            }
            v19 = 0LL;
            v24 = 0LL;
            if ( StreamResourceConsumption >= 0 )
            {
              StreamResourceConsumption = CConstraintModelResourceManager::GetResourceGroupConsumptionInfo(
                                            (__int64)&v24,
                                            v42,
                                            v17,
                                            v16,
                                            &v24);
              v19 = v24;
            }
            if ( StreamResourceConsumption >= 0
              && (int)CConstraintModelResourceManager::ReacquireResourceHandle(
                        this,
                        *(_QWORD *)(v43 + 24),
                        v19,
                        1u,
                        v14,
                        (unsigned __int64 *)&lpCriticalSection) >= 0 )
            {
              v20 = v43;
              *(_QWORD *)(v43 + 24) = lpCriticalSection;
              *(_DWORD *)(v20 + 16) = v14;
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
          }
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v43);
      if ( v34 != 1 )
      {
        wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v43);
        break;
      }
      v11 = *v10;
      *(_QWORD *)v22 = *v10;
    }
    else
    {
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v13, (_QWORD **)v22);
      v11 = *(_QWORD *)v22;
    }
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v43);
  }
  v4 = RmReleaseResources(*a2);
  if ( v29 )
    LeaveCriticalSection(v28);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_57553648dc9d3a5078fc664d84c702c1_Traceguids,
        v4);
    }
  }
  else
  {
LABEL_38:
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, *a2);
    }
  }
  if ( v31 )
    LeaveCriticalSection(v30);
  return (unsigned int)v4;
}
