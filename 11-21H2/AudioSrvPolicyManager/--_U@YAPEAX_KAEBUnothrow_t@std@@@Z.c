/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180019830 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18002C224 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x18002CBF8 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x1800333B8 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x1800351A4 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180036274 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180040564 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800408C8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](unsigned __int64 a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
