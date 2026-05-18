/*
 * XREFs of ?SetEyeParameters@SpectreRenderer@@EEAAXAEBUD2D_VECTOR_3F@@MM@Z @ 0x18001AED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpectreRenderer::SetEyeParameters(
        SpectreRenderer *this,
        const struct D2D_VECTOR_3F *a2,
        float a3,
        float a4)
{
  FLOAT y; // xmm1_4
  FLOAT z; // xmm4_4

  y = a2->y;
  z = a2->z;
  *((_DWORD *)this + 36) = LODWORD(a2->x);
  *((FLOAT *)this + 37) = y;
  *((FLOAT *)this + 38) = z;
  *((float *)this + 39) = a3;
  *((float *)this + 40) = a4;
}
