/*
 * XREFs of ??$As@UIComponentSiteInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIComponentSiteInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008900C
 * Callers:
 *     ??$GetAttachedObject@UIComponentSiteInputObjectProxy@@VBamoComponentSiteInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoComponentSiteInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180089068 (--$GetAttachedObject@UIComponentSiteInputObjectProxy@@VBamoComponentSiteInputObjectProxy@@@Input.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IComponentSiteInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_76d0682c_efad_f6c3_6b01_5b4201df35b4, a2);
}
