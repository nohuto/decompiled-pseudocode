/*
 * XREFs of ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x180166F34
 * Callers:
 *     _lambda_16bcd66e868557b6123b295398ded03e_::operator() @ 0x180165278 (_lambda_16bcd66e868557b6123b295398ded03e_--operator().c)
 *     _lambda_2c3f3b4f1bafb50fab998dee840e32d8_::operator() @ 0x180165320 (_lambda_2c3f3b4f1bafb50fab998dee840e32d8_--operator().c)
 *     _lambda_a408cc100a5b103155a70fabf7a2049b_::operator() @ 0x1801657FC (_lambda_a408cc100a5b103155a70fabf7a2049b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEAVAsyncHRESULTPrincipal@@@?$vector@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncHRESULTPrincipal@@@Z @ 0x180162878 (--$_Emplace_reallocate@PEAVAsyncHRESULTPrincipal@@@-$vector@V-$com_ptr_t@VAsyncHRESULTPrincipal@.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x1801635D4 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 *     ??0?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVAsyncHRESULTPrincipal@@@Z @ 0x1801643D0 (--0-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVAsyncHRESULTPri.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180166A0C (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x18016F990 (--0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXJ@Z@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall MPCConstantManagerClient::CreateHRPrincipal(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rax
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v12[8]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v13; // [rsp+A8h] [rbp+38h] BYREF
  _QWORD *v14; // [rsp+B0h] [rbp+40h]

  v14 = a3;
  v13 = a2;
  MPCConstantManagerClient::CleanupPrincipals((MPCConstantManagerClient *)a1);
  v6 = operator new(0x80uLL);
  v13 = v6;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v10,
    a3);
  v12[0] = off_1801DFD38;
  v12[1] = v10;
  v12[2] = v11;
  v11 = 0LL;
  v12[7] = v12;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  v7 = (void (__fastcall ***)(_QWORD))AsyncHRESULTPrincipal::AsyncHRESULTPrincipal(v6, *(_QWORD *)(a1 + 32), v12);
  v13 = v7;
  v8 = *(_QWORD **)(a1 + 80);
  if ( v8 == *(_QWORD **)(a1 + 88) )
  {
    std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncHRESULTPrincipal *>(
      (__int64 **)(a1 + 72),
      *(__int64 **)(a1 + 80),
      &v13);
  }
  else
  {
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(
      v8,
      v7);
    *(_QWORD *)(a1 + 80) += 8LL;
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 80) - 8LL));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a3 + 1);
  return a2;
}
