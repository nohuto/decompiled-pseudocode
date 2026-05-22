/*
 * XREFs of ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180023B44
 * Callers:
 *     ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180017FB0 (-GetInputSite@DWMFocusedInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180021C30 (-GetInputSite@DWMLegacyInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800269EC (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180040A88 (-GetInputSiteFromInputDest@InputDestTarget@@AEBA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagI.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18005F4BC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18005F7A4 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ??4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x180156740 (--4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x1801BB0F8 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801CC0D4 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<InputSite>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
