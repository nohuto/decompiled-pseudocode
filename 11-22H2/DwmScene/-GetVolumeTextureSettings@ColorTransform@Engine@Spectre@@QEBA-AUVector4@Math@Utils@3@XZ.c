/*
 * XREFs of ?GetVolumeTextureSettings@ColorTransform@Engine@Spectre@@QEBA?AUVector4@Math@Utils@3@XZ @ 0x18008FF90
 * Callers:
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?GetWeight@ColorTransform@Engine@Spectre@@QEBAMXZ @ 0x18009002C (-GetWeight@ColorTransform@Engine@Spectre@@QEBAMXZ.c)
 */

__int64 __fastcall Spectre::Engine::ColorTransform::GetVolumeTextureSettings(Spectre::Engine::ColorTransform *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  float Weight; // xmm0_4
  __int64 v4; // r8
  float v5; // xmm2_4
  float v6; // xmm1_4
  __int64 v7; // rax
  __int64 v8; // rcx
  float v9; // xmm0_4
  __int64 result; // rax

  Weight = Spectre::Engine::ColorTransform::GetWeight(a1);
  v4 = *(_QWORD *)(v2 + 144);
  v5 = Weight;
  if ( v4 < 0 )
  {
    v7 = *(_QWORD *)(v2 + 144) & 1LL | (*(_QWORD *)(v2 + 144) >> 1);
    v6 = (float)(int)v7 + (float)(int)v7;
  }
  else
  {
    v6 = (float)(int)v4;
  }
  v8 = *(_QWORD *)(v2 + 136);
  if ( v8 < 0 )
    v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
       + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
  else
    v9 = (float)(int)v8;
  *(_DWORD *)(v1 + 8) = 0;
  result = v1;
  *(float *)(v1 + 12) = v5;
  *(float *)v1 = (float)(v9 - 1.0) / v6;
  *(float *)(v1 + 4) = 0.5 / v6;
  return result;
}
