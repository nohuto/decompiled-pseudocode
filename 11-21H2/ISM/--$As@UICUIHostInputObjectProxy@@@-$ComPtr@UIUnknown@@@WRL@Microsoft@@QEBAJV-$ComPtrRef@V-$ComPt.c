/*
 * XREFs of ??$As@UICUIHostInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICUIHostInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083DB0
 * Callers:
 *     ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083EB0 (--$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA-AV-$C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<ICUIHostInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_eec18fb6_8f64_46d4_277e_b7822e25ead1, a2);
}
