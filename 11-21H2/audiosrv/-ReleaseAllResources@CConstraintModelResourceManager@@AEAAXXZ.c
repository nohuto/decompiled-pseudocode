/*
 * XREFs of ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x18010D3E8
 * Callers:
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x18010DF0C (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1801099C4 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x18010B2C8 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x18010B660 (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?RemoveAll@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18010D898 (-RemoveAll@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::ReleaseAllResources(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rcx
  _QWORD *p_Type; // rax
  const struct ResourceHandleInfo *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // [rsp+20h] [rbp-518h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-510h] BYREF
  char v8; // [rsp+30h] [rbp-508h]
  _QWORD v9[155]; // [rsp+40h] [rbp-4F8h] BYREF
  __int64 v10; // [rsp+518h] [rbp-20h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  p_Type = &this[4].DebugInfo->Type;
  v6 = p_Type;
  while ( p_Type )
  {
    v4 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                              v2,
                                              (__int64)p_Type);
    ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v9, v4);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v10);
    RmReleaseResources(v9[0]);
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v5, &v6);
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v10);
    p_Type = v6;
  }
  ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAll(&this[4]);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
