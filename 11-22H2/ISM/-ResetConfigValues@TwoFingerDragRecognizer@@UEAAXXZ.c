/*
 * XREFs of ?ResetConfigValues@TwoFingerDragRecognizer@@UEAAXXZ @ 0x1800317A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerDragRecognizer::ResetConfigValues(TwoFingerDragRecognizer *this)
{
  *((_WORD *)this + 38) = TwoFingerDragRecognizer::s_twoFingerDistanceThreshold;
  *((_WORD *)this + 39) = TwoFingerDragRecognizer::s_initialDragThreshold;
  *((_WORD *)this + 42) = TwoFingerDragRecognizer::s_twoFingerActionTimeThreshold;
  *((_WORD *)this + 43) = TwoFingerDragRecognizer::s_twoFingerDistanceVariationThreshold;
}
