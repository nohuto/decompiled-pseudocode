/*
 * XREFs of ??$As@UIEdgyNotificationSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyNotificationSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801251CC
 * Callers:
 *     ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x180149D5C (-HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyNotificationSourceClientProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a2);
  return v4(v3, &GUID_2066a149_dd02_cdd2_a948_2c520fd9e943, a2);
}
