/*
 * XREFs of ?Add@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@PEAPEAU__POSITION@@@Z @ 0x180126120
 * Callers:
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180128F18 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x1801263F0 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ?GetKey@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDeviceProxy@@PEAU3@@Z @ 0x180126B88 (-GetKey@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDevicePro.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x180126DF4 (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 *     ?SetAt@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUISaDeviceProxy@@AEBVCEndpointResourcePool@Sarm@@@Z @ 0x180128E40 (-SetAt@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDevic.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Add(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 Key; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  char v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  __int128 v19; // [rsp+60h] [rbp-38h]
  char v20[8]; // [rsp+70h] [rbp-28h] BYREF
  ATL::CAtlException *v21; // [rsp+78h] [rbp-20h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  Key = util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetKey();
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach(&v13, Key);
  v7 = v13;
  if ( v13 )
  {
    v14 = v13;
    if ( !ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
            a1,
            (unsigned int)&v14,
            (unsigned int)&v12,
            (unsigned int)&v23,
            (__int64)v20) )
    {
      try
      {
        v16 = 0LL;
        v17 = 1;
        v18 = 0;
        v19 = 0LL;
        v12 = 0LL;
        v23 = v7;
        v9 = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::SetAt(
               a1,
               &v23,
               &v16);
        v12 = v9;
      }
      catch ( ATL::CAtlException *v21 )
      {
        v11 = v21;
        if ( *(_DWORD *)v21 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v23) = *(_DWORD *)v11;
        if ( (int)v23 < 0 )
        {
          v5 = v15;
          goto LABEL_9;
        }
        v3 = a3;
        v9 = v12;
      }
      v5 = v9 + 8;
      if ( v3 )
        *v3 = v9;
    }
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
  return v5;
}
