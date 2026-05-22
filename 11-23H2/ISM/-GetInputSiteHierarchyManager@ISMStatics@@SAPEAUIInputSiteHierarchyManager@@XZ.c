/*
 * XREFs of ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004DF78
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?OnCacheTimer@InputSinkDataCache@@QEAAXXZ @ 0x18004DF40 (-OnCacheTimer@InputSinkDataCache@@QEAAXXZ.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x18009D95C (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18013F688 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180142610 (-TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801641CC (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801B9380 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x1801B95A0 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x1801B9620 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@K@Z.c)
 *     ?HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@KK@Z @ 0x1801B96D0 (-HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@KK@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801B9E4C (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801BA190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18004DFC0 (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 */

struct IInputSiteHierarchyManager *ISMStatics::GetInputSiteHierarchyManager(void)
{
  struct IInputSiteHierarchyManager *result; // rax
  struct IInputSiteHierarchyManager **v1; // rax
  struct IInputSiteHierarchyManager *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v1 = (struct IInputSiteHierarchyManager **)InputSiteHierarchyManager::Create(&v3);
    v2 = *v1;
    *v1 = 0LL;
    ISMStatics::s_inputSiteHierarchyManager = v2;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v3);
    return ISMStatics::s_inputSiteHierarchyManager;
  }
  return result;
}
