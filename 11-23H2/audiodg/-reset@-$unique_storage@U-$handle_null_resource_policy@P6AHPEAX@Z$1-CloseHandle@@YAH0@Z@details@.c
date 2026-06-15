/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140002CF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x14001A3A4 (--$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Micr.c)
 *     ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x14001AB90 (-Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z.c)
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x14001AE00 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ?Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@@Z @ 0x14001AEC0 (-Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@@.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001C7D0 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x14001D9D0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 *     _lambda_10c7ce318882e0e942d95a651b89d589_::operator() @ 0x1400504E0 (_lambda_10c7ce318882e0e942d95a651b89d589_--operator().c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x1400736D4 (--1CAudioPump@@QEAA@XZ.c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140073DE0 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ??1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140080898 (--1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140082270 (-CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHC.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140087608 (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x14008E860 (-Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
