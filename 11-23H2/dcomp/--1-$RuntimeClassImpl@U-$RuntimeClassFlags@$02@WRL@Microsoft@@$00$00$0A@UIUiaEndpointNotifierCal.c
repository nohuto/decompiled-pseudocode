/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000EB1C
 * Callers:
 *     ??_EUiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000EAE0 (--_EUiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIUiaEndpointNotifierCallback@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801117B0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIUiaEndpointNotifierCallback@@VFtmBa.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1 + 48);
}
