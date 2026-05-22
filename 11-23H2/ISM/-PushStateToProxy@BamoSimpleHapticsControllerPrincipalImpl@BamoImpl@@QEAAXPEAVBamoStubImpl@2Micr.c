/*
 * XREFs of ?PushStateToProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801ABDC0
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801ABE20 (-PushStateToProxyOnOutboundMessagesResumed@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UE.c)
 *     ?SendMaterializeProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801ACD70 (-SendMaterializeProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSe.c)
 * Callees:
 *     ?UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801AD74C (-UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 *     ?UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801AD834 (-UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 *     ?UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801AD918 (-UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEA.c)
 *     ?UpdateSupportedFeedbackRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801ADAE8 (-UpdateSupportedFeedbackRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAV.c)
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
