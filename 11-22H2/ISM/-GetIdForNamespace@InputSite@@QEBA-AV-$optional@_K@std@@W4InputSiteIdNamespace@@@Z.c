/*
 * XREFs of ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x180070B6C
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180020ED0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x180071094 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800AFEAC (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x1800B40C0 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18011AD50 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?NotifyInputSiteIdentityRemoved@InputSiteManager@@QEAAXUInputSiteId@@@Z @ 0x18014D38C (-NotifyInputSiteIdentityRemoved@InputSiteManager@@QEAAXUInputSiteId@@@Z.c)
 *     ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x1801506C0 (-TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18017244C (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x18017BCE0 (-IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSite::GetIdForNamespace(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  __int64 i; // r9
  __int128 v6; // [rsp+0h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 24);
  for ( i = *(_QWORD *)(a1 + 16); i != v3 && *(_DWORD *)i != a3; i += 16LL )
    ;
  *(_BYTE *)(a2 + 8) = 0;
  if ( i != v3 )
  {
    *(_QWORD *)&v6 = *(_QWORD *)(i + 8);
    BYTE8(v6) = 1;
    *(_OWORD *)a2 = v6;
  }
  return a2;
}
