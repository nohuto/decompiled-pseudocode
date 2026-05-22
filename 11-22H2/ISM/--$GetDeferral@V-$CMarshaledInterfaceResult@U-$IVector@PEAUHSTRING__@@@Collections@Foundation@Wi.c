/*
 * XREFs of ??$GetDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@12@AEAV?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@12@@Z @ 0x18018EB54
 * Callers:
 *     _lambda_b07e28b8d9a43b43078b009fd4c08247_::operator() @ 0x180192D38 (_lambda_b07e28b8d9a43b43078b009fd4c08247_--operator().c)
 *     _lambda_de6bcc426287dbdda407399e3f0c7994_::operator() @ 0x180192DE0 (_lambda_de6bcc426287dbdda407399e3f0c7994_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v6 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  v7 = ***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
  v7(v6, &GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606, &v9);
  *(_BYTE *)(a1 + 9) = 1;
  *a2 = a3;
  a2[1] = v9;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a2 + 1);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
  return a2;
}
