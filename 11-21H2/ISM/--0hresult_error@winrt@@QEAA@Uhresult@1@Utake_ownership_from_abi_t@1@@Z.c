/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x180081648
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_SysFreeString @ 0x18004C24D (WINRT_IMPL_SysFreeString.c)
 *     GetErrorInfo_0 @ 0x18004C265 (GetErrorInfo_0.c)
 *     SysStringLen_0 @ 0x18004C271 (SysStringLen_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180081A90 (--4-$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180082F9C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800834DC (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x180083C84 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // r14
  void (__fastcall ***v6)(_QWORD, void *, BSTR *); // rcx
  BSTR v7; // rbx
  UINT v8; // eax
  __int64 *v9; // rax
  BSTR pbstr; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-8h] BYREF
  BSTR v13; // [rsp+50h] [rbp+20h] BYREF
  IErrorInfo *pperrinfo; // [rsp+68h] [rbp+38h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  pperrinfo = 0LL;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  if ( pperrinfo )
  {
    pbstr = 0LL;
    ((void (__fastcall *)(IErrorInfo *, __int64 *, BSTR *))pperrinfo->lpVtbl->QueryInterface)(
      pperrinfo,
      &winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo>,
      &pbstr);
    v13 = pbstr;
  }
  else
  {
    v13 = 0LL;
  }
  v5 = *(_QWORD *)winrt::com_ptr<winrt::impl::IRestrictedErrorInfo>::operator=(v2, &v13);
  if ( v13 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v13);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, a1);
    v6 = (void (__fastcall ***)(_QWORD, void *, BSTR *))*v2;
    if ( *v2 )
    {
      v13 = 0LL;
      (**v6)(v6, &winrt::impl::guid_v<winrt::impl::ILanguageExceptionErrorInfo2>, &v13);
      if ( v13 )
      {
        (*(void (__fastcall **)(BSTR, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, 0LL);
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v13);
      }
    }
  }
  else
  {
    pbstr = 0LL;
    if ( pperrinfo )
    {
      ((void (__fastcall *)(IErrorInfo *, BSTR *))pperrinfo->lpVtbl->GetDescription)(pperrinfo, &pbstr);
      v7 = 0LL;
      v13 = 0LL;
      if ( pbstr )
      {
        v8 = SysStringLen_0(pbstr);
        v9 = (__int64 *)winrt::impl::trim_hresult_message(v12, pbstr, v8);
        if ( &v13 != (BSTR *)v9 )
        {
          v7 = (BSTR)*v9;
          *v9 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
          v13 = v7;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
      }
    }
    else
    {
      v7 = 0LL;
      v13 = 0LL;
    }
    winrt::hresult_error::originate(a1, a2, v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    if ( pbstr )
      WINRT_IMPL_SysFreeString(pbstr);
  }
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
