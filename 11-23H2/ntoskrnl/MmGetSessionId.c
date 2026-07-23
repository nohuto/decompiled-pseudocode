/*
 * XREFs of MmGetSessionId @ 0x1402A3ED0
 * Callers:
 *     PspBindProcessSessionToJob @ 0x14069FBC4 (PspBindProcessSessionToJob.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 *     PspInitializeProcessSecurity @ 0x1406B66A0 (PspInitializeProcessSecurity.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     PsGetThreadSessionId @ 0x140724BE0 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     EtwpPsProvTraceProcess @ 0x1407525C0 (EtwpPsProvTraceProcess.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1407A1A8C (MmCreatePeb.c)
 *     ExCallSessionCallBack @ 0x1407C5F60 (ExCallSessionCallBack.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     SeExchangePrimaryToken @ 0x1408405F8 (SeExchangePrimaryToken.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140983EF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A728 (PopSendSuspendResumeApplicationNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  v3 = 0;
  if ( *(_DWORD *)(v1 + 8) != -1 )
    return *(unsigned int *)(v1 + 8);
  return v3;
}
