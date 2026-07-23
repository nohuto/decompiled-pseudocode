/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140742830
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405589A0 (IoRevokeHandlesForProcess.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1406B365C (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x1406B3730 (PspApplyMitigationOptions.c)
 *     ObWaitForMultipleObjects @ 0x1406E38C0 (ObWaitForMultipleObjects.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     ObSetHandleAttributes @ 0x14073FAE0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x14073FCF0 (ObQueryObjectAuditingByHandle.c)
 *     ObGetProcessHandleCount @ 0x1407427C8 (ObGetProcessHandleCount.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     ObFindHandleForObject @ 0x1407AE0B0 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1407BD48C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1407BF804 (ObCompleteObjectDuplication.c)
 *     IopQueryProcessIdsUsingFile @ 0x14094B338 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140958278 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409AE844 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1409EF608 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
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
