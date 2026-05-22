/*
 * XREFs of ??$GetAttachedObject@UIManualResizeAreaClientProxy@@VBamoManualResizeAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoManualResizeAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x180143C94
 * Callers:
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801455A4 (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIManualResizeAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualResizeAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180125398 (--$As@UIManualResizeAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

_QWORD *__fastcall InputSite::GetAttachedObject<IManualResizeAreaClientProxy,BamoManualResizeAreaClientProxy>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IManualResizeAreaClientProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  v6 = (void (__fastcall ***)(_QWORD))((v3 - 8) & -(__int64)(v3 != 0));
  *a2 = v6;
  if ( v6 )
    (**v6)(v6);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v8);
  return a2;
}
