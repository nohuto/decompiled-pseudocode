/*
 * XREFs of ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180084600
 * Callers:
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18008538C (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801455A4 (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180145810 (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003BDEC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 */

_QWORD *__fastcall std::vector<InputSite *>::vector<InputSite *>(_QWORD *a1, __int64 a2)
{
  const void *v3; // r14
  __int64 v4; // rbp
  signed __int64 v5; // rbp
  size_t size_of; // rax
  char *v7; // rax
  char *v8; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = v4 - (_QWORD)v3;
    size_of = std::_Get_size_of_n<8>(v5 >> 3);
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = &v7[8 * (v5 >> 3)];
    memmove_0(v7, v3, v5);
    a1[1] = &v8[8 * (v5 >> 3)];
  }
  return a1;
}
