/*
 * XREFs of ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180145810
 * Callers:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801475AC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180084600 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x180086B38 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180143DDC (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x180144B98 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ResizeProcessor::GetResizeControllerInputSite(__int64 a1, __int64 *a2, __int64 *a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *i; // rbx
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  std::vector<InputSite *>::vector<InputSite *>(v8, (__int64)InputSiteManager + 56);
  for ( i = (__int64 *)v8[0]; i != (__int64 *)v8[1]; ++i )
  {
    InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*i, (__int64 *)&v9);
    if ( v9 && v9 == a3 )
    {
      Microsoft::WRL::ComPtr<InputSite>::operator=(a2, *i);
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v9);
      break;
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v9);
  }
  std::vector<_LUID>::_Tidy((__int64)v8);
  return a2;
}
