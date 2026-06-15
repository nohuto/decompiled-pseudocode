/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800E9748
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18005A308 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18005C314 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800E9564 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800E97B0 (-DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DFDF8 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::DisconnectHelper(RTL_SRWLOCK *a1)
{
  int EndpointStore; // eax
  struct CEndpointStore *v2; // rbx
  struct CEndpointStore *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(a1, (const unsigned __int16 *)a1, &v3);
  v2 = v3;
  if ( EndpointStore >= 0 )
    CAudioSessionManager::Disconnect(*((_QWORD *)v3 + 12), 2u, 1);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v2);
}
