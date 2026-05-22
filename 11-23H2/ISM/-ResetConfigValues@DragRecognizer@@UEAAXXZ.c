/*
 * XREFs of ?ResetConfigValues@DragRecognizer@@UEAAXXZ @ 0x1801D5C10
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x1801D32F4 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DragRecognizer::ResetConfigValues(DragRecognizer *this)
{
  *((_WORD *)this + 8) = DragRecognizer::s_initialDragThreshold;
  *((_WORD *)this + 9) = DragRecognizer::s_orientationBias;
  *((_WORD *)this + 11) = DragRecognizer::s_directionLockThreshold;
  *((_WORD *)this + 12) = DragRecognizer::s_directionLockMinorThreshold;
  *((_WORD *)this + 13) = DragRecognizer::s_minimumUpdateThreshold;
  *((_WORD *)this + 14) = DragRecognizer::s_jitterDeadZoneThreshold;
  DragRecognizer::RecomputeOrientationBiasPixels(this);
}
