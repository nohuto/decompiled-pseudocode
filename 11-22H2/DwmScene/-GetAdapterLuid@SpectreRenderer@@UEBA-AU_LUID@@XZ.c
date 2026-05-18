/*
 * XREFs of ?GetAdapterLuid@SpectreRenderer@@UEBA?AU_LUID@@XZ @ 0x180010360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall SpectreRenderer::GetAdapterLuid(SpectreRenderer *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 3);
  return (struct _LUID)a2;
}
