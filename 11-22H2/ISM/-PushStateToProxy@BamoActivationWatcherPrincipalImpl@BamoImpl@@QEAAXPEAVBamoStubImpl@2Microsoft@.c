/*
 * XREFs of ?PushStateToProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B75D4
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B7620 (-PushStateToProxyOnOutboundMessagesResumed@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B7C18 (-UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 *     ?UpdateActivatedEntityRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B7D1C (-UpdateActivatedEntityRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStub.c)
 */

void __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCache(this, a2);
  BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatedEntityRemoteCache(this, a2);
  BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateTopLevelActivatedEntityRemoteCache(this, a2);
}
