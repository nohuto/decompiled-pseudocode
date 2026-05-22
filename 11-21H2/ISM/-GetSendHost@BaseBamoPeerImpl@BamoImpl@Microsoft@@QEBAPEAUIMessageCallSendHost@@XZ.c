/*
 * XREFs of ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18001F8D0
 * Callers:
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001C750 (-RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UE.c)
 *     ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001EED0 (-CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18001F120 (-UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 *     ?SendMaterializeProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001F220 (-SendMaterializeProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x18008F1EC (-UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     ?UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x180137D40 (-UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     ?UpdateTouchpadRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x180137E38 (-UpdateTouchpadRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     ?UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ @ 0x18015EEE8 (-UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ.c)
 * Callees:
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

struct IMessageCallSendHost *__fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int64 v1; // rax
  struct IMessageCallSendHost *result; // rax

  v1 = *((_QWORD *)this + 3);
  if ( !*((_BYTE *)this + 48) )
    return *(struct IMessageCallSendHost **)(*(_QWORD *)(v1 + 32) + 72LL);
  result = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v1 + 32));
  if ( result )
    return (struct IMessageCallSendHost *)((char *)result + 16);
  return result;
}
