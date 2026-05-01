/*
 * XREFs of ??0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054BE70
 * Callers:
 *     ?Create@CAppThumbnailWindow@@SA?AV?$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054DC28 (-Create@CAppThumbnailWindow@@SA-AV-$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@P.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicationViewCollection@@@Z @ 0x1801BCD60 (--0-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicati.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x1802DF0B8 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAXPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054B790 (--$_Destroy_range@V-$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@.c)
 *     ??$make@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@winrt@@YA?A_P$$QEAV?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18054BBEC (--$make@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@.c)
 */

// Hidden C++ exception states: #wind=34
CAppThumbnailWindow *__fastcall CAppThumbnailWindow::CAppThumbnailWindow(
        CAppThumbnailWindow *this,
        const struct Geometry::CRect *a2,
        struct IApplicationViewCollection *a3,
        HMONITOR *a4,
        struct IVirtualDesktop *a5)
{
  winrt::Windows::Internal::Shell::RegistrationData *v8; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *v9; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>(
    (_QWORD *)this + 4,
    (__int64)a3);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (_QWORD *)this + 16,
    (__int64)a5);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)a2;
  *((_QWORD *)this + 19) = *a4;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 84) = 0;
  *((_BYTE *)this + 170) = 1;
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 184) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  winrt::make<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
    (_QWORD *)this + 63,
    (__int64 *)v11);
  v8 = v11[0];
  if ( v11[0] )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
      v11[0],
      v11[1]);
    std::_Deallocate<16,0>(v8, (v12 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  winrt::make<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
    (_QWORD *)this + 66,
    (__int64 *)v11);
  v9 = v11[0];
  if ( v11[0] )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
      v11[0],
      v11[1]);
    std::_Deallocate<16,0>(v9, (v12 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  return this;
}
