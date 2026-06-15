/*
 * XREFs of ??1CApplication@@MEAA@XZ @ 0x180014F70
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x180015570 (--_ECApplication@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BFFC (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180014B60 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180016144 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::~CApplication(CApplication *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CApplication::`vftable';
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      v2,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 33));
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  CApplication::CleanupDelayedInteractivityNotification(this);
  std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>((__int64 *)this + 88);
  v4 = *((_QWORD *)this + 75);
  if ( v4 )
  {
    LOBYTE(v3) = v4 != (_QWORD)this + 544;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, v3);
    *((_QWORD *)this + 75) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 120);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    CoTaskMemFree(v5);
  *((_DWORD *)this + 3) = -1073741823;
}
