/*
 * XREFs of ??A?$span@USamplerPresenceEntry@@$0?0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z @ 0x1800BB084
 * Callers:
 *     DiscoverSamplers @ 0x1800BA900 (DiscoverSamplers.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800BA9B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     PrepareSamplers @ 0x1800BAF88 (PrepareSamplers.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<SamplerPresenceEntry,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800BB0A0LL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
