/*
 * XREFs of _lambda_6084a6cce004fd5fee81c22a52dae34d_::operator() @ 0x1803C2510
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run @ 0x1803C6DD0 (Windows--Internal--COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d___ea_1803C6DD0.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800A3A68 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@YAJPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAVAgileRef@01@@Z @ 0x1803BFD8C (--$AsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Mi.c)
 *     ??$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803C08CC (--$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_6084a6cce004fd5fee81c22a52dae34d_::operator()(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 *v8; // rax
  const char *v9; // r9
  __int64 result; // rax
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    wil::GetActivationFactory<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResultsFactory>(
      (const WCHAR *)&v14,
      a2,
      a3);
    v13 = 0LL;
    v5 = *v14;
    v13 = 0LL;
    v11 = *(_OWORD *)(a1 + 8);
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64))(v5 + 48))(v14, *(_QWORD *)a1, &v11, 1LL);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x199,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v6,
        0);
    v7 = v13;
    *(_QWORD *)&v11 = a2 + 16;
    v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *((__int64 **)&v11);
    Microsoft::WRL::AsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(v7, v8);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x19E,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v9);
  }
  return result;
}
