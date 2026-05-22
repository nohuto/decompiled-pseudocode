/*
 * XREFs of ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x180194C6C
 * Callers:
 *     _lambda_b07e28b8d9a43b43078b009fd4c08247_::operator() @ 0x180192D38 (_lambda_b07e28b8d9a43b43078b009fd4c08247_--operator().c)
 *     _lambda_de6bcc426287dbdda407399e3f0c7994_::operator() @ 0x180192DE0 (_lambda_de6bcc426287dbdda407399e3f0c7994_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x18018FF40 (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@$$QEAV012@@Z @ 0x1801909C8 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundatio.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x1801909F4 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 *     ??0?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVAsyncStringPrincipal@@@Z @ 0x18019189C (--0-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVAsyncStringPrinc.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180193E6C (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXPEBG@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x18019C510 (--0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXPEBG@Z@std@@V-$f.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *MPCConstantManagerClient::CreateStringVectorPrincipal(__int64 a1, _QWORD *a2, _QWORD *a3, ...)
{
  void (__fastcall ***v6)(_QWORD); // rbx
  void (__fastcall ***v7)(_QWORD); // rax
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-79h] BYREF
  __int64 v11; // [rsp+30h] [rbp-71h] BYREF
  __int64 v12; // [rsp+38h] [rbp-69h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+40h] [rbp-61h]
  _QWORD v14[2]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v15[5]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp-19h]
  __int64 (__fastcall **v17)(); // [rsp+90h] [rbp-11h] BYREF
  __int64 v18[6]; // [rsp+98h] [rbp-9h] BYREF
  __int64 (__fastcall ***v19)(); // [rsp+C8h] [rbp+27h]
  void (__fastcall ***v20)(_QWORD); // [rsp+120h] [rbp+7Fh] BYREF
  va_list va; // [rsp+120h] [rbp+7Fh]
  va_list va1; // [rsp+128h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, void (__fastcall ***)(_QWORD));
  MPCConstantManagerClient::CleanupPrincipals((MPCConstantManagerClient *)a1);
  v6 = (void (__fastcall ***)(_QWORD))operator new(0xC0uLL);
  v20 = v6;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v10,
    a3);
  v19 = 0LL;
  v17 = off_18020BFD8;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    v18,
    &v10);
  v19 = &v17;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  v10 = a1;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v11,
    a3);
  v13 = StringToHstringVectorParser;
  v16 = 0LL;
  v14[0] = off_18020C008;
  v14[1] = v10;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    v15,
    &v11);
  v15[2] = v13;
  v16 = v14;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  v7 = (void (__fastcall ***)(_QWORD))AsyncStringPrincipal::AsyncStringPrincipal(v6, *(_QWORD *)(a1 + 32), v14, &v17);
  v20 = v7;
  v8 = *(_QWORD **)(a1 + 104);
  if ( v8 == *(_QWORD **)(a1 + 112) )
  {
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
      (__int64 **)(a1 + 96),
      *(__int64 **)(a1 + 104),
      (void (__fastcall ****)(_QWORD))va);
  }
  else
  {
    wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>(
      v8,
      v7);
    *(_QWORD *)(a1 + 104) += 8LL;
  }
  wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 104) - 8LL));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a3 + 1);
  return a2;
}
