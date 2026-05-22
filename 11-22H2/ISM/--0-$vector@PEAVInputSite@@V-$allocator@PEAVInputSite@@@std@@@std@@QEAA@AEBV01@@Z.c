/*
 * XREFs of ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800ADC14
 * Callers:
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x1800AE9C0 (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18017244C (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x1801726AC (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 * Callees:
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x1800B013C (-_Buy_nonzero@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@s.c)
 */

__int64 *__fastcall std::vector<InputSite *>::vector<InputSite *>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rbx
  __int64 v6; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  if ( v4 )
  {
    std::vector<LightDismissClientProxy *>::_Buy_nonzero(a1, v4);
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v5);
    a1[1] = v6 + 8 * (v5 >> 3);
  }
  return a1;
}
