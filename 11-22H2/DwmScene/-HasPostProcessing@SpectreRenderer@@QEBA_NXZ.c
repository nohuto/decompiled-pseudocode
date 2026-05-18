/*
 * XREFs of ?HasPostProcessing@SpectreRenderer@@QEBA_NXZ @ 0x1800189CC
 * Callers:
 *     ?SetIntensity@SpectreLightNode@@UEAAJM@Z @ 0x180012970 (-SetIntensity@SpectreLightNode@@UEAAJM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpectreRenderer::HasPostProcessing(SpectreRenderer *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 280LL))(*((_QWORD *)this + 10));
}
