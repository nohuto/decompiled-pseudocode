/*
 * XREFs of ??1KioskPositioner@@UEAA@XZ @ 0x1801433FC
 * Callers:
 *     ??_EKioskPositioner@@UEAAPEAXI@Z @ 0x1801BE3E8 (--_EKioskPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18004F428 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1805A75E0 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KioskPositioner::~KioskPositioner(KioskPositioner *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 81);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
      v2,
      *((__int64 **)this + 82));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 81),
      (*((_QWORD *)this + 83) - *((_QWORD *)this + 81)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 81) = 0LL;
    *((_QWORD *)this + 82) = 0LL;
    *((_QWORD *)this + 83) = 0LL;
  }
  if ( *((_QWORD *)this + 80) )
    std::default_delete<PrimaryAppProxyBase>::operator()();
  SmartCookie::Unregister((KioskPositioner *)((char *)this + 504));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 504);
  SmartCookie::Unregister((KioskPositioner *)((char *)this + 376));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 376);
  SmartCookie::Unregister((KioskPositioner *)((char *)this + 248));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 248);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 29);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 28);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 26);
  *((_DWORD *)this + 51) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  CImmersiveShellComponent::~CImmersiveShellComponent((KioskPositioner *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
