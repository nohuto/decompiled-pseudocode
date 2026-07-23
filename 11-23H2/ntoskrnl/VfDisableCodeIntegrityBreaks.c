/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x140AC39DC
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B69A68 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

void VfDisableCodeIntegrityBreaks()
{
  ViCiDefaultActions = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  qword_140D67188 = ViCiDefaultActions;
}
