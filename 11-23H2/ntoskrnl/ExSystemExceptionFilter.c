/*
 * XREFs of ExSystemExceptionFilter @ 0x140865CE0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x140303120 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x14033B1CC (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14034722C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1403473C8 (ExpGetSystemBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x140367D90 (NtShutdownWorkerFactory.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x14056B3CC (KeQueryDpcWatchdogConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x14056BAA8 (KiValidateDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x140574028 (KeQuerySecureSpeculationInformation.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405B99F0 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140604948 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1406051B4 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x140605724 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x14060578C (EtwpGetSignedFieldValue.c)
 *     ExpQueryBootLoaderMetadata @ 0x140605CF8 (ExpQueryBootLoaderMetadata.c)
 *     ExpSetBootLoaderMetadata @ 0x140605DF0 (ExpSetBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x140607910 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140607C54 (ExPoolSetLimit.c)
 *     NtQueryInformationWorkerFactory @ 0x14060FC80 (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
