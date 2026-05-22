/*
 * XREFs of ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801672B4
 * Callers:
 *     _lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator() @ 0x1801655A4 (_lambda_7c875662d6abaa9f8d1386a75bd755d7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@?$vector@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncPVPrincipal@@@Z @ 0x1801629CC (--$_Emplace_reallocate@PEAVAsyncPVPrincipal@@@-$vector@V-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exce.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@$$QEAV012@@Z @ 0x1801635A8 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundatio.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x1801635D4 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 *     ??0?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVAsyncPVPrincipal@@@Z @ 0x18016440C (--0-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVAsyncPVPrincipal@@@Z.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180166A0C (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x18016E478 (--0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXAEBUtagPROPVARIANT@@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall MPCConstantManagerClient::CreatePVPrincipal(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rax
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-69h] BYREF
  __int64 v11; // [rsp+30h] [rbp-61h] BYREF
  __int64 v12; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v14[5]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp-19h]
  __int64 (__fastcall **v16)(); // [rsp+80h] [rbp-11h] BYREF
  __int64 v17[6]; // [rsp+88h] [rbp-9h] BYREF
  __int64 (__fastcall ***v18)(); // [rsp+B8h] [rbp+27h]
  _QWORD *v19; // [rsp+100h] [rbp+6Fh] BYREF
  _QWORD *v20; // [rsp+108h] [rbp+77h]

  v20 = a3;
  v19 = a2;
  MPCConstantManagerClient::CleanupPrincipals((MPCConstantManagerClient *)a1);
  v6 = operator new(0xC0uLL);
  v19 = v6;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v10,
    a3);
  v18 = 0LL;
  v16 = off_1801DFDC8;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    v17,
    &v10);
  v18 = &v16;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  v10 = a1;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v11,
    a3);
  v15 = 0LL;
  v13[0] = off_1801DFD08;
  v13[1] = v10;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
    v14,
    &v11);
  v15 = v13;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  v7 = (void (__fastcall ***)(_QWORD))AsyncPVPrincipal::AsyncPVPrincipal(v6, *(_QWORD *)(a1 + 32), v13, &v16);
  v19 = v7;
  v8 = *(_QWORD **)(a1 + 56);
  if ( v8 == *(_QWORD **)(a1 + 64) )
  {
    std::vector<wil::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncPVPrincipal *>(
      (__int64 **)(a1 + 48),
      *(__int64 **)(a1 + 56),
      &v19);
  }
  else
  {
    wil::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>(
      v8,
      v7);
    *(_QWORD *)(a1 + 56) += 8LL;
  }
  wil::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>::com_ptr_t<AsyncPVPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 56) - 8LL));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a3 + 1);
  return a2;
}
