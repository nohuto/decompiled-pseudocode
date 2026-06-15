/*
 * XREFs of ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x180101820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1800FE768 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800FF19C (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800FFBF4 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x1800FFF8C (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x180101B44 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?RemoveAll@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180101D6C (-RemoveAll@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QE.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180101E4C (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     WPP_SF_dI @ 0x180102E1C (WPP_SF_dI.c)
 *     WPP_SF_dID @ 0x180102E74 (WPP_SF_dID.c)
 *     ?GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180160058 (-GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInf.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquirePhoneCallResource(
        CConstraintModelResourceManager *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  int v3; // ebx
  unsigned int v5; // r14d
  CAudioSessionManager *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  struct _RTL_CRITICAL_SECTION *v10; // r13
  __int64 v11; // rcx
  __int64 *v12; // r12
  __int64 v13; // rbx
  const struct ResourceHandleInfo *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  const struct ResourceHandleInfo *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  struct _ResourceInfo *v27; // [rsp+48h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B0h] BYREF
  char v29; // [rsp+58h] [rbp-A8h]
  LPCRITICAL_SECTION v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+68h] [rbp-98h]
  LPCRITICAL_SECTION v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+A8h] [rbp-58h]
  _QWORD v38[155]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+588h] [rbp+488h] BYREF

  v25 = a2;
  v3 = 0;
  v5 = a2;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, a3, (unsigned int)a2, *a3);
    v7 = WPP_GLOBAL_Control;
  }
  if ( *a3 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v32,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v30,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
    v8 = *((_QWORD *)this + 2);
    v26 = 0LL;
    v24[0] = 0;
    v27 = 0LL;
    if ( (int)CConstraintModel::GetPhoneCallResourceConsumption(v8, v5 != 0, v24, &v27) >= 0 && (v9 = v24[0]) != 0 )
    {
      v35 = 0LL;
      v37 = 10;
      v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
      v34 = 0LL;
      v36 = 0LL;
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)this + 3);
      v12 = (__int64 *)((char *)this + 160);
      v13 = *((_QWORD *)this + 20);
      *(_QWORD *)v24 = v13;
      while ( v13 )
      {
        v14 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                                   v11,
                                                   v13);
        ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v38, v14);
        if ( *a3 == v38[0] )
        {
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead(
            (__int64 *)&v34,
            (__int64)v38,
            v16);
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt((char *)this + 160, v13);
          v13 = *v12;
          *(_QWORD *)v24 = *v12;
        }
        else
        {
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v15, (_QWORD **)v24);
          v13 = *(_QWORD *)v24;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
      }
      if ( v29 )
        LeaveCriticalSection(lpCriticalSection);
      v3 = CConstraintModelResourceManager::ReacquireResourceHandle(this, *a3, v27, v9, 1u, &v26);
      if ( v3 >= 0 )
      {
        v17 = v26;
        *a3 = v26;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&lpCriticalSection,
          v10);
        v19 = v34;
        v26 = v34;
        while ( v19 )
        {
          v20 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                                     v18,
                                                     v19);
          ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v38, v20);
          v38[0] = v17;
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead(v12, (__int64)v38, v21);
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v22, (_QWORD **)&v26);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
          v19 = v26;
        }
        if ( v29 )
          LeaveCriticalSection(lpCriticalSection);
      }
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAll(&v34);
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(CConstraintModelResourceManager *, unsigned __int64 *))(*(_QWORD *)this + 80LL))(
             this,
             a3);
    }
    if ( v27 )
      operator delete(v27);
    if ( v31 )
      LeaveCriticalSection(v30);
    if ( v33 )
      LeaveCriticalSection(v32);
    v5 = v25;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v7 + 7) & 0x100) != 0
    && *((_BYTE *)v7 + 25) >= 4u )
  {
    WPP_SF_dID(*((_QWORD *)v7 + 2), a2, a3, v5, *a3, v3);
  }
  return (unsigned int)v3;
}
