/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x18039160C
 * Callers:
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x180133BE8 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     SysStringLen_0 @ 0x1801C8758 (SysStringLen_0.c)
 *     GetErrorInfo_0 @ 0x1801CEFA1 (GetErrorInfo_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1802CE67C (--4-$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1802CEB40 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1802CEB68 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x180390328 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64); // rbx
  void (__fastcall ***v8)(_QWORD, void *, volatile signed __int32 **); // rcx
  volatile signed __int32 *v9; // rbx
  HRESULT (__stdcall *GetDescription)(IErrorInfo *, BSTR *); // rsi
  UINT v11; // eax
  volatile signed __int32 **v12; // rax
  IErrorInfo *pperrinfo; // [rsp+20h] [rbp-10h] BYREF
  struct winrt::impl::hstring_header *v15; // [rsp+28h] [rbp-8h] BYREF
  volatile signed __int32 *v16; // [rsp+50h] [rbp+20h] BYREF
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
    ((void (__fastcall *)(IErrorInfo *, _QWORD *, BSTR *))pperrinfo->lpVtbl->QueryInterface)(
      pperrinfo,
      winrt::impl::guid_v<winrt::impl::IRestrictedErrorInfo>,
      &pbstr);
    v16 = (volatile signed __int32 *)pbstr;
  }
  else
  {
    v16 = 0LL;
  }
  v5 = *winrt::com_ptr<winrt::impl::IRestrictedErrorInfo>::operator=(v2, (__int64 *)&v16);
  if ( v16 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v16);
  if ( v5 )
  {
    v6 = *v2;
    v7 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v2 + 32LL);
    winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)a1);
    v7(v6, a1);
    v8 = (void (__fastcall ***)(_QWORD, void *, volatile signed __int32 **))*v2;
    if ( *v2 )
    {
      v16 = 0LL;
      (**v8)(v8, &winrt::impl::guid_v<winrt::impl::ILanguageExceptionErrorInfo2>, &v16);
      if ( v16 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, 0LL);
        winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v16);
      }
    }
  }
  else
  {
    pbstr = 0LL;
    v9 = (volatile signed __int32 *)pperrinfo;
    if ( pperrinfo )
    {
      GetDescription = pperrinfo->lpVtbl->GetDescription;
      winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
      ((void (__fastcall *)(volatile signed __int32 *, BSTR *))GetDescription)(v9, &pbstr);
      v9 = 0LL;
      v16 = 0LL;
      if ( pbstr )
      {
        v11 = SysStringLen_0(pbstr);
        v12 = (volatile signed __int32 **)winrt::impl::trim_hresult_message(&v15, (winrt::impl *)pbstr, v11);
        if ( &v16 != v12 )
        {
          v9 = *v12;
          *v12 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
          v16 = v9;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
      }
    }
    else
    {
      v16 = 0LL;
    }
    winrt::hresult_error::originate(a1, a2, (__int64)v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  }
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
