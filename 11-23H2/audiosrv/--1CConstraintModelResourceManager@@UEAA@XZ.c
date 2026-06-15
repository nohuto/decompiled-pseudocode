/*
 * XREFs of ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800FE9E0
 * Callers:
 *     ??_GCConstraintModelResourceManager@@UEAAPEAXI@Z @ 0x1800FEC50 (--_GCConstraintModelResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAXXZ @ 0x180014F4C (-RemoveAll@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VRe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180101D1C (-RemoveAll@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QE.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1801022CC (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 */

void __fastcall CConstraintModelResourceManager::~CConstraintModelResourceManager(
        CConstraintModelResourceManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CConstraintModelResourceManager::`vftable';
  CConstraintModelResourceManager::Shutdown(this);
  ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::RemoveAll((__int64 *)this + 34);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 26);
  ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAll((char *)this + 160);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CUnknown::`vftable';
}
