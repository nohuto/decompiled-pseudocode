/*
 * XREFs of ?PushStateToProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800A62B0
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800A6310 (-PushStateToProxyOnOutboundMessagesResumed@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800A6618 (-UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micro.c)
 *     ?UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800A6718 (-UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 *     ?UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800A6808 (-UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800A69E0 (-UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateWindowIdRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateParentIdRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateThreadIdRemoteCache(this, a2);
}
