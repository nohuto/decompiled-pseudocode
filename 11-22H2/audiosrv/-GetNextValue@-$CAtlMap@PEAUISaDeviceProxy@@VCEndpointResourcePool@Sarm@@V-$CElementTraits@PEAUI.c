/*
 * XREFs of ?GetNextValue@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAAEAVCEndpointResourcePool@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180134860
 * Callers:
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180136B10 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNextValue(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = *(_QWORD *)(v3 + 40);
  if ( !v4 )
  {
    LODWORD(v5) = *(_DWORD *)(v3 + 48) % *(_DWORD *)(a1 + 16);
    do
    {
      v5 = (unsigned int)(v5 + 1);
      v4 = 0LL;
      if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 16) )
        break;
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
    }
    while ( !v4 );
  }
  *a2 = v4;
  return v3 + 8;
}
