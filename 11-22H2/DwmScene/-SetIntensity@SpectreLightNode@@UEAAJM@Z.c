/*
 * XREFs of ?SetIntensity@SpectreLightNode@@UEAAJM@Z @ 0x180012970
 * Callers:
 *     <none>
 * Callees:
 *     ?HasPostProcessing@SpectreRenderer@@QEBA_NXZ @ 0x1800189CC (-HasPostProcessing@SpectreRenderer@@QEBA_NXZ.c)
 */

__int64 __fastcall SpectreLightNode::SetIntensity(SpectreLightNode *this, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !SpectreRenderer::HasPostProcessing(SpectreRenderer::s_pInstance) )
    v3 = a2 * 3.1415927;
  if ( (*((_DWORD *)this + 12) & 0xFFFFFFFB) != 0 )
    *(float *)(*((_QWORD *)this + 4) + 104LL) = v3;
  else
    *((float *)this + 17) = v3;
  return 0LL;
}
