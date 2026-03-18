/*
 * XREFs of ZwAlpcDeletePortSection @ 0x14041BD60
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x140419F14 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDeletePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
