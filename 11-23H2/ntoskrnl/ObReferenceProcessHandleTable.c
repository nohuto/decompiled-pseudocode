/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140742640
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405582E0 (IoRevokeHandlesForProcess.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1406B362C (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     ObSetHandleAttributes @ 0x14073F8F0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14073FB00 (ObQueryObjectAuditingByHandle.c)
 *     ObGetProcessHandleCount @ 0x1407425D8 (ObGetProcessHandleCount.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     ObFindHandleForObject @ 0x1407ADEC0 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1407BD1BC (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1407BF534 (ObCompleteObjectDuplication.c)
 *     IopQueryProcessIdsUsingFile @ 0x14094B138 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140958078 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409AE644 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1409EF378 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 139;
  Count = 0LL;
  if ( ExAcquireRundownProtection_0(a1 + 139) )
  {
    Count = a1[174].Count;
    if ( !Count )
      ExReleaseRundownProtection_0(v1);
  }
  return Count;
}
