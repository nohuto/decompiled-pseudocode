/*
 * XREFs of ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x1801B9620
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x18001FE50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004DF78 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

_BYTE *__fastcall DWMInputRouter::HitTestForPointAndType(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int128 v11[9]; // [rsp+40h] [rbp-B8h] BYREF

  memset_0((char *)v11 + 12, 0, 0x7CuLL);
  *(_QWORD *)((char *)v11 + 4) = a3;
  LODWORD(v11[0]) = a4;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    a2,
    v11,
    *(__int64 (__fastcall ****)(_QWORD, __int128 *, void *))(a1 + 176),
    (__int64)InputSiteManager,
    (__int64)InputSiteHierarchyManager);
  return a2;
}
