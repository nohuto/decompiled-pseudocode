/*
 * XREFs of ExSystemExceptionFilter @ 0x140865AA0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x14033AF3C (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140346F9C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140347138 (ExpGetSystemBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x140367BF0 (NtShutdownWorkerFactory.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x14056AD0C (KeQueryDpcWatchdogConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x14056B3E8 (KiValidateDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x140573AE8 (KeQuerySecureSpeculationInformation.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405B9480 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406043F8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140604C64 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1406051D4 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x14060523C (EtwpGetSignedFieldValue.c)
 *     ExpQueryBootLoaderMetadata @ 0x1406057A8 (ExpQueryBootLoaderMetadata.c)
 *     ExpSetBootLoaderMetadata @ 0x1406058A0 (ExpSetBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x1406073C0 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140607704 (ExPoolSetLimit.c)
 *     NtQueryInformationWorkerFactory @ 0x14060F730 (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     sub_140762140 @ 0x140762140 (sub_140762140.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
