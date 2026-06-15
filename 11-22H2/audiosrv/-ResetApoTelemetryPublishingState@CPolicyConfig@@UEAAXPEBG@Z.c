/*
 * XREFs of ?ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z @ 0x180021D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 */

void __fastcall CPolicyConfig::ResetApoTelemetryPublishingState(CPolicyConfig *this, const unsigned __int16 *a2)
{
  struct CEndpointStore *v2; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( CEndpointStoreCache::GetEndpointStore(this, a2, &v2) >= 0 )
    _InterlockedExchange((volatile __int32 *)v2 + 52, 0);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
}
