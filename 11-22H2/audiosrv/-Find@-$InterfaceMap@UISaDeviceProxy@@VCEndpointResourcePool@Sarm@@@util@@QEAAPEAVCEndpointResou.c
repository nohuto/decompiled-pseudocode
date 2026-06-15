/*
 * XREFs of ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x180134378
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800441C0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180133F40 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ?GetKey@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDeviceProxy@@PEAU3@@Z @ 0x1801346B4 (-GetKey@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDevicePro.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x1801348B4 (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(int a1)
{
  __int64 v2; // rbx
  __int64 Key; // rax
  __int64 Node; // rax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  char v8[24]; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  v6 = 0LL;
  Key = util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetKey();
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach(&v6, Key);
  if ( v6 )
  {
    v7 = v6;
    Node = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
             a1,
             (unsigned int)&v7,
             (unsigned int)&v10,
             (unsigned int)&v9,
             (__int64)v8);
    if ( Node )
      v2 = Node + 8;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
  return v2;
}
