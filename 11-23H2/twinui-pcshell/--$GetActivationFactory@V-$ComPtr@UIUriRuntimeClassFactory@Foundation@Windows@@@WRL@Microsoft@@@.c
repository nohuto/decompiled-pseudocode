/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802D2174
 * Callers:
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D8EC4 (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 *     ?NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ @ 0x1803D9558 (-NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180401954 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180423140 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 *     ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180549B6C (-ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x180741D44 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x180745794 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, a2);
}
