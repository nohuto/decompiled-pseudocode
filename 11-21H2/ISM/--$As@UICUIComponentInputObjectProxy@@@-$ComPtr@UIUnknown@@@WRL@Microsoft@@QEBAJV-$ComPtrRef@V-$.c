/*
 * XREFs of ??$As@UICUIComponentInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICUIComponentInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083D54
 * Callers:
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180083E0C (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<ICUIComponentInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_ef2daa6b_70a1_714f_af3c_a61437d80866, a2);
}
