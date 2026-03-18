/*
 * XREFs of PspSendJobNotification @ 0x14036DF48
 * Callers:
 *     PspSendProcessNotificationToJobChain @ 0x14069F410 (PspSendProcessNotificationToJobChain.c)
 *     PspIncrementJobChainProcessCounts @ 0x14069F520 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1406A04F8 (PspValidateJobAssignmentProcessLimits.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406A3680 (PspEnforceLimitsJobPostCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FABC0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACAF0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1409B1D3C (PsReportProcessMemoryLimitViolation.c)
 *     PspAssociateCompletionPortCallback @ 0x1409B2050 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1407E99F0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
