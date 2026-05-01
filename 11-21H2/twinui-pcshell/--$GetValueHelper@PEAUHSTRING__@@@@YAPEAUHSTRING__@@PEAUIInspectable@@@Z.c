/*
 * XREFs of ??$GetValueHelper@PEAUHSTRING__@@@@YAPEAUHSTRING__@@PEAUIInspectable@@@Z @ 0x1803DBE88
 * Callers:
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180072290 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F7500 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18007220C (--0-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IReference@PEAUHSTRING__@@@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IReference@PEAUHSTRING__@@@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A898C (--$query@U-$IReference@PEAUHSTRING__@@@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_exce.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetValueHelper<HSTRING__ *>(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  __int64 v3; // rbx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v1 = wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
         &v8,
         a1);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::IReference<HSTRING__ *>>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v1,
    &v7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v9);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47E,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v2,
      v5);
  v3 = v9;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v7);
  return v3;
}
