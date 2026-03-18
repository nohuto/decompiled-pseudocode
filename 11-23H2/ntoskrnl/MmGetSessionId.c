/*
 * XREFs of MmGetSessionId @ 0x1402A3C40
 * Callers:
 *     PspBindProcessSessionToJob @ 0x14069FBC4 (PspBindProcessSessionToJob.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     PsGetThreadSessionId @ 0x1407249E0 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     EtwpPsProvTraceProcess @ 0x1407523D0 (EtwpPsProvTraceProcess.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1407A189C (MmCreatePeb.c)
 *     ExCallSessionCallBack @ 0x1407C5C90 (ExCallSessionCallBack.c)
 *     PopInvokeWin32Callout @ 0x1407D38BC (PopInvokeWin32Callout.c)
 *     SeExchangePrimaryToken @ 0x1408402F8 (SeExchangePrimaryToken.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140983CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A528 (PopSendSuspendResumeApplicationNotification.c)
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
