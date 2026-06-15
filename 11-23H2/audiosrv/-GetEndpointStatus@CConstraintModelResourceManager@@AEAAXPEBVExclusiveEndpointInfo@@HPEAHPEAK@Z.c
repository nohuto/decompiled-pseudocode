/*
 * XREFs of ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800FFBC8
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800149A0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801006A0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801006A0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z @ 0x1800FE160 (--$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1800FE718 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800FFBA4 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x1800FFF3C (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::GetEndpointStatus(
        struct _RTL_CRITICAL_SECTION *this,
        const struct ExclusiveEndpointInfo *a2,
        int a3,
        int *a4,
        unsigned int *a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 DebugInfo; // rax
  const struct ResourceHandleInfo *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-D8h] BYREF
  char v18; // [rsp+30h] [rbp-D0h]
  __int16 v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  unsigned int v21; // [rsp+508h] [rbp+408h]
  __int64 v22; // [rsp+518h] [rbp+418h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  v10 = -1;
  DebugInfo = (__int64)this[4].DebugInfo;
  v16 = DebugInfo;
  while ( DebugInfo )
  {
    v12 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                               v9,
                                               DebugInfo);
    ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)&v19, v12);
    if ( (!a3 || v20 != 1)
      && ExclusiveEndpointInfo::CompareTo<ResourceHandleInfo>((__int64)a2, &v19, v14, v15)
      && v21 < v10 )
    {
      v10 = v21;
    }
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v13, &v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
    DebugInfo = v16;
  }
  *a4 = v10 != -1;
  *a5 = v10;
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
}
