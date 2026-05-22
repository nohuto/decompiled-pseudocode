/*
 * XREFs of ??$As@UIInputForwardTargetInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180125284
 * Callers:
 *     ??$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1801A87D0 (--$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectPro.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardTargetInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_d4ef4959_f5fd_4cf7_9e90_49eefb52f5a4, a2);
}
