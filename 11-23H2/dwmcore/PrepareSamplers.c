/*
 * XREFs of PrepareSamplers @ 0x1800BAF88
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800BA9B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PerformSample @ 0x1800BA674 (PerformSample.c)
 *     ??A?$span@USamplerPresenceEntry@@$0?0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z @ 0x1800BB084 (--A-$span@USamplerPresenceEntry@@$0-0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z.c)
 *     PopulateSamplerArguments @ 0x1800BB0C8 (PopulateSamplerArguments.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800BB574 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 */

__int64 __fastcall PrepareSamplers(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v4; // r14
  int FragmentsModuleNoRef; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  void *v10; // r15
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v17);
  v8 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, FragmentsModuleNoRef, 0x334u, 0LL);
    return v8;
  }
  v9 = 0;
  if ( *a3 )
  {
    v10 = (void *)v17;
    do
    {
      if ( *(_BYTE *)gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9)
        || *(_BYTE *)(gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9) + 2) )
      {
        v11 = gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9);
        v12 = PopulateSamplerArguments(v4, a2, v9, v11, (__int64)v10);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x33Bu, 0LL);
          return v8;
        }
        if ( *(_BYTE *)(gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9) + 1) )
        {
          v14 = PerformSample(v4, a2, v9, v9 | 0x100, v9 | 0x200, v10);
          v8 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x345u, 0LL);
            return v8;
          }
        }
      }
      ++v9;
    }
    while ( v9 < *a3 );
  }
  return v8;
}
