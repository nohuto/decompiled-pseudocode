/*
 * XREFs of ZwAlpcDeletePortSection @ 0x14041C0F0
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x14041A2A4 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
