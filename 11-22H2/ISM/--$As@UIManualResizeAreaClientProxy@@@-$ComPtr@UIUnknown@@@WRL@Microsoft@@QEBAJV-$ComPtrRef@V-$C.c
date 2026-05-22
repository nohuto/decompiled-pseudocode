/*
 * XREFs of ??$As@UIManualResizeAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualResizeAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014DEB8
 * Callers:
 *     ??$GetAttachedObject@UIManualResizeAreaClientProxy@@VBamoManualResizeAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoManualResizeAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x180170C40 (--$GetAttachedObject@UIManualResizeAreaClientProxy@@VBamoManualResizeAreaClientProxy@@@InputSite.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IManualResizeAreaClientProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v3, &GUID_cae9ba0c_34ca_09ed_6155_b69e3ed14be6, a2);
}
