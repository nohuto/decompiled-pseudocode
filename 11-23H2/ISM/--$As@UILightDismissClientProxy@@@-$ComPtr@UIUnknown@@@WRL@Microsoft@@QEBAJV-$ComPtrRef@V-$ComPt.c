/*
 * XREFs of ??$As@UILightDismissClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILightDismissClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013FCF4
 * Callers:
 *     ??$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VLightDismissClientProxy@@@WRL@Microsoft@@XZ @ 0x180172230 (--$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA-AV-$C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<ILightDismissClientProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v3, &GUID_fb76c7b1_2a7b_dedb_3bb3_6fad8f50be6b, a2);
}
