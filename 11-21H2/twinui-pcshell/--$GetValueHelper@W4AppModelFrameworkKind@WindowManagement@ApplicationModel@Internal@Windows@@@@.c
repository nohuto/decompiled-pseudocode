/*
 * XREFs of ??$GetValueHelper@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180072194
 * Callers:
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180072290 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F7500 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18007220C (--0-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A89EC (--$query@U-$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetValueHelper<enum Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>(
        __int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v1 = wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
         &v9,
         a1);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>>(
    v1,
    &v8);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v9);
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v2,
      v5);
  v3 = v7;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
  return v3;
}
