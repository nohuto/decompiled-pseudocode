/*
 * XREFs of ??$As@U?$IReference@_N@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IReference@_N@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AEE2C
 * Callers:
 *     _lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator() @ 0x1801F8ACC (_lambda_ceee1b9c54d49ba2255ffab17ffe7895_--operator().c)
 *     _lambda_44f808b4f8bca219e9966f8c039b3597_::operator() @ 0x1804E651C (_lambda_44f808b4f8bca219e9966f8c039b3597_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IReference<bool>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_3c00fd60_2950_5939_a21a_2d12c5a01b8a, a2);
}
