/*
 * XREFs of ??1CAppThumbnailWindow@@QEAA@XZ @ 0x18054C540
 * Callers:
 *     ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x18054D2F0 (--_GCAppThumbnailWindow@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18004F428 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CAppThumbnailWindow::~CAppThumbnailWindow(CAppThumbnailWindow *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  HWND v6; // rcx
  __int64 *v7; // rcx
  __int64 *v8; // rcx
  std::_Ref_count_base *v9; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 68);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
      v2,
      *((__int64 **)this + 69));
    std::_Deallocate<16,0>(
      *((void **)this + 68),
      (*((_QWORD *)this + 70) - *((_QWORD *)this + 68)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
    *((_QWORD *)this + 70) = 0LL;
  }
  if ( *((_QWORD *)this + 67) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 536));
  if ( *((_QWORD *)this + 66) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 528));
  if ( *((_QWORD *)this + 65) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 520));
  if ( *((_QWORD *)this + 63) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 504));
  if ( *((_QWORD *)this + 62) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 496));
  if ( *((_QWORD *)this + 60) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 480));
  if ( *((_QWORD *)this + 58) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 464));
  if ( *((_QWORD *)this + 57) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 456));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 56);
  if ( *((_QWORD *)this + 55) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 440));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 54);
  if ( *((_QWORD *)this + 53) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 424));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 52);
  if ( *((_QWORD *)this + 51) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 408));
  if ( *((_QWORD *)this + 50) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 400));
  if ( *((_QWORD *)this + 49) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 392));
  if ( *((_QWORD *)this + 48) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CAppThumbnailWindow *)((char *)this + 384));
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 320,
    v3);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 256,
    v4);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 192,
    v5);
  v6 = (HWND)*((_QWORD *)this + 20);
  if ( v6 )
    DestroyWindow(v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 15);
  v7 = (__int64 *)*((_QWORD *)this + 12);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
      v7,
      *((__int64 **)this + 13));
    std::_Deallocate<16,0>(
      *((void **)this + 12),
      (*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v8 = (__int64 *)*((_QWORD *)this + 9);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
      v8,
      *((__int64 **)this + 10));
    std::_Deallocate<16,0>(
      *((void **)this + 9),
      (*((_QWORD *)this + 11) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 2);
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v9 )
    std::_Ref_count_base::_Decwref(v9);
}
