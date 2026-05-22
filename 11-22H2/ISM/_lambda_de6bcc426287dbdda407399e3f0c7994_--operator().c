/*
 * XREFs of _lambda_de6bcc426287dbdda407399e3f0c7994_::operator() @ 0x180192DE0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run @ 0x1801992E0 (Windows--Internal--COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994___ea_1801992E0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@12@AEAV?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@12@@Z @ 0x18018EB54 (--$GetDeferral@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Wi.c)
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x180194C6C (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_de6bcc426287dbdda407399e3f0c7994_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
         a2,
         v8,
         a2);
  MPCConstantManagerClient::CreateStringVectorPrincipal(v3, &v9, v4);
  v5 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 248LL);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 88LL))(v5);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 8) + 56LL))(v6 + 8, v9);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
  return (unsigned int)v3;
}
