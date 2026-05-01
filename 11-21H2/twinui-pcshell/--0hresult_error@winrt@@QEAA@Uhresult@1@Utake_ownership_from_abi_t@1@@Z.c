/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x18032B9C8
 * Callers:
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800664B8 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     GetErrorInfo_0 @ 0x18018F6A9 (GetErrorInfo_0.c)
 *     SysStringLen_0 @ 0x18018F6D3 (SysStringLen_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18022A1B6 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x18022A1DE (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ??4?$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1802D6BF0 (--4-$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1802DA0AC (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  __int64 v5; // r14
  void (__fastcall ***v6)(_QWORD, void *, volatile signed __int32 **); // rcx
  volatile signed __int32 *v7; // rbx
  UINT v8; // eax
  volatile signed __int32 **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  BSTR pbstr; // [rsp+20h] [rbp-10h] BYREF
  struct winrt::impl::hstring_header *v18; // [rsp+28h] [rbp-8h] BYREF
  IErrorInfo *pperrinfo; // [rsp+50h] [rbp+20h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp+38h] BYREF

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
    ((void (__fastcall *)(IErrorInfo *, _QWORD *, BSTR *))pperrinfo->lpVtbl->QueryInterface)(
      pperrinfo,
      winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo>,
      &pbstr);
    v20 = (volatile signed __int32 *)pbstr;
  }
  else
  {
    v20 = 0LL;
  }
  v5 = *winrt::com_ptr<winrt::impl::IRestrictedErrorInfo>::operator=(v2, (__int64 *)&v20);
  if ( v20 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v20);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, a1);
    v6 = (void (__fastcall ***)(_QWORD, void *, volatile signed __int32 **))*v2;
    if ( *v2 )
    {
      v20 = 0LL;
      (**v6)(v6, &winrt::impl::guid_v<winrt::impl::ILanguageExceptionErrorInfo2>, &v20);
      if ( v20 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v20 + 40LL))(v20, 0LL);
        winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v20);
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
      v20 = 0LL;
      if ( pbstr )
      {
        v8 = SysStringLen_0(pbstr);
        v9 = (volatile signed __int32 **)winrt::impl::trim_hresult_message(&v18, (winrt::impl *)pbstr, v8);
        if ( &v20 != v9 )
        {
          v7 = *v9;
          *v9 = 0LL;
          v20 = v7;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v18, v10, v11, v12);
      }
    }
    else
    {
      v7 = 0LL;
      v20 = 0LL;
    }
    winrt::hresult_error::originate(a1, a2, (__int64)v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v20, v13, v14, v15);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  }
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
