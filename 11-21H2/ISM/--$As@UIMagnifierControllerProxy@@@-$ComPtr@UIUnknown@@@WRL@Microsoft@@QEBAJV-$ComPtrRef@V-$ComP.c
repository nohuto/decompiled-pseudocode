/*
 * XREFs of ??$As@UIMagnifierControllerProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMagnifierControllerProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801252E0
 * Callers:
 *     ??$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@XZ @ 0x1801AEC28 (--$GetAttachedObject@UIMagnifierControllerProxy@@VMagnifierControllerProxy@@@InputSite@@QEAA-AV-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IMagnifierControllerProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_b5135dce_13f2_00ca_8db4_0bd6f94fc834, a2);
}
