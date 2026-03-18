/*
 * XREFs of AppendShaderBody @ 0x1800BB27C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800BA9B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     AppendLights @ 0x18001B768 (AppendLights.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B457C (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     PerformSample @ 0x1800BA674 (PerformSample.c)
 *     AppendCustomSamplerShaderBody @ 0x1800F6404 (AppendCustomSamplerShaderBody.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800F9490 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 */

__int64 __fastcall AppendShaderBody(
        _DWORD *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        _BYTE *a8)
{
  __int64 v12; // rax
  int appended; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // eax
  __int16 v17; // r15
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int128 v25; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(_WORD *)(a3 + 52) & 0xFF00) == 0x200 )
    return AppendCustomSamplerShaderBody((_DWORD)a1, a2, a3, a4, a5, a6, (__int64)a7);
  v12 = *(_QWORD *)(a3 + 40);
  v25 = *(_OWORD *)a3;
  appended = CShaderLinkingGraphBuilder::AppendNode((__int64)a1, a2, a5, a6, v12, &v25);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0x4A8u, 0LL);
  }
  else
  {
    v16 = *(unsigned __int16 *)(a3 + 52);
    v17 = *(_WORD *)(a3 + 52);
    if ( v16 == 11 )
    {
      v19 = AppendLights(a2, a1, (_DWORD *)(a4 + 128), *(_DWORD *)a3);
      v15 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x4ADu, 0LL);
      else
        *a8 = 1;
    }
    else if ( (v16 & 0xFF00) == 0x100 )
    {
      v21 = CShaderLinkingGraphBuilder::SwizzleNode(a1, a2);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4B6u, 0LL);
      }
      else
      {
        v23 = PerformSample((unsigned __int64)a1, a4, (unsigned __int8)v17, a2, a2, a7);
        v15 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x4BDu, 0LL);
      }
    }
  }
  return v15;
}
