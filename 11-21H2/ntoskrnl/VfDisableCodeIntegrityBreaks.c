/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x140A83024
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B27B30 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

void VfDisableCodeIntegrityBreaks()
{
  ViCiDefaultActions = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  qword_140D4E188 = ViCiDefaultActions;
}
