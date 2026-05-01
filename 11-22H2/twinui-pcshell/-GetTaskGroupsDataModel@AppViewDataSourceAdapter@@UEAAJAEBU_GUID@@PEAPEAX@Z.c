/*
 * XREFs of ?GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800631A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x180063314 (-copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter::GetTaskGroupsDataModel(
        AppViewDataSourceAdapter *this,
        const struct _GUID *a2,
        void **a3)
{
  winrt *v5; // rsi
  void **v6; // r8
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v11.lpVtbl = 0LL;
  v5 = (AppViewDataSourceAdapter *)((char *)this + 64);
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 64, &v11) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCC,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80004005LL,
      v9);
  v11.lpVtbl = 0LL;
  winrt::copy_to_abi(v5, &v11, v6);
  v7 = (*(__int64 (__fastcall **)(struct IUnknownVtbl *, const struct _GUID *, void **))v11.lpVtbl->QueryInterface)(
         v11.lpVtbl,
         a2,
         a3);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51E,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v7,
      v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return 0LL;
}
