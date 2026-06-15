/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18006570C
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x1800360E0 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18006218C (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800656F0 (-DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x18011579C (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::DisconnectHelper(CEndpointStoreCache *a1)
{
  int EndpointStore; // eax
  struct CEndpointStore *v2; // rbx
  struct CEndpointStore *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(a1, (const unsigned __int16 *)a1, &v3);
  v2 = v3;
  if ( EndpointStore >= 0 )
    CAudioSessionManager::Disconnect(*((CAudioSessionManager **)v3 + 12), 2, 1);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v2);
}
