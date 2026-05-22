/*
 * XREFs of ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024A54
 * Callers:
 *     ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x1800187E0 (-GetInputSite@DWMFocusedInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180022CB0 (-GetInputSite@DWMLegacyInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180027D9C (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180041664 (-GetInputSiteFromInputDest@InputDestTarget@@AEBA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagI.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180071148 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180071430 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ??4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x180164A20 (--4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x1801C8998 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801D9944 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
