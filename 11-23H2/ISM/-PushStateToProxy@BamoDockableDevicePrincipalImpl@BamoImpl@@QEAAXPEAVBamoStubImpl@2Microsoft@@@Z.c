/*
 * XREFs of ?PushStateToProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019D70C
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoDockableDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019D890 (-PushStateToProxyOnOutboundMessagesResumed@BamoDockableDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIM.c)
 *     ?SendMaterializeProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019E310 (-SendMaterializeProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@P.c)
 * Callees:
 *     ?UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019EE98 (-UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micr.c)
 *     ?UpdateDeviceTypeRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019EF90 (-UpdateDeviceTypeRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mi.c)
 *     ?UpdateInterfacePathRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019F254 (-UpdateInterfacePathRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdatePrimaryUsagePageRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019F514 (-UpdatePrimaryUsagePageRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

void __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::PushStateToProxy(
        BamoImpl::BamoDockableDevicePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdateInterfacePathRemoteCache(this, a2);
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceIdRemoteCache(this, a2);
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceTypeRemoteCache(this, a2);
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsagePageRemoteCache(this, a2);
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsageIdRemoteCache(this, a2);
}
