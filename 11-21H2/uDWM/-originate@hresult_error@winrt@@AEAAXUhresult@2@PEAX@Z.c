/*
 * XREFs of ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800D3BE0
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D1E4C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1800F09D0 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1800F9700 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_GetProcAddress @ 0x1800610C6 (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x180061D64 (LoadLibraryW_0.c)
 *     GetErrorInfo_0 @ 0x180062531 (GetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D20F4 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall winrt::hresult_error::originate(__int64 a1, unsigned int a2, __int64 a3)
{
  void *ProcAddress; // rax
  HMODULE LibraryW_0; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  IErrorInfo *pperrinfo; // [rsp+68h] [rbp+38h] BYREF

  ProcAddress = (void *)`winrt::hresult_error::originate'::`2'::handler;
  if ( !`winrt::hresult_error::originate'::`2'::handler )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "RoOriginateLanguageException");
    if ( !ProcAddress )
      ProcAddress = winrt::hresult_error::fallback_RoOriginateLanguageException;
    `winrt::hresult_error::originate'::`2'::handler = (__int64)ProcAddress;
  }
  ((void (__fastcall *)(_QWORD, __int64, _QWORD))ProcAddress)(a2, a3, 0LL);
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  if ( pperrinfo )
  {
    v9 = 0LL;
    ((void (__fastcall *)(IErrorInfo *, __int64 *, __int64 *))pperrinfo->lpVtbl->QueryInterface)(
      pperrinfo,
      &winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo>,
      &v9);
    v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  result = (__int64)winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(a1 + 16), &v10);
  if ( v10 )
    result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  if ( pperrinfo )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&pperrinfo);
  return result;
}
