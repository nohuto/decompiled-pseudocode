/*
 * XREFs of ??$As@UIVirtualTouchpadControllerProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualTouchpadControllerProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013FFD4
 * Callers:
 *     ??$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@XZ @ 0x1801B71A4 (--$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IVirtualTouchpadControllerProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v3, &GUID_e1df5cf1_7b02_2923_3169_44209f8d749f, a2);
}
