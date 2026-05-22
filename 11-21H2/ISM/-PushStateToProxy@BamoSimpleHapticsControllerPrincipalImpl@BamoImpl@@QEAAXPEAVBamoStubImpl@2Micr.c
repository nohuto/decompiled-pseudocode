/*
 * XREFs of ?PushStateToProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018DAB8
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018DB10 (-PushStateToProxyOnOutboundMessagesResumed@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UE.c)
 *     ?SendMaterializeProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018E9C0 (-SendMaterializeProxy@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSe.c)
 * Callees:
 *     ?UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018F3EC (-UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 *     ?UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018F4DC (-UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 *     ?UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018F5C8 (-UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEA.c)
 *     ?UpdateSupportedFeedbackRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018F7A8 (-UpdateSupportedFeedbackRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAV.c)
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
