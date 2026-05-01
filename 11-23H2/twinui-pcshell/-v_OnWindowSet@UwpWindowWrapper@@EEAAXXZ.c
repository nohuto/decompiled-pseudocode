/*
 * XREFs of ?v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ @ 0x18009F850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009EC20 (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?GetWindow@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009F8D0 (-GetWindow@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapper::v_OnWindowSet(UwpWindowWrapper *this)
{
  int Window; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v5);
  Window = UwpWindowWrapperBase::GetWindow((UwpWindowWrapper *)((char *)this + 16), &v5);
  if ( Window < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF5,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)Window,
      v3);
  if ( v5 && *((_DWORD *)this + 74) )
    UwpWindowWrapper::OnSetWindowInternal((UwpWindowWrapper *)((char *)this - 8), v5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v5);
}
