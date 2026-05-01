/*
 * XREFs of _anonymous_namespace_::GetLogoFromShellItem @ 0x1806A18A4
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1806A7FD4 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1806A85C8 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHBITMAP__@@XZ @ 0x18055EB30 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObjec.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall anonymous_namespace_::GetLogoFromShellItem(
        void **a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64, __int64, void **); // rdi
  void **v6; // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  *a1 = 0LL;
  v10 = 0LL;
  v3 = (**a2)(a2, &GUID_bcc18b79_ba16_442f_80c4_8a59c30c463b, &v10);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3,
      v9);
  v4 = v10;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)v10 + 24LL);
  v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::put(a1);
  v7 = v5(v4, 0x10000000100LL, 5LL, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10C,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v7,
      v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return a1;
}
