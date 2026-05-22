/*
 * XREFs of ??$As@UIResizeAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801253F4
 * Callers:
 *     ??$GetAttachedObject@UIResizeAreaClientProxy@@VBamoResizeAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x180143D38 (--$GetAttachedObject@UIResizeAreaClientProxy@@VBamoResizeAreaClientProxy@@@InputSite@@QEAA-AV-$C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IResizeAreaClientProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_adc8aaff_4aab_c8d1_611e_7727c2749347, a2);
}
