/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84
 * Callers:
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x140002364 (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x1400053D0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x140005A3C (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140005B70 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140005DA0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x14001F210 (-Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z.c)
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x14001F3E0 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140020EE4 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x140023F54 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z @ 0x14002B7D0 (-GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x14004E01C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z @ 0x14005C5C0 (-SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x1400683E4 (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 *     ?DisengageClientDrivenMode@CAudioPump@@UEAAJXZ @ 0x14006B370 (-DisengageClientDrivenMode@CAudioPump@@UEAAJXZ.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14007A4C8 (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x140087D94 (-RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x14004CDF4 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
