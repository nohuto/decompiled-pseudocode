/*
 * XREFs of ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x180014D6C
 * Callers:
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x180014BC8 (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FD84 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800FEB04 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800FFBA4 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x1800FFF3C (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800FFF6C (-GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x180101AF4 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180101DFC (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1801022A0 (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 *     WPP_SF_ddI @ 0x180102E8C (WPP_SF_ddI.c)
 *     WPP_SF_ddID @ 0x180102EF4 (WPP_SF_ddID.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CConstraintModelResourceManager::DoReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        unsigned int a2,
        unsigned __int64 **a3)
{
  unsigned int v4; // ebx
  int v6; // r15d
  int ResourceConsumptionInfoInGroup; // edi
  __int64 v8; // r8
  CAudioSessionManager *v9; // rcx
  unsigned __int64 *v10; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  struct _ResourceInfo *v19; // rbx
  int StreamResourceConsumption; // ebx
  __int64 v21; // rcx
  __int64 v22; // r9
  LPCRITICAL_SECTION v23; // r15
  unsigned int v24; // r15d
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned int *v28; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  struct _ResourceInfo *v33; // [rsp+58h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION v34; // [rsp+60h] [rbp-A0h] BYREF
  char v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION v37; // [rsp+78h] [rbp-88h] BYREF
  char v38; // [rsp+80h] [rbp-80h]
  LPCRITICAL_SECTION v39; // [rsp+88h] [rbp-78h] BYREF
  char v40; // [rsp+90h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp-68h] BYREF
  char v42; // [rsp+A0h] [rbp-60h]
  LPCRITICAL_SECTION v43; // [rsp+A8h] [rbp-58h] BYREF
  char v44; // [rsp+B0h] [rbp-50h]
  struct _GUID v45; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v46; // [rsp+D0h] [rbp-30h] BYREF
  char v47[256]; // [rsp+DCh] [rbp-24h] BYREF
  struct _GUID v48; // [rsp+1DCh] [rbp+DCh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v49; // [rsp+1F0h] [rbp+F0h]
  unsigned int v50; // [rsp+598h] [rbp+498h]
  int v51; // [rsp+59Ch] [rbp+49Ch]
  unsigned int v52; // [rsp+5A0h] [rbp+4A0h]
  __int64 v53; // [rsp+5A8h] [rbp+4A8h] BYREF

  v4 = a2;
  v6 = 0;
  ResourceConsumptionInfoInGroup = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &v43,
    (char *)this + 24);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &lpCriticalSection,
    (char *)this + 64);
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v12 )
      v13 = 0LL;
    else
      v13 = **a3;
    WPP_SF_ddI(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v8, v4, v12, v13);
    v9 = WPP_GLOBAL_Control;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v10 = *a3;
    if ( **a3 )
    {
      memset_0(&v46, 0, 0x4D8uLL);
      v53 = 0LL;
      v36 = 0LL;
      v37 = (LPCRITICAL_SECTION)((char *)this + 120);
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        &v34,
        (char *)this + 120);
      v39 = (LPCRITICAL_SECTION)((char *)this + 160);
      v15 = *((_QWORD *)this + 20);
      v31 = v15;
      while ( v15 )
      {
        v16 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v14, v15);
        ResourceHandleInfo::operator=(&v46, v16);
        if ( *v10 == v46 )
        {
          v36 = v15;
          v6 = 1;
          break;
        }
        ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v17, &v31);
        v15 = v31;
      }
      if ( v35 )
        LeaveCriticalSection(v34);
      if ( !v6 )
        goto LABEL_47;
      v18 = 0LL;
      v32 = 0LL;
      v30 = 0;
      v19 = 0LL;
      v33 = 0LL;
      v31 = 0LL;
      if ( (*(int (__fastcall **)(PVOID, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                           + 24LL))(
             g_pEndpointCharacteristicsCache,
             v47,
             0LL,
             0LL,
             &v31) >= 0 )
      {
        v34 = 0LL;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>(v31 + 40, &v34);
        v45 = v48;
        StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(
                                      *((CConstraintModel **)this + 2),
                                      (struct IMMDevice *)v34,
                                      &v45,
                                      v49,
                                      &v30,
                                      &v33);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
        if ( StreamResourceConsumption >= 0 )
        {
          v22 = v30;
          if ( v30 )
          {
            v19 = v33;
            if ( v51 )
            {
              v30 = 0;
              v34 = 0LL;
              v28 = &v30;
              ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
                                                 v21,
                                                 v52,
                                                 v33,
                                                 v22);
              v23 = v34;
              if ( ResourceConsumptionInfoInGroup >= 0 )
              {
                ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::ReacquireResourceHandle(
                                                   this,
                                                   *v10,
                                                   (struct _ResourceInfo *)v34,
                                                   v30,
                                                   a2,
                                                   &v32);
                v18 = v32;
              }
              if ( v23 )
                operator delete(v23);
              v24 = a2;
            }
            else
            {
              v24 = a2;
              ResourceConsumptionInfoInGroup = CConstraintModelResourceManager::ReacquireResourceHandle(
                                                 this,
                                                 *v10,
                                                 v33,
                                                 v30,
                                                 a2,
                                                 &v32);
              v18 = v32;
            }
            if ( ResourceConsumptionInfoInGroup < 0 )
            {
              ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
                &v37,
                v37);
              ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt(v39, v36);
              if ( v38 )
                LeaveCriticalSection(v37);
            }
            else
            {
              v46 = v18;
              v50 = v24;
              ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
                &v39,
                v37);
              ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v25, v36, &v46);
              if ( v40 )
                LeaveCriticalSection(v39);
              *v10 = v18;
            }
            goto LABEL_44;
          }
        }
        v19 = v33;
      }
      ResourceConsumptionInfoInGroup = RmReleaseResources(*v10);
LABEL_44:
      if ( v19 )
        operator delete(v19);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v31);
LABEL_47:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v53);
      v9 = WPP_GLOBAL_Control;
      v4 = a2;
    }
  }
  if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v9 + 7) & 0x100) != 0
    && *((_BYTE *)v9 + 25) >= 4u )
  {
    v26 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v26 )
      v27 = 0LL;
    else
      v27 = **a3;
    LODWORD(v28) = *((_DWORD *)a3 + 2);
    WPP_SF_ddID(*((_QWORD *)v9 + 2), v26, v8, v4, v28, v27, ResourceConsumptionInfoInGroup);
  }
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v44 )
    LeaveCriticalSection(v43);
  return (unsigned int)ResourceConsumptionInfoInGroup;
}
