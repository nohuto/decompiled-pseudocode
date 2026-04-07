/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D6A5C
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     SysStringLen_0 @ 0x18005E649 (SysStringLen_0.c)
 *     GetErrorInfo_0 @ 0x18005E661 (GetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009E2E8 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x18009E6BC (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D6D18 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800D8850 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64); // rbx
  void (__fastcall ***v8)(_QWORD, void *, BSTR *); // rcx
  IErrorInfo *v9; // rbx
  HRESULT (__stdcall *GetDescription)(IErrorInfo *, BSTR *); // rsi
  UINT v11; // eax
  void **v12; // rax
  IErrorInfo *pperrinfo; // [rsp+20h] [rbp-10h] BYREF
  void *v15; // [rsp+28h] [rbp-8h] BYREF
  BSTR v16; // [rsp+50h] [rbp+20h] BYREF
  BSTR pbstr; // [rsp+68h] [rbp+38h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = (__int64 *)(a1 + 16);
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
    v16 = pbstr;
  }
  else
  {
    v16 = 0LL;
  }
  v5 = *(_QWORD *)winrt::com_ptr<winrt::impl::IWeakReference>::operator=(v2, &v16);
  if ( v16 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v16);
  if ( v5 )
  {
    v6 = *v2;
    v7 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v2 + 32LL);
    winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)a1);
    v7(v6, a1);
    v8 = (void (__fastcall ***)(_QWORD, void *, BSTR *))*v2;
    if ( *v2 )
    {
      v16 = 0LL;
      (**v8)(v8, &winrt::impl::guid_v<winrt::impl::ILanguageExceptionErrorInfo2>, &v16);
      if ( v16 )
      {
        (*(void (__fastcall **)(BSTR, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, 0LL);
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v16);
      }
    }
  }
  else
  {
    pbstr = 0LL;
    v9 = pperrinfo;
    if ( pperrinfo )
    {
      GetDescription = pperrinfo->lpVtbl->GetDescription;
      winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
      ((void (__fastcall *)(IErrorInfo *, BSTR *))GetDescription)(v9, &pbstr);
      v9 = 0LL;
      v16 = 0LL;
      if ( pbstr )
      {
        v11 = SysStringLen_0(pbstr);
        v12 = (void **)winrt::impl::trim_hresult_message(
                         (struct winrt::impl::hstring_header **)&v15,
                         (winrt::impl *)pbstr,
                         v11);
        if ( &v16 != (BSTR *)v12 )
        {
          v9 = (IErrorInfo *)*v12;
          *v12 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::close((void **)&v16);
          winrt::handle_type<winrt::impl::hstring_traits>::close((void **)&v16);
          v16 = (BSTR)v9;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      }
    }
    else
    {
      v16 = 0LL;
    }
    winrt::hresult_error::originate(a1, a2, v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close((void **)&v16);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  }
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
