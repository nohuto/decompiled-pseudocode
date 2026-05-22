/*
 * XREFs of ??$As@UIVirtualTouchpadControllerProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualTouchpadControllerProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180125564
 * Callers:
 *     ??$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@XZ @ 0x1801990EC (--$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IVirtualTouchpadControllerProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_e1df5cf1_7b02_2923_3169_44209f8d749f, a2);
}
