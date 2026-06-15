/*
 * XREFs of ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18010AD60
 * Callers:
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x18010E2E4 (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800286F8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x180109D48 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x18010B2C8 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x18010B660 (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x18010B690 (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x18010D2A0 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18010D9E8 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x18010DEE0 (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 *     WPP_SF_ddI @ 0x18010E940 (WPP_SF_ddI.c)
 *     WPP_SF_ddID @ 0x18010E9AC (WPP_SF_ddID.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CConstraintModelResourceManager::DoReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        unsigned int a2,
        unsigned __int64 **a3)
{
  unsigned int v4; // r13d
  int ResourceConsumptionInfoInGroup; // edi
  __int64 v7; // r8
  CEndpointStoreCache *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // r14
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct _ResourceInfo *v17; // rbx
  unsigned __int64 v18; // r12
  struct _RTL_CRITICAL_SECTION *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r9
  LPCRITICAL_SECTION v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned int *v27; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-BCh]
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-98h] BYREF
  char v35; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION v36; // [rsp+78h] [rbp-88h] BYREF
  char v37; // [rsp+80h] [rbp-80h]
  LPCRITICAL_SECTION v38; // [rsp+88h] [rbp-78h] BYREF
  char v39; // [rsp+90h] [rbp-70h]
  LPCRITICAL_SECTION v40; // [rsp+98h] [rbp-68h] BYREF
  char v41; // [rsp+A0h] [rbp-60h]
  LPCRITICAL_SECTION v42; // [rsp+A8h] [rbp-58h] BYREF
  char v43; // [rsp+B0h] [rbp-50h]
  struct _GUID v44; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+D0h] [rbp-30h] BYREF
  char v46[256]; // [rsp+DCh] [rbp-24h] BYREF
  struct _GUID v47; // [rsp+1DCh] [rbp+DCh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v48; // [rsp+1F0h] [rbp+F0h]
  unsigned int v49; // [rsp+598h] [rbp+498h]
  int v50; // [rsp+59Ch] [rbp+49Ch]
  unsigned int v51; // [rsp+5A0h] [rbp+4A0h]
  __int64 v52; // [rsp+5A8h] [rbp+4A8h] BYREF

  v4 = a2;
  v29 = a2;
  ResourceConsumptionInfoInGroup = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v42,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v40,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v9 )
      v10 = 0LL;
    else
      v10 = **a3;
    WPP_SF_ddI(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v7, v4, v9, v10);
    v8 = WPP_GLOBAL_Control;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v11 = *a3;
    if ( **a3 )
    {
      memset_0(&v45, 0, 0x4D8uLL);
      v52 = 0LL;
      v12 = 0;
      v33 = 0LL;
      v36 = (LPCRITICAL_SECTION)((char *)this + 120);
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)this + 3);
      v38 = (LPCRITICAL_SECTION)((char *)this + 160);
      v14 = *((_QWORD *)this + 20);
      v30 = v14;
      while ( v14 )
      {
        v15 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v13, v14);
        ResourceHandleInfo::operator=((__int64)&v45, v15);
        if ( *v11 == v45 )
        {
          v33 = v14;
          v12 = 1;
          break;
        }
        ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v16, &v30);
        v14 = v30;
      }
      v17 = 0LL;
      if ( v35 )
        LeaveCriticalSection(lpCriticalSection);
      if ( !v12 )
        goto LABEL_40;
      v18 = 0LL;
      v31 = 0LL;
      v28 = 0;
      v32 = 0LL;
      v30 = 0LL;
      if ( (*(int (__fastcall **)(PVOID, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                           + 24LL))(
             g_pEndpointCharacteristicsCache,
             v46,
             0LL,
             0LL,
             &v30) >= 0 )
      {
        v19 = *(struct _RTL_CRITICAL_SECTION **)(v30 + 16);
        lpCriticalSection = v19;
        ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v19->DebugInfo->CriticalSection)(v19);
        v44 = v47;
        LODWORD(v19) = CConstraintModel::GetStreamResourceConsumption(
                         *((CConstraintModel **)this + 2),
                         (struct IMMDevice *)v19,
                         &v44,
                         v48,
                         &v28,
                         &v32);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
        if ( (int)v19 >= 0 )
        {
          v21 = v28;
          if ( v28 )
          {
            v17 = v32;
            if ( v50 )
            {
              v28 = 0;
              lpCriticalSection = 0LL;
              v27 = &v28;
              ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                                 v20,
                                                 v51,
                                                 v32,
                                                 v21);
              v22 = lpCriticalSection;
              if ( ResourceConsumptionInfoInGroup >= 0 )
              {
                ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::ReacquireResourceHandle(
                                                   this,
                                                   *v11,
                                                   (struct _ResourceInfo *)lpCriticalSection,
                                                   v28,
                                                   v29,
                                                   &v31);
                v18 = v31;
              }
              if ( v22 )
                operator delete(v22);
              v4 = v29;
            }
            else
            {
              ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::ReacquireResourceHandle(
                                                 this,
                                                 *v11,
                                                 v32,
                                                 v28,
                                                 v4,
                                                 &v31);
              v18 = v31;
            }
            if ( ResourceConsumptionInfoInGroup < 0 )
            {
              ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
                (__int64)&v36,
                v36);
              ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt(v38, v33);
              if ( v37 )
                LeaveCriticalSection(v36);
            }
            else
            {
              v45 = v18;
              v49 = v4;
              ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
                (__int64)&v38,
                v36);
              ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v23, v33, &v45);
              if ( v39 )
                LeaveCriticalSection(v38);
              *v11 = v18;
            }
            goto LABEL_37;
          }
        }
        v17 = v32;
      }
      ResourceConsumptionInfoInGroup = RmReleaseResources(*v11);
LABEL_37:
      if ( v17 )
        operator delete(v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
LABEL_40:
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v52);
      v8 = WPP_GLOBAL_Control;
    }
  }
  if ( v8 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v8 + 7) & 0x100) != 0
    && *((_BYTE *)v8 + 25) >= 4u )
  {
    v24 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v24 )
      v25 = 0LL;
    else
      v25 = **a3;
    LODWORD(v27) = *((_DWORD *)a3 + 2);
    WPP_SF_ddID(*((_QWORD *)v8 + 2), v24, v7, v4, v27, v25, ResourceConsumptionInfoInGroup);
  }
  if ( v41 )
    LeaveCriticalSection(v40);
  if ( v43 )
    LeaveCriticalSection(v42);
  return (unsigned int)ResourceConsumptionInfoInGroup;
}
