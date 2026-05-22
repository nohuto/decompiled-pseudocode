/*
 * XREFs of ?PushStateToProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801B9DA0
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801B9E00 (-PushStateToProxyOnOutboundMessagesResumed@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UE.c)
 *     ?SendMaterializeProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801BAD50 (-SendMaterializeProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSe.c)
 * Callees:
 *     ?UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801BB72C (-UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 *     ?UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801BB814 (-UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 *     ?UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801BB8F8 (-UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEA.c)
 *     ?UpdateSupportedFeedbackRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801BBAC8 (-UpdateSupportedFeedbackRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAV.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateSupportedFeedbackRemoteCache(this, a2);
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsIntensitySupportedRemoteCache(this, a2);
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayCountSupportedRemoteCache(this, a2);
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayDurationSupportedRemoteCache(this, a2);
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsReplayPauseIntervalSupportedRemoteCache(this, a2);
}
